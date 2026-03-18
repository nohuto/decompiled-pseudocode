/*
 * XREFs of ?DxgkpFirstFrameTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0020D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkpFirstFrameTimerDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  DXGADAPTER::ProcessFirstFrameTimer(DeferredContext);
}
