/*
 * XREFs of ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x18007C814
 * Callers:
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18007CFB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D890 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800AD74C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DSetTargetInternal(CD2DContext *this, struct CD2DTarget *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = *((_QWORD *)this + 6);
  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 5);
    v4 = *((_QWORD *)a2 + 4);
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, v4, v3);
}
