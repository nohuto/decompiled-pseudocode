/*
 * XREFs of PopApplyAdminPolicy @ 0x14066C060
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PopApplyAdminPolicy(__int64 a1, __m128i *a2)
{
  __int64 v2; // xmm1_8
  __m128i v3; // xmm2
  int v4; // r8d
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = a2[1].m128i_i64[0];
  v3 = *a2;
  v4 = _mm_cvtsi128_si32(*a2);
  if ( (unsigned int)(v4 - 2) > 3 )
    return 3221225485LL;
  if ( (unsigned int)(v3.m128i_i32[1] - 2) > 3 )
    return 3221225485LL;
  if ( v4 > v3.m128i_i32[1] )
    return 3221225485LL;
  v5 = _mm_srli_si128(v3, 8).m128i_u64[0];
  if ( (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v3, 8)) > HIDWORD(v5) || (unsigned int)v2 > HIDWORD(v2) )
    return 3221225485LL;
  v6 = v3.m128i_i64[0] - PopAdminPolicy;
  if ( v3.m128i_i64[0] == (_QWORD)PopAdminPolicy )
  {
    v6 = v5 - *((_QWORD *)&PopAdminPolicy + 1);
    if ( v5 == *((_QWORD *)&PopAdminPolicy + 1) )
      v6 = v2 - qword_140303DD0;
  }
  result = 0LL;
  if ( v6 )
  {
    PopAdminPolicy = (__int128)v3;
    qword_140303DD0 = v2;
  }
  return result;
}
