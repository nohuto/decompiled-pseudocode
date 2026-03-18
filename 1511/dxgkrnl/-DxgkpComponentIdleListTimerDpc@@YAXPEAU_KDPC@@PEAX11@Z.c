/*
 * XREFs of ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0010CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkpComponentIdleListTimerDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  DXGADAPTER::ProcessComponentIdleList(DeferredContext);
}
