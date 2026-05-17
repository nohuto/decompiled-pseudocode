/*
 * XREFs of RtlpLocateXStateChunk @ 0x1800889EC
 * Callers:
 *     RtlSetExtendedFeaturesMask @ 0x1800889A0 (RtlSetExtendedFeaturesMask.c)
 *     RtlGetExtendedFeaturesMask @ 0x1800889D0 (RtlGetExtendedFeaturesMask.c)
 *     RtlLocateExtendedFeature2 @ 0x1800EB4E0 (RtlLocateExtendedFeature2.c)
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
