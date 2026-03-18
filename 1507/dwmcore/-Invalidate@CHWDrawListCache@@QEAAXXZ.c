/*
 * XREFs of ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x180073B6C
 * Callers:
 *     ??_ECHWDrawListCache@@MEAAPEAXI@Z @ 0x180073AF0 (--_ECHWDrawListCache@@MEAAPEAXI@Z.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_ECHWDrawListEntry@@UEAAPEAXI@Z @ 0x180073F10 (--_ECHWDrawListEntry@@UEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHWDrawListCache::Invalidate(CHWDrawListCache *this)
{
  __int64 i; // rsi
  volatile signed __int32 *v3; // rdi
  void *(__fastcall *v4)(CHWDrawListEntry *__hidden, unsigned int); // rbp
  void (__fastcall *v5)(WPF::ProcessHeapImpl *, void *); // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(volatile signed __int32 **)(*((_QWORD *)this + 2) + 48 * i);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        v4 = *(void *(__fastcall **)(CHWDrawListEntry *__hidden, unsigned int))(*(_QWORD *)v3 + 16LL);
        if ( v4 == CHWDrawListEntry::`vector deleting destructor' )
          CHWDrawListEntry::`vector deleting destructor'((CHWDrawListEntry *)v3, 1u);
        else
          v4((CHWDrawListEntry *)v3, 1u);
      }
      *(_QWORD *)(*((_QWORD *)this + 2) + 48 * i) = 0LL;
    }
  }
  v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v5 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 2));
  else
    v5(WPF::g_pProcessHeap, *((void **)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
}
