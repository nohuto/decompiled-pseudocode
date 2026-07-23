/*
 * XREFs of LdrpSendPostSnapNotifications @ 0x18002E4DC
 * Callers:
 *     LdrpNotifyLoadOfGraph @ 0x18002E458 (LdrpNotifyLoadOfGraph.c)
 * Callees:
 *     CompatCachepLookupCdb @ 0x180010758 (CompatCachepLookupCdb.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrpSendDllNotifications @ 0x18002E648 (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002E6DC (SbUpdateSwitchContextBasedOnDll.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     AVrfDllLoadNotification @ 0x1800879A0 (AVrfDllLoadNotification.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpSendPostSnapNotifications(__int64 a1)
{
  __int64 v1; // r12
  void (__fastcall *v2)(__int64); // rsi
  BOOL v3; // ebx
  unsigned int NtGlobalFlag; // edi
  __int64 v5; // rdx
  __int64 v6; // r15
  int Notification; // r13d
  _BOOL8 v8; // rbp
  int v9; // edi
  __int64 v10; // rbx
  _WORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdi
  char *Heap; // r14
  char v18; // al
  __int64 v19; // r12
  __int64 v20; // r8
  __int64 v21; // r8
  int v23; // [rsp+78h] [rbp+10h]
  _BOOL8 v24; // [rsp+80h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v3 = g_pShimmedModuleList != 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    v5 = MEMORY[0x7FFE0330];
    v2 = (void (__fastcall *)(__int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                               g_pfnSE_DllLoaded,
                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  }
  v6 = *(_QWORD *)(v1 + 8);
  Notification = 0;
  if ( v6 != v1 )
  {
    v8 = v3;
    v9 = NtGlobalFlag & 0x100;
    v24 = v3;
    v23 = v9;
    do
    {
      v10 = v6 - 160;
      if ( v9 )
      {
        Notification = AVrfDllLoadNotification(v6 - 160);
        if ( Notification < 0 )
          break;
      }
      SbUpdateSwitchContextBasedOnDll(v6 - 160, v5, 0LL);
      if ( v2 && !g_ShimsLoading )
      {
        v2(v6 - 160);
        *(_BYTE *)(v10 + 105) |= 8u;
      }
      if ( !v8 )
      {
        v11 = *(_WORD **)(v10 + 80);
        if ( (unsigned int)CompatCachepLookupCdb(v11, 16) )
        {
          if ( g_pShimmedModuleList )
          {
            v14 = -1LL;
            do
              ++v14;
            while ( v11[v14] );
            v15 = v14 + g_pShimmedModuleListLength + 1;
          }
          else
          {
            v16 = -1LL;
            do
              ++v16;
            while ( v11[v16] );
            v15 = v16 + 2;
          }
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v15);
          if ( Heap )
          {
            if ( g_pShimmedModuleList )
            {
              v19 = 2 * g_pShimmedModuleListLength;
              memmove(Heap, g_pShimmedModuleList, 2 * g_pShimmedModuleListLength);
              v20 = -1LL;
              do
                ++v20;
              while ( v11[v20] );
              memmove(&Heap[v19 + 2], v11, 2 * v20);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
              v1 = a1;
            }
            else
            {
              v21 = -1LL;
              do
                ++v21;
              while ( v11[v21] );
              memmove(Heap, v11, 2 * v21);
            }
            g_pShimmedModuleList = Heap;
            g_pShimmedModuleListLength = v15;
          }
          else
          {
            v18 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                2557,
                (unsigned int)"LdrpCheckModule",
                0,
                (__int64)"Failed to allocated memory for shimmed module list\n");
              v18 = LdrpDebugFlags;
            }
            if ( (v18 & 0x10) != 0 )
              __debugbreak();
          }
          v9 = v23;
        }
        v8 = v24;
      }
      LdrpSendDllNotifications(v6 - 160, 1LL);
      v12 = *(_QWORD *)(v10 + 48);
      *(_DWORD *)(v10 + 104) |= 8u;
      LdrpLogDllState(v12, v10 + 72, 0x14ADu);
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v6 != v1 );
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  return (unsigned int)Notification;
}
