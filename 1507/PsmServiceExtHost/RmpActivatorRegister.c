/*
 * XREFs of RmpActivatorRegister @ 0x180020510
 * Callers:
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x180020D08 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmpCoreApiConnectToRmServer @ 0x180041D78 (RmpCoreApiConnectToRmServer.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800195E0 (RmpWnfCleanupPendingCallbackList.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18002122C (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     RmpWnfCreateStateNameForClient @ 0x180021324 (RmpWnfCreateStateNameForClient.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpActivatorRegister(PSID a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  char *Heap; // rax
  char *v8; // rbx
  int StateNameForClient; // edi
  char *v10; // rax
  char **v11; // rcx
  _QWORD *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  Heap = (char *)RmpAllocateHeap(0x40uLL);
  v8 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    StateNameForClient = RmpWnfCreateStateNameForClient(a1, (struct _WNF_STATE_NAME *)(v8 + 36));
    if ( StateNameForClient >= 0 )
    {
      StateNameForClient = RmpWnfAllocateAndInitializePendingCallbackList(&v13);
      if ( StateNameForClient < 0 )
      {
        v3 = v13;
      }
      else
      {
        *((_QWORD *)v8 + 6) = v13;
        *((_DWORD *)v8 + 14) = a2;
        *((_QWORD *)v8 + 3) = v8 + 16;
        *((_QWORD *)v8 + 2) = v8 + 16;
        v10 = (char *)RmSvcGlobals + 8;
        v11 = (char **)*((_QWORD *)RmSvcGlobals + 2);
        *(_QWORD *)v8 = (char *)RmSvcGlobals + 8;
        *((_QWORD *)v8 + 1) = v11;
        if ( *v11 != v10 )
          __fastfail(3u);
        *v11 = v8;
        *((_QWORD *)v10 + 1) = v8;
        *a3 = v8;
        v8 = 0LL;
      }
    }
    if ( v8 )
      RmpFreeHeap(v8);
    if ( v3 )
      RmpWnfCleanupPendingCallbackList(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)StateNameForClient;
}
