/*
 * XREFs of ?Initialize@CManipulationTransformMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0026870
 * Callers:
 *     ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0014A84 (-Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::Initialize(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 5) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_QWORD *)((char *)this + 52) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 8) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 18) = 1065353216;
  *(_QWORD *)((char *)this + 76) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 21) = 0;
  return 0LL;
}
