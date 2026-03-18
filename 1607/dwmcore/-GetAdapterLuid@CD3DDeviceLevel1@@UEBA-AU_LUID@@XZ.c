/*
 * XREFs of ?GetAdapterLuid@CD3DDeviceLevel1@@UEBA?AU_LUID@@XZ @ 0x180080250
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18007CFB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD3DDeviceLevel1::GetAdapterLuid(CD3DDeviceLevel1 *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 81);
  return (struct _LUID)a2;
}
