/*
 * XREFs of ?GetBounds@CHWDrawListEntry@@UEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C000
 * Callers:
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800586B8 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CHWDrawListEntry::GetBounds(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  *a2 = *(_OWORD *)(result + 16);
  return result;
}
