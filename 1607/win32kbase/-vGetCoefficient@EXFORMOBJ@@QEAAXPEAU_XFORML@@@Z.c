/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEAAXPEAU_XFORML@@@Z @ 0x1C0045B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vGetCoefficient(__m128i **this, struct _XFORML *a2)
{
  __m128i *v2; // rax
  __int32 v4; // ecx
  FLOATL v5; // xmm1_4
  __m128i v6; // xmm4
  __m128i v7; // xmm2
  float v8; // xmm0_4
  FLOATL v9; // [rsp+4h] [rbp-2Ch]
  FLOATL v10; // [rsp+4h] [rbp-2Ch]
  FLOATL v11; // [rsp+Ch] [rbp-24h]
  __m128i v12; // [rsp+10h] [rbp-20h]

  v2 = *this;
  v4 = (*this)[2].m128i_i32[0];
  if ( (v4 & 8) != 0 )
  {
    v12 = v2[1];
    v9 = COERCE_FLOAT(HIDWORD(v2->m128i_i64[0])) * 0.0625;
    v11 = COERCE_FLOAT(HIDWORD(*(unsigned __int128 *)v2)) * 0.0625;
    v5 = COERCE_FLOAT(v2->m128i_i64[1]) * 0.0625;
    a2->eM11 = COERCE_FLOAT(*v2) * 0.0625;
    a2->eM12 = v9;
    a2->eM21 = v5;
    a2->eM22 = v11;
    a2->eDx = *(float *)v12.m128i_i32 * 0.0625;
    *(float *)&v2 = *(float *)&v12.m128i_i32[1] * 0.0625;
  }
  else
  {
    if ( (v4 & 0x10) == 0 )
    {
      LODWORD(a2->eM11) = v2->m128i_i32[0];
      LODWORD(a2->eM12) = (*this)->m128i_i32[1];
      LODWORD(a2->eM21) = (*this)->m128i_i32[2];
      LODWORD(a2->eM22) = (*this)->m128i_i32[3];
      LODWORD(a2->eDx) = (*this)[1].m128i_i32[0];
      LODWORD(a2->eDy) = (*this)[1].m128i_i32[1];
      return;
    }
    v6 = v2[1];
    v7 = *v2;
    v10 = COERCE_FLOAT(HIDWORD(v2->m128i_i64[0])) * 16.0;
    LODWORD(v8) = HIDWORD(*(unsigned __int128 *)v2);
    a2->eM11 = COERCE_FLOAT(*v2) * 16.0;
    a2->eM12 = v10;
    a2->eM21 = *(float *)&v7.m128i_i32[2] * 16.0;
    a2->eM22 = v8 * 16.0;
    v2 = (__m128i *)HIDWORD(v6.m128i_i64[0]);
    LODWORD(a2->eDx) = _mm_cvtsi128_si32(v6);
  }
  LODWORD(a2->eDy) = (_DWORD)v2;
}
