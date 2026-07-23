/*
 * XREFs of RtlpLocateXStateChunk @ 0x1800889DC
 * Callers:
 *     RtlSetExtendedFeaturesMask @ 0x180088990 (RtlSetExtendedFeaturesMask.c)
 *     RtlGetExtendedFeaturesMask @ 0x1800889C0 (RtlGetExtendedFeaturesMask.c)
 *     RtlLocateExtendedFeature2 @ 0x1800EB5A0 (RtlLocateExtendedFeature2.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpLocateXStateChunk(_DWORD *a1)
{
  __int64 v1; // r9

  v1 = (int)a1[4];
  if ( *a1 > (int)v1 || a1[1] + *a1 < (int)v1 + a1[5] )
    return 0LL;
  else
    return (char *)a1 + v1;
}
