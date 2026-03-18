/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C0015770
 * Callers:
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00B34C0 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     bCvtVts_FlToFl @ 0x1C00140E8 (bCvtVts_FlToFl.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(__m128 **this, struct VECTORFL *a2, struct VECTORFL *a3, __int64 a4)
{
  __m128 *v5; // rcx
  __int32 v6; // r8d
  __m128 v7; // xmm0
  unsigned int v8; // eax
  __m128 **v9; // r10
  __m128 v10; // xmm2
  unsigned int v11; // ebx

  v5 = *this;
  v6 = v5[2].m128_i32[0];
  if ( (v6 & 2) != 0 )
  {
    if ( a3 != a2 )
      memmove(a3, a2, 8 * a4);
    return 1LL;
  }
  else
  {
    if ( (v6 & 0x20) != 0 )
    {
      v11 = bCvtVts_FlToFl(v5->m128_f32, (float *)a2, (float *)a3, a4);
    }
    else
    {
      v7 = *v5;
      if ( (v6 & 8) != 0 )
      {
        *v5 = _mm_mul_ps(v7, (__m128)_xmm);
        v8 = bCvtVts_FlToFl(v5->m128_f32, (float *)a2, (float *)a3, a4);
        v10 = (__m128)_xmm;
      }
      else
      {
        *v5 = _mm_mul_ps(v7, (__m128)_xmm);
        v8 = bCvtVts_FlToFl(v5->m128_f32, (float *)a2, (float *)a3, a4);
        v10 = (__m128)_xmm;
      }
      v11 = v8;
      **v9 = _mm_mul_ps(**v9, v10);
    }
    if ( !v11 )
      EngSetLastError(0x216u);
    return v11;
  }
}
