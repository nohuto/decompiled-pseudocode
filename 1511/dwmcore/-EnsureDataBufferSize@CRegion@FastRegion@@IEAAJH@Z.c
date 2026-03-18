/*
 * XREFs of ?EnsureDataBufferSize@CRegion@FastRegion@@IEAAJH@Z @ 0x18006DE70
 * Callers:
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18006DE10 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::EnsureDataBufferSize(FastRegion::CRegion *this, int a2)
{
  int *v2; // rdi
  int v5; // eax
  LPVOID (__fastcall *v7)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  LPVOID v8; // rax
  LPVOID v9; // rbp

  v2 = (int *)((char *)this + 8);
  v5 = 60;
  if ( (FastRegion::CRegion *)((char *)this + 8) != *(FastRegion::CRegion **)this )
    v5 = *v2;
  if ( v5 >= a2 )
    return 0LL;
  v7 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v7 == WPF::ProcessHeapImpl::Alloc )
    v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, a2);
  else
    v8 = v7(WPF::g_pProcessHeap, a2);
  v9 = v8;
  if ( v8 )
  {
    FastRegion::CRegion::FreeMemory(this);
    *(_QWORD *)this = v9;
    *v2 = a2;
    return 0LL;
  }
  return 2147942414LL;
}
