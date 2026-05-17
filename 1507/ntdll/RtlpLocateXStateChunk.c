/*
 * XREFs of RtlpLocateXStateChunk @ 0x180077D6C
 * Callers:
 *     RtlSetExtendedFeaturesMask @ 0x180077D20 (RtlSetExtendedFeaturesMask.c)
 *     RtlGetExtendedFeaturesMask @ 0x180077D50 (RtlGetExtendedFeaturesMask.c)
 *     RtlLocateExtendedFeature @ 0x1800DBC10 (RtlLocateExtendedFeature.c)
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
