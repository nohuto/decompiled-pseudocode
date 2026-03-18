/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1401F9248
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14011FD74 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GreGetHFONT @ 0x1401F9294 (GreGetHFONT.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 *     GreGetMapMode @ 0x1403310F8 (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  int MapMode; // eax
  unsigned int v5; // ecx

  v3 = *(_QWORD *)(GetDpiServerInfoForCurrentThread(a1, a2) + 24);
  if ( GreGetHFONT(a1) != v3 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v5 = 1;
  if ( MapMode != 1 )
    return 0;
  return v5;
}
