/*
 * XREFs of ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18000611C
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800061B4 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800AAB70 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 */

void __fastcall CGraphWalker<CVisual>::EndWalk(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbp
  int v5; // eax
  void **v6; // [rsp+20h] [rbp-18h]
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 == 10 )
  {
    v4 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v4 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v4) <= *(_DWORD *)(a1 + 36) )
    {
      v7 = 0LL;
      v5 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 16LL, (unsigned int)v4, (unsigned __int64)&v7, v6);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v7;
        *(_DWORD *)(a1 + 36) = v4;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xF3u);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v3 + 1;
  }
}
