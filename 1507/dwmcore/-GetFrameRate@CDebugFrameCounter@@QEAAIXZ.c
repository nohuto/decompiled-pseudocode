/*
 * XREFs of ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x1800E7950
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EA920 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x1800E7924 (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDebugFrameCounter::GetFrameRate(CDebugFrameCounter *this, __int64 a2, double a3)
{
  int FrameCountInternal; // eax
  int *v4; // rcx
  unsigned int v5; // edx
  int v6; // r9d
  unsigned int v7; // r8d
  int v8; // edx
  float v9; // xmm1_4
  __int64 result; // rax
  float v11; // xmm1_4
  float v12; // [rsp+30h] [rbp+8h]
  float v13; // [rsp+30h] [rbp+8h]

  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  v5 = v4[1041];
  v6 = FrameCountInternal;
  v7 = v4[1040];
  if ( v7 > v5 )
    v8 = v5 - v7 + 60;
  else
    v8 = v5 - v7;
  v9 = (float)v4[1038] / (float)v4[1039];
  if ( COERCE_UNSIGNED_INT(fabs(v9)) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v9 - v9;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    result = (unsigned int)((int)v9 - LODWORD(a3));
  }
  else
  {
    v12 = v9 + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v12) << 10) >> 11);
  }
  if ( v8 )
  {
    v11 = (float)(v6 * result) / (float)(v8 + v6);
    if ( COERCE_UNSIGNED_INT(fabs(v11)) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v11 - v11;
      return (int)v11 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v13 = v11 + 6291456.25;
      return (unsigned int)((int)(LODWORD(v13) << 10) >> 11);
    }
  }
  return result;
}
