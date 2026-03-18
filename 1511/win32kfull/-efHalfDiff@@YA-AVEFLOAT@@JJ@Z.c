/*
 * XREFs of ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0018C18
 * Callers:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0003E90 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0018C50 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     NtGdiArcInternal @ 0x1C02A8B20 (NtGdiArcInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall efHalfDiff(int a1, int a2)
{
  __m128i v2; // xmm1

  v2 = (__m128i)COERCE_UNSIGNED_INT((float)((a1 >> 1) - (a2 >> 1)));
  if ( (((unsigned __int8)a2 ^ (unsigned __int8)a1) & 1) != 0 )
  {
    if ( (a1 & 1) != 0 )
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + FP_0_5;
    else
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 - FP_0_5;
  }
  return (unsigned int)_mm_cvtsi128_si32(v2);
}
