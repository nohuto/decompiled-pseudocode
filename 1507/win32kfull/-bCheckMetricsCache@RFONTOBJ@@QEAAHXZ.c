/*
 * XREFs of ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C002AEB4
 * Callers:
 *     xInsertMetricsRFONTOBJ @ 0x1C0031E5C (xInsertMetricsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0034014 (xInsertMetricsPlusRFONTOBJ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 */

__int64 __fastcall RFONTOBJ::bCheckMetricsCache(RFONTOBJ *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 536LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
    v3 = v2 + 24;
  else
    v3 = v2 + 64;
  if ( v3 <= v1[68] )
    return 1LL;
  result = PALLOCMEM2(0x720uLL);
  if ( result )
  {
    *(_QWORD *)result = v1[70];
    v1[68] = result + 1824;
    v1[67] = result + 16;
    v1[70] = result;
    return 1LL;
  }
  return result;
}
