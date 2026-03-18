/*
 * XREFs of UserVisrgnFromHwnd @ 0x1C01E7D14
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004F4A0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _VisrgnFromWindow @ 0x1C01E7DE0 (_VisrgnFromWindow.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = HMValidateHandleNoSecure(a2, 1);
  if ( result )
    return VisrgnFromWindow(result, a3, a1);
  return result;
}
