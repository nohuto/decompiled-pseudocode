/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18002DFF8
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18002E1F4 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180027F54 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18005E1B8 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18007375C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 v4; // rbp
  int v5; // eax
  WPF *v6; // rcx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  void **v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF

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
      v16 = 0LL;
      v12 = WPF::HrMalloc(this, 16LL, (unsigned int)v9, (unsigned __int64)&v16, v15);
      if ( v12 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 55));
        *((_QWORD *)this + 55) = v16;
        *((_DWORD *)this + 107) = v9;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xF3u);
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
  v4 = 8LL;
  v5 = *((_DWORD *)this + 116);
  if ( v5 == 8 )
  {
    v11 = *((_DWORD *)this + 120);
    if ( v11 > 8 )
      v4 = v11;
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 115) )
    {
      v16 = 0LL;
      v13 = WPF::HrMalloc(this, 64LL, (unsigned int)v4, (unsigned __int64)&v16, v15);
      if ( v13 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 59));
        *((_QWORD *)this + 59) = v16;
        *((_DWORD *)this + 115) = v4;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xF3u);
      }
    }
    *((_DWORD *)this + 120) = 0;
    *((_DWORD *)this + 116) = 0;
  }
  else
  {
    *((_DWORD *)this + 116) = v5 + 1;
  }
  *((_DWORD *)this + 122) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize();
  while ( *((_DWORD *)this + 136) )
    CDrawingContext::PopLayerInternal((__int64)this);
  *((_DWORD *)this + 162) = 0;
  v7 = *((_DWORD *)this + 164);
  if ( v7 == 10 )
  {
    v10 = *((_DWORD *)this + 168);
    if ( v10 > 0x40 )
      v3 = v10;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 163) )
    {
      v16 = 0LL;
      v14 = WPF::HrMalloc(v6, 32LL, (unsigned int)v3, (unsigned __int64)&v16, v15);
      if ( v14 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 83));
        *((_QWORD *)this + 83) = v16;
        *((_DWORD *)this + 163) = v3;
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
    *((_DWORD *)this + 164) = v7 + 1;
  }
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 680));
  *((_DWORD *)this + 646) = 0;
  CWatermarkStack<float,64,2,10>::Optimize();
}
