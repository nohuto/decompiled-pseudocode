/*
 * XREFs of ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800ADD8C
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPF::HrMalloc(WPF *this, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  LPVOID (__fastcall *v6)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v7; // rdx
  LPVOID v8; // rax

  v4 = 0;
  if ( a4 && a3 && a2 && a2 < 0xFFFFFFFFFFFFFFFFuLL / a3 )
  {
    v6 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v7 = a3 * a2;
    if ( v6 == WPF::ProcessHeapImpl::Alloc )
      v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v7);
    else
      v8 = v6(WPF::g_pProcessHeap, v7);
    *a4 = v8;
    if ( !v8 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
