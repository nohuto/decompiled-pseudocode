/*
 * XREFs of ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x18002D04C
 * Callers:
 *     ??_ECHWDrawListCache@@MEAAPEAXI@Z @ 0x18002CFC0 (--_ECHWDrawListCache@@MEAAPEAXI@Z.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECHWDrawListEntry@@UEAAPEAXI@Z @ 0x18002CEB0 (--_ECHWDrawListEntry@@UEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall CHWDrawListCache::Invalidate(CHWDrawListCache *this)
{
  __int64 i; // rsi
  volatile signed __int32 *v3; // rdi
  CHWDrawListEntry *(__fastcall *v4)(CHWDrawListEntry *, char); // rbp
  void (*v5)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(volatile signed __int32 **)(*((_QWORD *)this + 2) + 48 * i);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        v4 = *(CHWDrawListEntry *(__fastcall **)(CHWDrawListEntry *, char))(*(_QWORD *)v3 + 16LL);
        if ( v4 == CHWDrawListEntry::`vector deleting destructor' )
          CHWDrawListEntry::`vector deleting destructor'((CHWDrawListEntry *)v3, 1);
        else
          v4((CHWDrawListEntry *)v3, 1);
      }
      *(_QWORD *)(*((_QWORD *)this + 2) + 48 * i) = 0LL;
    }
  }
  v5 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v5 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 2));
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v5)(WPF::g_pProcessHeap, *((_QWORD *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
}
