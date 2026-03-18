/*
 * XREFs of ?SetDisplayRestriction@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x18014B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::SetDisplayRestriction(__int64 a1, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 176) + 184LL))(a1 - 176, a2);
}
