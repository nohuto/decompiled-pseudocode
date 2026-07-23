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

int __fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *v1; // rbp
  void (__fastcall *v3)(_QWORD *); // rsi
  _QWORD *i; // r14
  _QWORD *v5; // rdi
  _DWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD **v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD *j; // rcx

  v1 = NtCurrentPeb();
  v3 = 0LL;
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
    v3 = (void (__fastcall *)(_QWORD *))((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                              g_pfnSE_LdrEntryRemoved,
                                                                              64
                                                                            - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications((__int64)(i - 20), 2u);
      if ( v3 )
        v3(i - 20);
      SbUpdateSwitchContextBasedOnDll((__int64)(i - 20), v6);
      if ( (v1->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2748,
        (unsigned int)"LdrpUnloadNode",
        2,
        (__int64)"Unmapping DLL \"%wZ\"\n",
        v5 + 9);
    LdrUnloadAlternateResourceModuleEx((PVOID)v5[6], 0);
  }
  LODWORD(v7) = RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_18:
  while ( 1 )
  {
    v8 = *(_QWORD ***)(a1 + 40);
    if ( !v8 )
      break;
    v12 = *v8;
    if ( *v8 == v8 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v7 = (_QWORD *)*v12;
      *v8 = (_QWORD *)*v12;
    }
    if ( !v12 )
      break;
    v13 = (_QWORD *)v12[1];
    v14 = v12 + 2;
    for ( j = (_QWORD *)v13[6]; (_QWORD *)*j != v14; j = (_QWORD *)*j )
      ;
    *j = *v14;
    if ( (_QWORD *)v13[6] == v14 )
    {
      if ( j == v14 )
        j = 0LL;
      v13[6] = j;
    }
    LdrpDecrementModuleLoadCount(*v13 - 160LL);
    LODWORD(v7) = RtlFreeHeap(LdrpHeap, 0, v12);
  }
  v9 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v9 != (_QWORD *)a1 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      *((_DWORD *)v9 - 14) |= 2u;
      v11 = v9 - 20;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      LdrpRemoveDataTableEntry(v11);
      if ( *((char *)v11 + 104) < 0 )
      {
        RtlRbRemoveNode(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)(v11 + 28));
        RtlRbRemoveNode(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)(v11 + 25));
        *((_DWORD *)v11 + 16) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      LODWORD(v7) = LdrpDereferenceModule((char *)v11);
      v9 = v10;
    }
    while ( v10 != (_QWORD *)a1 );
  }
  return (int)v7;
}
