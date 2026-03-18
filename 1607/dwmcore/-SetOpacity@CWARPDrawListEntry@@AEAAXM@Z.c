/*
 * XREFs of ?SetOpacity@CWARPDrawListEntry@@AEAAXM@Z @ 0x18013764C
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801373F0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CWARPDrawListEntry::SetOpacity(__m128 *this, double a2)
{
  __int32 v3; // edi
  unsigned __int64 v4; // rcx
  __m128 v5; // xmm2
  char v6; // al
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm2_4

  v3 = 0;
  v4 = this[5].m128_u64[0];
  v5 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0);
  if ( v4 )
  {
    this[4] = v5;
    v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 96LL))(v4);
    if ( this[4].m128_f32[3] == 1.0 )
    {
      LOBYTE(v3) = v6 != 0;
      this[16].m128_i32[0] = v3;
    }
    else
    {
      this[16].m128_i32[0] = (v6 != 0) + 2;
    }
  }
  else
  {
    v7 = *(float *)&a2 * this[3].m128_f32[3];
    this[4].m128_f32[0] = *(float *)&a2 * this[3].m128_f32[0];
    this[4].m128_f32[3] = v7;
    v8 = v5.m128_f32[0] * this[3].m128_f32[1];
    v9 = v5.m128_f32[0] * this[3].m128_f32[2];
    this[4].m128_f32[1] = v8;
    this[4].m128_f32[2] = v9;
  }
}
