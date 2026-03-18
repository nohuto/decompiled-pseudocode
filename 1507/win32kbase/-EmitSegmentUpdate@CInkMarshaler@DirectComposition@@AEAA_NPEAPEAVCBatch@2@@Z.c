/*
 * XREFs of ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D5ABC
 * Callers:
 *     ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D5D20 (-EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

bool __fastcall DirectComposition::CInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v4; // rbx
  __m128 v5; // xmm2
  __m128 v6; // xmm2
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  __m128 v9; // xmm2
  __m128 v10; // xmm2
  void *v12; // [rsp+90h] [rbp+20h] BYREF

  for ( ; *((_DWORD *)this + 36) != *((_QWORD *)this + 16); v4[2] = (*((_DWORD *)this + 36))++ )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v12) )
      break;
    v4 = (char *)v12 + 4;
    *(_DWORD *)v12 = 52;
    memset(v4, 0, 0x30uLL);
    *v4 = 188;
    v4[1] = *((_DWORD *)this + 6);
    v4[3] = *(_OWORD *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13));
    v5 = *(__m128 *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13));
    v4[4] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
    v6 = *(__m128 *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13));
    v4[5] = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
    v7 = *(__m128 *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13));
    v4[6] = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
    v4[7] = *(_OWORD *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13) + 16LL);
    v8 = *(__m128 *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13) + 16LL);
    v4[8] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    v9 = *(__m128 *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13) + 16LL);
    v4[9] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
    v10 = *(__m128 *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13) + 16LL);
    v4[10] = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
    v4[11] = *(_DWORD *)(*((unsigned int *)this + 36) * *((_QWORD *)this + 17) + *((_QWORD *)this + 13) + 32LL);
  }
  return *((unsigned int *)this + 36) == *((_QWORD *)this + 16);
}
