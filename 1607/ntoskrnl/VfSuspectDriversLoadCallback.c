/*
 * XREFs of VfSuspectDriversLoadCallback @ 0x140716114
 * Callers:
 *     VfDriverLoadImage @ 0x1406FDD58 (VfDriverLoadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     VfTargetDriversAdd @ 0x1400824FC (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14012F358 (VfTargetDriversRemove.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     VfUtilPrintCheckinString @ 0x140702EF0 (VfUtilPrintCheckinString.c)
 *     VfCheckImageCompliance @ 0x140703D48 (VfCheckImageCompliance.c)
 *     VfNotifyVerifierExtensions @ 0x140704E30 (VfNotifyVerifierExtensions.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F4AC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F57C (VfThunkApplyThunks.c)
 *     VfTargetDriversEnableVerifier @ 0x14070FEB0 (VfTargetDriversEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x140715E70 (VfSuspectDriversAllocateEntry.c)
 */

LONG __fastcall VfSuspectDriversLoadCallback(__int64 a1, __int64 Entry, int a3, unsigned int a4)
{
  int v8; // r14d
  __int64 i; // rsi
  __int64 j; // rsi
  int v11; // esi
  BOOLEAN v12; // al
  int v13; // eax
  __int64 *v14; // rax
  int v15; // eax
  LONG result; // eax

  v8 = 0;
  VfDriverLock();
  if ( (VfOptionFlags & 1) != 0 )
  {
    for ( i = VfExcludedDriversList; (__int64 *)i != &VfExcludedDriversList; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_57;
    }
  }
  if ( (MmVerifyDriverLevel & 0xFF8000) != 0 )
  {
    for ( j = VfXdvExcludedDriversList; (__int64 *)j != &VfXdvExcludedDriversList; j = *(_QWORD *)j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_57;
    }
  }
  v11 = 1;
  if ( RtlEqualUnicodeString(&VfTcpIpName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTcpIpDllBase = *(_QWORD *)(a1 + 48);
    VfTcpIpSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTdxDllBase = *(_QWORD *)(a1 + 48);
    VfTdxSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfMrxsmbDllBase = *(_QWORD *)(a1 + 48);
    VfMrxsmbSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTmName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTmDllBase = *(_QWORD *)(a1 + 48);
    VfTmSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfWin32kDllBase = *(_QWORD *)(a1 + 48);
    VfWin32kSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfKsName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfKsDllBase = *(_QWORD *)(a1 + 48);
    VfKsSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  if ( !a3 )
  {
    v8 = VfThunkApplyMandatoryThunks(a1, a4);
    if ( !v8 )
      goto LABEL_57;
    v8 = 0;
  }
  if ( !Entry )
  {
    Entry = VfSuspectDriversList;
    v11 = 0;
    while ( (__int64 *)Entry != &VfSuspectDriversList )
    {
      v12 = RtlEqualUnicodeString((PCUNICODE_STRING)(Entry + 24), (PCUNICODE_STRING)(a1 + 88), 1u);
      v11 = v12;
      if ( v12 )
        goto LABEL_45;
      Entry = *(_QWORD *)Entry;
    }
    if ( KernelVerifier )
    {
      if ( a3 )
        goto LABEL_38;
      v13 = ViForceAllDriversSuspect;
    }
    else
    {
      if ( ViVerifyAllDrivers == 1 )
        goto LABEL_38;
      if ( VfRandomVerifiedDrivers )
      {
        if ( _bittest((const signed __int32 *)qword_14072C250, ++ViLoadedDriversCount) )
        {
          --VfRandomVerifiedDrivers;
          goto LABEL_38;
        }
      }
      v13 = 0;
    }
    if ( !v13 )
    {
      Entry = 0LL;
      goto LABEL_45;
    }
LABEL_38:
    Entry = (__int64)VfSuspectDriversAllocateEntry((const void **)(a1 + 88));
    if ( Entry )
    {
      v14 = (__int64 *)qword_140300B28;
      if ( *(__int64 **)qword_140300B28 != &VfSuspectDriversList )
        __fastfail(3u);
      *(_QWORD *)Entry = &VfSuspectDriversList;
      v11 = 1;
      *(_QWORD *)(Entry + 8) = v14;
      *v14 = Entry;
      qword_140300B28 = Entry;
    }
  }
LABEL_45:
  if ( a4 )
  {
    if ( v11 )
      v15 = VfTargetDriversEnableVerifier(*(_QWORD *)(a1 + 48), Entry);
    else
      v15 = 1;
  }
  else
  {
    v15 = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), Entry);
  }
  if ( (v11 || KernelVerifier) && v15 )
  {
    v8 = VfThunkApplyThunks(a1, a4);
    if ( v8 )
    {
      if ( v11 )
      {
        VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88));
        VfCheckImageCompliance(a1);
        ++dword_140307270;
        ++*(_DWORD *)(Entry + 16);
        VfNotifyVerifierExtensions(1, a1);
      }
    }
    else
    {
      VfTargetDriversRemove(a1);
    }
  }
LABEL_57:
  ViDriversLoadLockOwner = 0LL;
  result = KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v8 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
