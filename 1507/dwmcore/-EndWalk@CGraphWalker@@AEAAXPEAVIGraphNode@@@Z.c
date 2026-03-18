/*
 * XREFs of ?EndWalk@CGraphWalker@@AEAAXPEAVIGraphNode@@@Z @ 0x18000BE38
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18014D19C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ @ 0x18005C018 (-UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CGraphWalker::EndWalk(CGraphWalker *this, struct IGraphNode *a2)
{
  int v3; // eax
  __int64 v4; // rbp
  int v5; // eax
  void **v6; // [rsp+20h] [rbp-18h]
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    CGraphWalker::UnregisterGraphWalkRoot();
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 0;
  v3 = *((_DWORD *)this + 10);
  if ( v3 == 10 )
  {
    v4 = 64LL;
    if ( *((_DWORD *)this + 14) > 0x40u )
      v4 = *((unsigned int *)this + 14);
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 9) )
    {
      v7 = 0LL;
      v5 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 16LL, (unsigned int)v4, (unsigned __int64)&v7, v6);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 6));
        *((_QWORD *)this + 6) = v7;
        *((_DWORD *)this + 9) = v4;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xF3u);
      }
    }
    *((_DWORD *)this + 14) = 0;
    *((_DWORD *)this + 10) = 0;
  }
  else
  {
    *((_DWORD *)this + 10) = v3 + 1;
  }
}
