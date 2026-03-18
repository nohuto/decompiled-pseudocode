/*
 * XREFs of ?VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_D3DKMT_PROCESS_STATUS_TYPE@@@Z @ 0x1C001D4B0
 * Callers:
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C00850A0 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z @ 0x1C00DB488 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSyncPriorityDevice(__int64 a1, __int64 a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 8) + 160LL))(a2, a3);
}
