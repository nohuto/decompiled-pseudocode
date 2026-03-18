/*
 * XREFs of ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x180073C38
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CHWDrawListCache::SetNewPrimitives(
        CHWDrawListCache *this,
        __int64 a2,
        enum D2D1_ANTIALIAS_MODE a3,
        char a4,
        bool a5,
        struct HWDrawListCacheEntry *Src,
        unsigned int a7)
{
  unsigned int v9; // edi
  SIZE_T v10; // rsi
  LPVOID (__fastcall *v11)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  void *v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rax
  float v16; // xmm0_4
  __m128i v17; // xmm1
  float v18; // xmm0_4
  float v19; // xmm0_4

  v9 = 0;
  v10 = 48LL * a7;
  if ( !is_mul_ok(a7, 0x30uLL) )
    v10 = -1LL;
  v11 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v11 == WPF::ProcessHeapImpl::Alloc )
    v12 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v10);
  else
    v12 = v11(WPF::g_pProcessHeap, v10);
  *((_QWORD *)this + 2) = v12;
  if ( v12 )
  {
    memcpy_0(v12, Src, 48LL * a7);
    v13 = 0;
    *((_BYTE *)this + 62) = a5;
    *((_DWORD *)this + 10) = a3;
    *((_DWORD *)this + 6) = a7;
    *((_BYTE *)this + 60) = 1;
    *((_BYTE *)this + 61) = a4;
    *((_BYTE *)this + 63) = 0;
    *(_OWORD *)((char *)this + 44) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( a7 )
    {
      v14 = *((_QWORD *)this + 2);
      do
      {
        v15 = *(_QWORD *)(v14 + 48LL * v13);
        if ( v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
          v14 = *((_QWORD *)this + 2);
          if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 48LL * v13) + 16LL) + 92LL) )
            *((_BYTE *)this + 60) = 0;
          if ( *(_QWORD *)(v14 + 48LL * v13 + 32) )
            *((_BYTE *)this + 63) = 1;
          v16 = *((float *)this + 11);
          v17 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(v14 + 48LL * v13) + 16LL) + 16LL));
          if ( *(float *)v17.m128i_i32 <= v16 )
            v16 = *(float *)v17.m128i_i32;
          *((float *)this + 11) = v16;
          v18 = *((float *)this + 12);
          if ( *(float *)&v17.m128i_i32[1] <= v18 )
            v18 = *(float *)&v17.m128i_i32[1];
          v17.m128i_i32[0] = *((_DWORD *)this + 13);
          *((float *)this + 12) = v18;
          if ( *(float *)v17.m128i_i32 <= *(float *)&v17.m128i_i32[2] )
            v17.m128i_i32[0] = v17.m128i_i32[2];
          v19 = *((float *)this + 14);
          *((_DWORD *)this + 13) = v17.m128i_i32[0];
          if ( v19 <= *(float *)&v17.m128i_i32[3] )
            v19 = *(float *)&v17.m128i_i32[3];
          *((float *)this + 14) = v19;
        }
        ++v13;
      }
      while ( v13 < *((_DWORD *)this + 6) );
    }
    if ( *((float *)this + 11) >= *((float *)this + 13) || *((float *)this + 12) >= *((float *)this + 14) )
    {
      *(_QWORD *)((char *)this + 44) = 0LL;
      *(_QWORD *)((char *)this + 52) = 0LL;
    }
    *((_QWORD *)this + 4) = a2;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x50u);
  }
  return v9;
}
