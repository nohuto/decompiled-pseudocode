/*
 * XREFs of ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800586B8
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetBounds@CHWDrawListEntry@@UEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C000 (-GetBounds@CHWDrawListEntry@@UEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        __int64 a2,
        struct CDrawListEntry **a3,
        unsigned int a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6,
        bool a7)
{
  __int64 v8; // rsi
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v16; // rax
  __int64 v17; // r14
  _DWORD *v18; // rsi
  int v19; // eax
  void (__fastcall *v20)(_DWORD *, float *); // rax
  float v22[4]; // [rsp+30h] [rbp-48h] BYREF

  v8 = a4;
  v9 = *((_DWORD *)this + 4);
  v10 = 0;
  if ( v9 )
  {
    if ( v9 == 1 )
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 18, 1u);
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 16, 1u);
  }
  v13 = a4;
  v14 = 8LL * a4;
  if ( !is_mul_ok(a4, 8uLL) )
    v14 = -1LL;
  v15 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v15 == WPF::ProcessHeapImpl::Alloc )
    v16 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v14);
  else
    v16 = (void *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v15)(
                    WPF::g_pProcessHeap,
                    v14,
                    WPF::ProcessHeapImpl::Alloc);
  *((_QWORD *)this + 4) = v16;
  if ( v16 )
  {
    memcpy_0(v16, a3, 8 * v8);
    *((_DWORD *)this + 17) = a5;
    *((_BYTE *)this + 72) = a6;
    *((_BYTE *)this + 73) = a7;
    *((_DWORD *)this + 10) = v8;
    *((_QWORD *)this + 3) = a2;
    *(_QWORD *)((char *)this + 52) = 0LL;
    *(_QWORD *)((char *)this + 44) = 0LL;
    if ( (_DWORD)v8 )
    {
      *((_DWORD *)this + 16) = -1;
      *((_DWORD *)this + 15) = 0;
      v17 = 0LL;
      do
      {
        v18 = *(_DWORD **)(v17 + *((_QWORD *)this + 4));
        (**(void (__fastcall ***)(_DWORD *))v18)(v18);
        v19 = v18[5];
        *((_DWORD *)this + 15) |= v19;
        *((_DWORD *)this + 16) &= v19;
        v20 = *(void (__fastcall **)(_DWORD *, float *))(*(_QWORD *)v18 + 32LL);
        if ( (char *)v20 == (char *)CHWDrawListEntry::GetBounds )
          CHWDrawListEntry::GetBounds(v18, v22);
        else
          v20(v18, v22);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 11, v22);
        v17 += 8LL;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      *(_QWORD *)((char *)this + 60) = 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Au);
  }
  return v10;
}
