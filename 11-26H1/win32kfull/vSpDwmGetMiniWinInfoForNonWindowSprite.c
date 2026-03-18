/*
 * XREFs of vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1401EEA24
 * Callers:
 *     bSetDevPreviewRect @ 0x14009B814 (bSetDevPreviewRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vSpDwmGetMiniWinInfoForNonWindowSprite(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  if ( a2 )
  {
    v3 = *a2;
    *(_OWORD *)a1 = *a2;
    *(_OWORD *)(a1 + 16) = v3;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  result = W32GetUserSessionState(a1, a2);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(result + 18704);
  return result;
}
