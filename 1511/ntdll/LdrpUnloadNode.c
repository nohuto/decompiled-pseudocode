/*
 * XREFs of LdrpUnloadNode @ 0x180007644
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x180008D48 (LdrpDecrementModuleLoadCountEx.c)
 * Callees:
 *     LdrpProcessDetachNode @ 0x18000554C (LdrpProcessDetachNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180005CB0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpRemoveDataTableEntry @ 0x180007DAC (LdrpRemoveDataTableEntry.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180008D48 (LdrpDecrementModuleLoadCountEx.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18000ECD0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpSendDllNotifications @ 0x18000F690 (LdrpSendDllNotifications.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002DBF0 (RtlRbRemoveNode.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     AVrfDllUnloadNotification @ 0x1800CDEF8 (AVrfDllUnloadNotification.c)
 */

int __fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *v1; // rbp
  void (__fastcall *v3)(_QWORD *); // rsi
  _QWORD *i; // r14
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  _QWORD *j; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rsi
  _QWORD *v14; // rdi

  v1 = NtCurrentPeb();
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 56) == -4 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    LdrpProcessDetachNode((_QWORD **)a1);
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
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications(i - 20, 2LL);
      if ( v3 )
        v3(i - 20);
      SbUpdateSwitchContextBasedOnDll(i - 20, v5, 1LL);
      if ( (v1->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2744,
        (unsigned int)"LdrpUnloadNode",
        2,
        (__int64)"Unmapping DLL \"%wZ\"\n");
    LdrUnloadAlternateResourceModuleEx((PVOID)*(i - 14), 0);
  }
  LODWORD(v6) = RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_18:
  while ( 1 )
  {
    v7 = *(_QWORD ***)(a1 + 40);
    if ( !v7 )
      break;
    v8 = *v7;
    if ( *v7 == v7 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v6 = (_QWORD *)*v8;
      *v7 = (_QWORD *)*v8;
    }
    if ( !v8 )
      break;
    v9 = (_QWORD *)v8[1];
    v10 = v8 + 2;
    for ( j = (_QWORD *)v9[6]; (_QWORD *)*j != v10; j = (_QWORD *)*j )
      ;
    *j = *v10;
    if ( (_QWORD *)v9[6] == v10 )
    {
      if ( j == v10 )
        j = 0LL;
      v9[6] = j;
    }
    LdrpDecrementModuleLoadCountEx(*v9 - 160LL, 0LL);
    LODWORD(v6) = RtlFreeHeap(LdrpHeap, 0, v8);
  }
  v12 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v12 != (_QWORD *)a1 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      *((_DWORD *)v12 - 14) |= 2u;
      v14 = v12 - 20;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      LdrpRemoveDataTableEntry(v14);
      if ( *((char *)v14 + 104) < 0 )
      {
        RtlRbRemoveNode(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)(v14 + 28));
        RtlRbRemoveNode(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)(v14 + 25));
        *((_DWORD *)v14 + 16) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      LODWORD(v6) = LdrpDereferenceModule(v14);
      v12 = v13;
    }
    while ( v13 != (_QWORD *)a1 );
  }
  return (int)v6;
}
