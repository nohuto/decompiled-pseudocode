/*
 * XREFs of UserVisrgnFromHwnd @ 0x1C01DE564
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0075788 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _VisrgnFromWindow @ 0x1C01DE630 (_VisrgnFromWindow.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 result; // rax

  v5 = a2;
  LOBYTE(a2) = 1;
  v6 = a3;
  result = HMValidateHandleNoSecure(v5, a2, a3, a4);
  if ( result )
    return VisrgnFromWindow(result, v6, a1);
  return result;
}
