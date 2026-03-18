/*
 * XREFs of BltColor @ 0x1C023DA94
 * Callers:
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E3A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 */

__int64 __fastcall BltColor(HDC a1, __int64 a2, HDC a3, int a4, int a5, int a6, int a7, int a8, LONG a9, char a10)
{
  __int64 v14; // rsi
  int v15; // r14d
  int v16; // r15d
  unsigned int v17; // edx

  v14 = 0LL;
  v15 = GreSetTextColor(a1, 0);
  v16 = GreSetBkColor(a1, 0xFFFFFF);
  if ( a2 )
    v14 = GreSelectBrush(a1, a2);
  v17 = (a10 & 1) != 0 ? 12060490 : 14812998;
  if ( (a10 & 2) != 0 )
    v17 |= 0x80000000;
  if ( !a3 )
    a3 = *(HDC *)(gpDispInfo + 40LL);
  NtGdiBitBltInternal(a1, a4, a5, a6, a7, a3, a8, a9, v17, 0xFFFFFF, 0);
  if ( a2 )
    GreSelectBrush(a1, v14);
  GreSetTextColor(a1, v15);
  return GreSetBkColor(a1, v16);
}
