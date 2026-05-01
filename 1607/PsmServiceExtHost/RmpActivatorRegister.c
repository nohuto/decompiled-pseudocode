/*
 * XREFs of RmpActivatorRegister @ 0x18001F338
 * Callers:
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18001F274 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmpCoreApiConnectToRmServer @ 0x18002E170 (RmpCoreApiConnectToRmServer.c)
 * Callees:
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18001F434 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     RmpUtilCreateWnfStateNameForClient @ 0x18001F4F8 (RmpUtilCreateWnfStateNameForClient.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800384D8 (RmpWnfCleanupPendingCallbackList.c)
 */

__int64 __fastcall RmpActivatorRegister(__int64 a1, void *a2, int a3, _QWORD *a4)
{
  struct _RM_SERVICE_GLOBALS *v5; // rsi
  char *Heap; // rax
  char *v9; // rbx
  int WnfStateNameForClient; // edi
  void *v11; // rcx
  struct _RM_SERVICE_GLOBALS **v12; // rax
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = RmSvcGlobals;
  v14 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v9 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    WnfStateNameForClient = RmpUtilCreateWnfStateNameForClient(a2, 0x400u, (struct _WNF_STATE_NAME *)(v9 + 36));
    if ( WnfStateNameForClient < 0
      || (WnfStateNameForClient = RmpWnfAllocateAndInitializePendingCallbackList(&v14), WnfStateNameForClient < 0) )
    {
      v11 = v14;
    }
    else
    {
      v11 = 0LL;
      *((_QWORD *)v9 + 6) = v14;
      *((_DWORD *)v9 + 14) = a3;
      *((_QWORD *)v9 + 3) = v9 + 16;
      *((_QWORD *)v9 + 2) = v9 + 16;
      v12 = (struct _RM_SERVICE_GLOBALS **)*((_QWORD *)v5 + 1);
      v14 = 0LL;
      if ( *v12 != v5 )
        __fastfail(3u);
      *(_QWORD *)v9 = v5;
      *((_QWORD *)v9 + 1) = v12;
      *v12 = (struct _RM_SERVICE_GLOBALS *)v9;
      *((_QWORD *)v5 + 1) = v9;
      *a4 = v9;
      v9 = 0LL;
    }
    if ( v9 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      v11 = v14;
    }
    if ( v11 )
      RmpWnfCleanupPendingCallbackList(v11);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WnfStateNameForClient;
}
