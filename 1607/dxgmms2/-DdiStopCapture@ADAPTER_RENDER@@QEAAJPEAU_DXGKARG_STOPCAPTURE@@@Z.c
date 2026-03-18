/*
 * XREFs of ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C001D27C
 * Callers:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0068FCC (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiStopCapture(ADAPTER_RENDER *this, struct _DXGKARG_STOPCAPTURE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_STOPCAPTURE *))DxgCoreInterface[35])(this, a2);
}
