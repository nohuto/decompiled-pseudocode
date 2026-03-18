/*
 * XREFs of ?Reset@ManipulationData@@QEAAXXZ @ 0x180145C68
 * Callers:
 *     ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180145940 (--0CManipulation@@IEAA@PEAVCComposition@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@@Z @ 0x1801461C0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@@Z.c)
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1801498F8 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationData::Reset(ManipulationData *this)
{
  *(_QWORD *)this = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 12) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  *(_QWORD *)((char *)this + 28) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_QWORD *)this + 13) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 5) = 1065353216;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 25) = 1065353216;
  *((_DWORD *)this + 20) = 1065353216;
  *((_DWORD *)this + 15) = 1065353216;
  *((_DWORD *)this + 10) = 1065353216;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_BYTE *)this + 144) &= 0xF8u;
  *((_BYTE *)this + 144) |= 0x18u;
  *(_QWORD *)((char *)this + 132) = 0LL;
}
