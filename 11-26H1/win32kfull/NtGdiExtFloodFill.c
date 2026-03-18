/*
 * XREFs of NtGdiExtFloodFill @ 0x140281500
 * Callers:
 *     <none>
 * Callees:
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return NtGdiExtFloodFillImpl<0>(a1, a5);
}
