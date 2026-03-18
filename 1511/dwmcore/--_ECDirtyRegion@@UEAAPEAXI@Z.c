/*
 * XREFs of ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x18007A840
 * Callers:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180079630 (-Release@CDirtyRegion@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CDirtyRegion *__fastcall CDirtyRegion::`vector deleting destructor'(CDirtyRegion *this, char a2)
{
  void **v2; // rbx
  unsigned int i; // edi
  void *v6; // rsi
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rdi
  void **v9; // rax
  __int64 (__fastcall *v10)(CVisual *); // rbp
  void (__fastcall *v11)(WPF::ProcessHeapImpl *, void *); // rbp

  *(_QWORD *)this = &CDirtyRegion::`vftable';
  v2 = (void **)((char *)this + 448);
  for ( i = 0; i < 8; ++i )
  {
    while ( 1 )
    {
      v6 = *v2;
      if ( *v2 == v2 )
        break;
      v9 = *(void ***)v6;
      if ( *((void ***)v6 + 1) != v2 || v9[1] != v6 )
        __fastfail(3u);
      *v2 = v9;
      v9[1] = v2;
      v10 = *(__int64 (__fastcall **)(CVisual *))(**((_QWORD **)v6 + 2) + 16LL);
      if ( v10 == CVisual::Release )
        CVisual::Release(*((CVisual **)v6 + 2));
      else
        v10(*((CVisual **)v6 + 2));
      v11 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v11 == WPF::ProcessHeapImpl::Free )
        HeapFree(g_hProcessHeap, 0, v6);
      else
        v11(WPF::g_pProcessHeap, v6);
    }
    v2 += 2;
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v7(WPF::g_pProcessHeap, this);
  }
  return this;
}
