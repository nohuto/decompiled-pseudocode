/*
 * XREFs of MiIoPfnRangeCompare @ 0x140217680
 * Callers:
 *     MiIsProbeActive @ 0x140135338 (MiIsProbeActive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIoPfnRangeCompare(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  if ( a1[1] >= v3 )
    return *a1 > v3 + 512;
  else
    return 0xFFFFFFFFLL;
}
