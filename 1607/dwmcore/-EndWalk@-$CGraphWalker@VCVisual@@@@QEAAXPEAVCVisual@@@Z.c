/*
 * XREFs of ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18000D48C
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A804 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18000DEB0 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGraphWalker<CVisual>::EndWalk(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v6; // rdx
  void *v7; // rax
  void *v8; // rsi
  int v9; // r9d

  if ( a2 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 != 10 )
  {
    *(_DWORD *)(a1 + 40) = v3 + 1;
    return;
  }
  v4 = 64LL;
  if ( *(_DWORD *)(a1 + 56) > 0x40u )
    v4 = *(unsigned int *)(a1 + 56);
  if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v4) <= *(_DWORD *)(a1 + 36) )
  {
    if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 0x10 )
    {
      v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL);
      v6 = 16LL * (unsigned int)v4;
      if ( v5 == WPF::ProcessHeapImpl::Alloc )
        v7 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v6);
      else
        v7 = v5(WPF::g_pProcessHeap, v6);
      v8 = v7;
      if ( v7 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v8;
        *(_DWORD *)(a1 + 36) = v4;
        goto LABEL_9;
      }
      v9 = -2147024882;
    }
    else
    {
      v9 = -2147024809;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF3u);
  }
LABEL_9:
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 40) = 0;
}
