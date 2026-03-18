/*
 * XREFs of ?QueryVector3@Animation@Animations@Components@@UEAAJIPEAVVector3@23@@Z @ 0x180194210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Animation::QueryVector3(
        Components::Animations::Animation *this,
        __int64 a2,
        struct Components::Animations::Vector3 *a3)
{
  unsigned int v3; // edx
  double *v4; // rcx
  float v5; // xmm0_4

  if ( *((_DWORD *)this + 14) == 52 )
  {
    v3 = 0;
    if ( a3 )
    {
      v4 = *(double **)(*((_QWORD *)this + 1) + 232LL);
      v5 = v4[2];
      *(_QWORD *)a3 = _mm_unpacklo_ps(
                        _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)v4),
                        _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)v4 + 1))).m128_u64[0];
      *((float *)a3 + 2) = v5;
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
