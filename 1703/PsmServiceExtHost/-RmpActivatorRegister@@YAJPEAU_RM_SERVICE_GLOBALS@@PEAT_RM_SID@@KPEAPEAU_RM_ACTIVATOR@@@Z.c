/*
 * XREFs of ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x18001FFB0
 * Callers:
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18001FE60 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x18001FF20 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x180020078 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     ?RmpUtilCreateWnfStateNameForClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180020134 (-RmpUtilCreateWnfStateNameForClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18002DF30 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall RmpActivatorRegister(
        struct _RM_SERVICE_GLOBALS *a1,
        union _RM_SID *a2,
        ULONG a3,
        struct _WNF_STATE_NAME **a4)
{
  struct _RM_SERVICE_GLOBALS *v5; // r14
  struct _WNF_STATE_NAME *Heap; // rax
  struct _WNF_STATE_NAME *v9; // rdi
  int WnfStateNameForClient; // ebx

  v5 = RmSvcGlobals;
  Heap = (struct _WNF_STATE_NAME *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v9 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    *v9 = (struct _WNF_STATE_NAME)v5;
    v9[7].Data[0] = a3;
    v9[5] = 0LL;
    v9[6] = 0LL;
    WnfStateNameForClient = RmpUtilCreateWnfStateNameForClient(a2, 0x400u, v9 + 3);
    if ( WnfStateNameForClient >= 0 )
    {
      WnfStateNameForClient = RmpWnfAllocateAndInitializePendingCallbackList(&v9[4]);
      if ( WnfStateNameForClient >= 0 )
        WnfStateNameForClient = 0;
    }
    if ( WnfStateNameForClient >= 0 )
    {
      *a4 = v9;
      WnfStateNameForClient = 0;
      v9 = 0LL;
    }
    if ( v9 )
    {
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WnfStateNameForClient;
}
