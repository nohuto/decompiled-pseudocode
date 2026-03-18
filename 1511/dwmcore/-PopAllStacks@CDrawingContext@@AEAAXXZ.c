/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800434C0
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800436C0 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003CA58 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180058F14 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAXXZ @ 0x18005DD08 (-Optimize@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x1800AA028 (-Optimize@-$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x1800ACC40 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // eax
  __int64 v3; // rbp
  WPF *v4; // rcx
  int v5; // eax
  WPF *v6; // rcx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // r14
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void **v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  *((_DWORD *)this + 106) = 0;
  v2 = *((_DWORD *)this + 108);
  v3 = 64LL;
  if ( v2 == 10 )
  {
    v8 = *((_DWORD *)this + 112);
    v9 = 64LL;
    if ( v8 > 0x40 )
      v9 = v8;
    if ( (unsigned __int64)(3 * v9) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v9) <= *((_DWORD *)this + 107) )
    {
      v17 = 0LL;
      v13 = WPF::HrMalloc(this, 16LL, (unsigned int)v9, (unsigned __int64)&v17, v16);
      if ( v13 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 55));
        *((_QWORD *)this + 55) = v17;
        *((_DWORD *)this + 107) = v9;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xF3u);
      }
    }
    *((_DWORD *)this + 112) = 0;
    *((_DWORD *)this + 108) = 0;
  }
  else
  {
    *((_DWORD *)this + 108) = v2 + 1;
  }
  *((_DWORD *)this + 114) = 0;
  CWatermarkStack<CBaseMatrix,8,2,8>::Optimize();
  *((_DWORD *)this + 122) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize();
  while ( *((_DWORD *)this + 136) )
    CDrawingContext::PopLayerInternal((__int64)this);
  *((_DWORD *)this + 162) = 0;
  v5 = *((_DWORD *)this + 164);
  if ( v5 == 10 )
  {
    v10 = *((_DWORD *)this + 168);
    v11 = 64LL;
    if ( v10 > 0x40 )
      v11 = v10;
    if ( (unsigned __int64)(3 * v11) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v11) <= *((_DWORD *)this + 163) )
    {
      v17 = 0LL;
      v14 = WPF::HrMalloc(v4, 32LL, (unsigned int)v11, (unsigned __int64)&v17, v16);
      if ( v14 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 83));
        *((_QWORD *)this + 83) = v17;
        *((_DWORD *)this + 163) = v11;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF3u);
      }
    }
    *((_DWORD *)this + 168) = 0;
    *((_DWORD *)this + 164) = 0;
  }
  else
  {
    *((_DWORD *)this + 164) = v5 + 1;
  }
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 680));
  *((_DWORD *)this + 646) = 0;
  CWatermarkStack<float,64,2,10>::Optimize();
  *((_DWORD *)this + 676) = 0;
  v7 = *((_DWORD *)this + 678);
  if ( v7 == 10 )
  {
    v12 = *((_DWORD *)this + 682);
    if ( v12 > 0x40 )
      v3 = v12;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 677) )
    {
      v17 = 0LL;
      v15 = WPF::HrMalloc(v6, 16LL, (unsigned int)v3, (unsigned __int64)&v17, v16);
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 340));
        *((_QWORD *)this + 340) = v17;
        *((_DWORD *)this + 677) = v3;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF3u);
      }
    }
    *((_DWORD *)this + 682) = 0;
    *((_DWORD *)this + 678) = 0;
  }
  else
  {
    *((_DWORD *)this + 678) = v7 + 1;
  }
}
