/*
 * XREFs of LdrpUnloadNode @ 0x180043080
 * Callers:
 *     LdrpDecrementModuleLoadCount @ 0x1800384B0 (LdrpDecrementModuleLoadCount.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpDecrementModuleLoadCount @ 0x1800384B0 (LdrpDecrementModuleLoadCount.c)
 *     LdrpSendDllNotifications @ 0x1800419B0 (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180041A50 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpRemoveDataTableEntry @ 0x180042EB8 (LdrpRemoveDataTableEntry.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180043500 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpProcessDetachNode @ 0x180043728 (LdrpProcessDetachNode.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     AVrfDllUnloadNotification @ 0x1800C4BC8 (AVrfDllUnloadNotification.c)
 */

__int64 __fastcall LdrpUnloadNode(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _PEB *v4; // rbp
  void (__fastcall *v6)(_QWORD *); // rsi
  _QWORD *i; // r14
  _QWORD *v8; // rdi
  _DWORD *v9; // rdx
  __int64 result; // rax
  _QWORD **v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // r8
  char *v17; // rdx
  char *j; // rcx

  v4 = NtCurrentPeb();
  v6 = 0LL;
  if ( *(_DWORD *)(a1 + 56) == -4 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    LdrpProcessDetachNode();
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 56) != 7 )
  {
    if ( *(_DWORD *)(a1 + 56) != 9 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_5:
  if ( g_ShimsEnabled )
    v6 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                g_pfnSE_LdrEntryRemoved,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v8 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications((__int64)(i - 20), 2u);
      if ( v6 )
        v6(i - 20);
      SbUpdateSwitchContextBasedOnDll((__int64)(i - 20), v9);
      if ( (v4->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2748,
        (unsigned int)"LdrpUnloadNode",
        2,
        "Unmapping DLL \"%wZ\"\n",
        v8 + 9);
    LdrUnloadAlternateResourceModuleEx(v8[6], 0LL);
  }
  result = RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
LABEL_18:
  while ( 1 )
  {
    v11 = *(_QWORD ***)(a1 + 40);
    if ( !v11 )
      break;
    v15 = *v11;
    if ( *v11 == v11 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      result = *v15;
      *v11 = (_QWORD *)*v15;
    }
    if ( !v15 )
      break;
    v16 = (_QWORD *)v15[1];
    v17 = (char *)(v15 + 2);
    for ( j = (char *)v16[6]; *(char **)j != v17; j = *(char **)j )
      ;
    *(_QWORD *)j = *(_QWORD *)v17;
    if ( (char *)v16[6] == v17 )
    {
      if ( j == v17 )
        j = 0LL;
      v16[6] = j;
    }
    LdrpDecrementModuleLoadCount(*v16 - 160LL, v17, (__int64)v16, a4);
    result = RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v15);
  }
  v12 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v12 != (_QWORD *)a1 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      *((_DWORD *)v12 - 14) |= 2u;
      v14 = (__int64)(v12 - 20);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, a2, a3, a4);
      LdrpRemoveDataTableEntry((__int64 *)v14);
      if ( *(char *)(v14 + 104) < 0 )
      {
        RtlRbRemoveNode((unsigned __int64 *)&LdrpMappingInfoIndex, (unsigned __int64 *)(v14 + 224));
        RtlRbRemoveNode((unsigned __int64 *)&LdrpModuleBaseAddressIndex, (unsigned __int64 *)(v14 + 200));
        *(_DWORD *)(v14 + 64) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      result = LdrpDereferenceModule(v14);
      v12 = v13;
    }
    while ( v13 != (_QWORD *)a1 );
  }
  return result;
}
