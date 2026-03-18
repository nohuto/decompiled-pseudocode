/*
 * XREFs of ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x18002D13C
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0HWDrawListCacheEntry@@QEAA@XZ @ 0x18002F5E0 (--0HWDrawListCacheEntry@@QEAA@XZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
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
  unsigned __int64 v10; // rsi
  void *(__fastcall *v11)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rbp
  void *v12; // rax
  void *v13; // rsi
  int v14; // ebp
  HWDrawListCacheEntry *i; // r14
  unsigned int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rax
  float v19; // xmm0_4
  __m128i v20; // xmm1
  float v21; // xmm0_4
  float v22; // xmm0_4

  v9 = 0;
  v10 = 48LL * a7;
  if ( !is_mul_ok(a7, 0x30uLL) )
    v10 = -1LL;
  v11 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v11 == WPF::ProcessHeapImpl::Alloc )
    v12 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v10);
  else
    v12 = v11(WPF::g_pProcessHeap, v10);
  v13 = v12;
  if ( v12 )
  {
    v14 = a7 - 1;
    for ( i = (HWDrawListCacheEntry *)v12; v14 >= 0; --v14 )
    {
      HWDrawListCacheEntry::HWDrawListCacheEntry(i);
      i = (HWDrawListCacheEntry *)((char *)i + 48);
    }
  }
  else
  {
    v13 = 0LL;
  }
  *((_QWORD *)this + 2) = v13;
  if ( v13 )
  {
    memcpy_0(v13, Src, 48LL * a7);
    v16 = 0;
    *((_BYTE *)this + 62) = a5;
    *((_DWORD *)this + 10) = a3;
    *((_DWORD *)this + 6) = a7;
    *((_BYTE *)this + 60) = 1;
    *((_BYTE *)this + 61) = a4;
    *((_BYTE *)this + 63) = 0;
    *(_OWORD *)((char *)this + 44) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( a7 )
    {
      v17 = *((_QWORD *)this + 2);
      do
      {
        v18 = *(_QWORD *)(v17 + 48LL * v16);
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          v17 = *((_QWORD *)this + 2);
          if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 48LL * v16) + 16LL) + 92LL) )
            *((_BYTE *)this + 60) = 0;
          if ( *(_QWORD *)(v17 + 48LL * v16 + 32) )
            *((_BYTE *)this + 63) = 1;
          v19 = *((float *)this + 11);
          v20 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(v17 + 48LL * v16) + 16LL) + 16LL));
          if ( *(float *)v20.m128i_i32 <= v19 )
            v19 = *(float *)v20.m128i_i32;
          *((float *)this + 11) = v19;
          v21 = *((float *)this + 12);
          if ( *(float *)&v20.m128i_i32[1] <= v21 )
            v21 = *(float *)&v20.m128i_i32[1];
          v20.m128i_i32[0] = *((_DWORD *)this + 13);
          *((float *)this + 12) = v21;
          if ( *(float *)v20.m128i_i32 <= *(float *)&v20.m128i_i32[2] )
            v20.m128i_i32[0] = v20.m128i_i32[2];
          v22 = *((float *)this + 14);
          *((_DWORD *)this + 13) = v20.m128i_i32[0];
          if ( v22 <= *(float *)&v20.m128i_i32[3] )
            v22 = *(float *)&v20.m128i_i32[3];
          *((float *)this + 14) = v22;
        }
        ++v16;
      }
      while ( v16 < *((_DWORD *)this + 6) );
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
