/*
 * XREFs of ?EnsureSecondaryDpiMetricsCacheNode@@YAPEAUtagDpiSysMetCache@@H@Z @ 0x1C01E9470
 * Callers:
 *     _CacheSecondaryDpiMetric @ 0x1C01E9BC0 (_CacheSecondaryDpiMetric.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?IsValidPlateauDPI@@YA_NH@Z @ 0x1C01E9500 (-IsValidPlateauDPI@@YA_NH@Z.c)
 */

struct tagDpiSysMetCache *__fastcall EnsureSecondaryDpiMetricsCacheNode(int a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  v2 = *(_QWORD **)(gpsi + 3048LL);
  if ( !v2 )
    goto LABEL_11;
  do
  {
    if ( *(_DWORD *)v2 == a1 )
      break;
    v2 = (_QWORD *)v2[1];
  }
  while ( v2 );
  if ( !v2 )
  {
LABEL_11:
    if ( IsValidPlateauDPI(a1) )
    {
      v3 = (_QWORD *)SharedAlloc(600LL);
      v2 = v3;
      if ( v3 )
      {
        memset(v3, 0, 0x258uLL);
        *(_DWORD *)v2 = a1;
        v2[1] = *(_QWORD *)(gpsi + 3048LL);
        *(_QWORD *)(gpsi + 3048LL) = v2;
      }
    }
  }
  return (struct tagDpiSysMetCache *)v2;
}
