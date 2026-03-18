/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAXXZ @ 0x180051BFC
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CWatermarkStack<CGraphWalker::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbp
  int v4; // eax
  void **v5; // [rsp+20h] [rbp-18h]
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 10 )
  {
    v3 = 64LL;
    if ( *(_DWORD *)(a1 + 24) > 0x40u )
      v3 = *(unsigned int *)(a1 + 24);
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 4) )
    {
      v6 = 0LL;
      v4 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 16LL, (unsigned int)v3, (unsigned __int64)&v6, v5);
      if ( v4 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 16));
        *(_QWORD *)(a1 + 16) = v6;
        *(_DWORD *)(a1 + 4) = v3;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xF3u);
      }
    }
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v1 + 1;
  }
}
