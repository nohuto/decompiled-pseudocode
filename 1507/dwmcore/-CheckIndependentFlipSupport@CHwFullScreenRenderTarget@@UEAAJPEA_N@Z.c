/*
 * XREFs of ?CheckIndependentFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180005FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckIndependentFlipSupport(CHwFullScreenRenderTarget *this, bool *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*((_QWORD *)this + 2) + 856LL) >= 1300;
  return result;
}
