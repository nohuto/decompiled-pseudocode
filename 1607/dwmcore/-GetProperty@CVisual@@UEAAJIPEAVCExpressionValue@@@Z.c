/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000C1D0
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000BE6C (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::GetProperty(CVisual *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  float OpacityInternal; // xmm0_4
  __int64 v6; // r10
  int v8; // edx
  int v9; // eax

  v3 = 0;
  v4 = a2 - 23;
  if ( v4 )
  {
    v8 = v4 - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        v3 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x132Au);
        return v3;
      }
      *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 46), (__m128)*((unsigned int *)this + 47)).m128_u64[0];
      *((_DWORD *)a3 + 16) = 35;
    }
    else
    {
      v9 = *((_DWORD *)this + 43);
      *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 41), (__m128)*((unsigned int *)this + 42)).m128_u64[0];
      *((_DWORD *)a3 + 2) = v9;
      *((_DWORD *)a3 + 16) = 52;
    }
    *((_BYTE *)a3 + 68) = 1;
  }
  else
  {
    OpacityInternal = CVisual::GetOpacityInternal(this);
    *(float *)v6 = OpacityInternal;
    *(_DWORD *)(v6 + 64) = 18;
    *(_BYTE *)(v6 + 68) = 1;
  }
  return v3;
}
