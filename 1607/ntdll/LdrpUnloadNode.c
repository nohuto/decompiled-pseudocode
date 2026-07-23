/*
 * XREFs of LdrpUnloadNode @ 0x18000D720
 * Callers:
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F008 (LdrpDecrementModuleLoadCountEx.c)
 * Callees:
 *     LdrpProcessDetachNode @ 0x18000BBF4 (LdrpProcessDetachNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C350 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     LdrpRemoveDataTableEntry @ 0x18000DC78 (LdrpRemoveDataTableEntry.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlRbRemoveNode @ 0x18001C030 (RtlRbRemoveNode.c)
 *     LdrpSendDllNotifications @ 0x18002E648 (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002E6DC (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpAcquireModuleDatatableLock @ 0x1800D0628 (LdrpAcquireModuleDatatableLock.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpReleaseModuleDatatableLock @ 0x1800D0734 (LdrpReleaseModuleDatatableLock.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1800D0DD0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     AVrfDllUnloadNotification @ 0x1800D5F64 (AVrfDllUnloadNotification.c)
 */

int __fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *v1; // rax
  bool v2; // zf
  void (__fastcall *v4)(_QWORD *); // rbp
  _QWORD *i; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *j; // rdx
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  int v17; // [rsp+50h] [rbp+8h] BYREF
  struct _PEB *v18; // [rsp+58h] [rbp+10h]

  v1 = NtCurrentPeb();
  v2 = *(_DWORD *)(a1 + 56) == -4;
  v18 = v1;
  v4 = 0LL;
  if ( v2 )
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
    v4 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                g_pfnSE_LdrEntryRemoved,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v6 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications(i - 20, 2LL);
      if ( v4 )
        v4(i - 20);
      SbUpdateSwitchContextBasedOnDll(i - 20, v7, 1LL);
      if ( (v18->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2745,
        (unsigned int)"LdrpUnloadNode",
        2,
        (__int64)"Unmapping DLL \"%wZ\"\n",
        v6 + 9);
    LdrUnloadAlternateResourceModuleEx((PVOID)v6[6], 0);
  }
  LODWORD(v1) = RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_18:
  while ( 1 )
  {
    v8 = *(_QWORD ***)(a1 + 40);
    if ( !v8 )
      break;
    v9 = *v8;
    if ( *v8 == v8 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v1 = (struct _PEB *)*v9;
      *v8 = (_QWORD *)*v9;
    }
    if ( !v9 )
      break;
    LdrpAcquireModuleDatatableLock();
    v10 = v9[1];
    v11 = v9 + 2;
    for ( j = *(_QWORD **)(v10 + 48); (_QWORD *)*j != v11; j = (_QWORD *)*j )
      ;
    *j = *v11;
    if ( *(_QWORD **)(v10 + 48) == v11 )
    {
      if ( j == v11 )
        j = 0LL;
      *(_QWORD *)(v10 + 48) = j;
    }
    LdrpDecrementNodeLoadCountLockHeld(v10, 0LL, &v17);
    LdrpReleaseModuleDatatableLock();
    if ( v17 )
      LdrpUnloadNode(v10);
    LODWORD(v1) = RtlFreeHeap(LdrpHeap, 0, v9);
  }
  v13 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v13 != (_QWORD *)a1 )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      v15 = v13 - 20;
      *((_DWORD *)v15 + 26) |= 2u;
      LdrpAcquireModuleDatatableLock();
      LdrpRemoveDataTableEntry(v15);
      if ( *((char *)v15 + 104) < 0 )
      {
        RtlRbRemoveNode(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)(v15 + 28));
        RtlRbRemoveNode(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)(v15 + 25));
        *((_DWORD *)v15 + 16) = 0;
      }
      LdrpReleaseModuleDatatableLock();
      LODWORD(v1) = LdrpDereferenceModule(v15);
      v13 = v14;
    }
    while ( v14 != (_QWORD *)a1 );
  }
  return (int)v1;
}
