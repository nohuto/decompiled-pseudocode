/*
 * XREFs of ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800204E0
 * Callers:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180020670 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x180020B70 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180020EC0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180021AE0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180024C6C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD2DContext::D2DSetTargetInternal(CD2DContext *this, struct CD2DTarget *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 5);
    v3 = *((_QWORD *)a2 + 4);
  }
  else
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), v3, v2);
}
