/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C003C4C0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003E0B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  DC *v2; // r8
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  __m128i v6; // xmm0
  int v7; // ecx
  int v8; // eax
  __m128i v9; // xmm0
  __m128i v10; // [rsp+20h] [rbp-18h]
  struct REGION *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = this;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)this + 15) & 4) != 0 )
  {
    if ( !a2
      || (v11 = a2,
          v3 = RGNOBJ::iComplexity((RGNOBJ *)&v11),
          *(_DWORD *)(*(_QWORD *)(v4 + 80) + 392LL) = v3,
          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v11) == 1) )
    {
      v9 = (__m128i)rclEmpty;
    }
    else
    {
      v7 = *((_DWORD *)v2 + 356);
      v10 = *(__m128i *)(v5 + 88);
      v6 = v10;
      v10.m128i_i32[2] -= v7;
      v10.m128i_i32[0] = _mm_cvtsi128_si32(v6) - v7;
      v8 = *((_DWORD *)v2 + 357);
      v10.m128i_i32[1] -= v8;
      v10.m128i_i32[3] -= v8;
      v9 = v10;
    }
    *(__m128i *)(*((_QWORD *)v2 + 10) + 396LL) = v9;
    *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v2 + 15) &= ~4u;
  }
}
