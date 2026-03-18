/*
 * XREFs of GetCaptionChar @ 0x1C0056C94
 * Callers:
 *     DrawMenuMark @ 0x1C004F298 (DrawMenuMark.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCaptionChar(char a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 & 0xF;
  if ( !v1 )
    return 114LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 48LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 49LL;
  if ( v3 == 1 )
    return 50LL;
  return 115LL;
}
