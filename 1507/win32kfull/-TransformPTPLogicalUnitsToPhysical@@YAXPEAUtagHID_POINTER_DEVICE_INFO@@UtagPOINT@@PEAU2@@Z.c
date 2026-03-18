/*
 * XREFs of ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01CE858
 * Callers:
 *     ApplyPTPTranslation @ 0x1C01CEC60 (ApplyPTPTranslation.c)
 * Callees:
 *     ConvertPointCoordinates @ 0x1C01C2018 (ConvertPointCoordinates.c)
 */

void __fastcall TransformPTPLogicalUnitsToPhysical(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  __m128i v3; // xmm0
  int v6; // edx
  __int128 v7; // xmm0
  __m128i v8; // [rsp+20h] [rbp-28h] BYREF
  int v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v8 = *(__m128i *)((char *)a1 + 172);
  v3 = v8;
  ++v8.m128i_i32[3];
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  v7 = *(_OWORD *)((char *)a1 + 204);
  v8.m128i_i32[2] = v6 + 1;
  *(_OWORD *)v9 = v7;
  if ( !(unsigned int)ConvertPointCoordinates(*(_QWORD *)&a2, v8.m128i_i32, v9, a3) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
