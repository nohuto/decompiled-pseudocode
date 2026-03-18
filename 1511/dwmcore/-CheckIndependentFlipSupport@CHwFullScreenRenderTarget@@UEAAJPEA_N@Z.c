/*
 * XREFs of ?CheckIndependentFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000A740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckIndependentFlipSupport(CHwFullScreenRenderTarget *this, bool *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*((_QWORD *)this + 2) + 252LL) >= 1300;
  return result;
}
