/*
 * XREFs of ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1800FCF9C
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180058F14 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800F3858 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CScopedClipStack::FreeCpuClipStackState(
        CScopedClipStack *this,
        struct CScopedClipStack::CpuClipStackState *a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rdi

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 9);
  if ( v2 )
    (**v2)(v2, 1LL);
}
