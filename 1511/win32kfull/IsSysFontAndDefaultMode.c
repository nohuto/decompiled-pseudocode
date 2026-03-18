/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C024B568
 * Callers:
 *     DT_InitDrawTextInfo @ 0x1C024B11C (DT_InitDrawTextInfo.c)
 * Callees:
 *     GreGetHFONT @ 0x1C0292364 (GreGetHFONT.c)
 *     GreGetMapMode @ 0x1C02B0950 (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int MapMode; // eax
  unsigned int v6; // ecx

  v4 = *(_QWORD *)GetDPIMetrics(a1, a2, a3);
  if ( GreGetHFONT(a1) != v4 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v6 = 1;
  if ( MapMode != 1 )
    return 0;
  return v6;
}
