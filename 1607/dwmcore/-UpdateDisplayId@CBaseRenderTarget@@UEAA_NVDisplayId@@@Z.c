/*
 * XREFs of ?UpdateDisplayId@CBaseRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x18017A750
 * Callers:
 *     ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180013BD0 (-UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseRenderTarget::UpdateDisplayId(__int64 a1, int a2)
{
  bool v2; // zf

  v2 = *(_DWORD *)(a1 + 116) == a2;
  *(_DWORD *)(a1 + 116) = a2;
  return !v2;
}
