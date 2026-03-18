/*
 * XREFs of ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00191C4
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0145D70 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
