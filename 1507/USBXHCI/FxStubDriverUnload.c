/*
 * XREFs of FxStubDriverUnload @ 0x1C0039CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubDriverUnload(_KDPC *a1, __int64 a2, void *a3, void *a4)
{
  if ( WPP_MAIN_CB.Dpc.DeferredRoutine
    && (__int64 (__fastcall *)())WPP_MAIN_CB.Dpc.DeferredRoutine != FxStubDriverUnload )
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine(a1, FxStubDriverUnload, a3, a4);
  }
  FxStubDriverUnloadCommon();
}
