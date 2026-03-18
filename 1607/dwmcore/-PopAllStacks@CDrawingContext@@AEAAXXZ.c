/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006BB68
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18006BD90 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800039BC (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ @ 0x180025850 (-Optimize@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18009845C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18009BBEC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x1800AD920 (-Optimize@-$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x1800B2414 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // eax
  int v3; // r14d
  __int64 v4; // rbp
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // eax
  SIZE_T v12; // rdx
  LPVOID (__fastcall *v13)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v14; // rax
  LPVOID v15; // rdi
  int v16; // r9d
  SIZE_T v17; // rdx
  LPVOID (__fastcall *v18)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v19; // rax
  LPVOID v20; // rdi
  int v21; // r9d
  LPVOID (__fastcall *v22)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v23; // rdx
  LPVOID v24; // rax
  LPVOID v25; // rdi

  *((_DWORD *)this + 126) = 0;
  v2 = *((_DWORD *)this + 128);
  v3 = -2147024882;
  v4 = 64LL;
  if ( v2 == 10 )
  {
    v7 = *((_DWORD *)this + 132);
    v8 = 64LL;
    if ( v7 > 0x40 )
      v8 = v7;
    if ( (unsigned __int64)(3 * v8) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v8) <= *((_DWORD *)this + 127) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 0x10 )
      {
        v16 = -2147024809;
      }
      else
      {
        v12 = 16LL * (unsigned int)v8;
        v13 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v13 == WPF::ProcessHeapImpl::Alloc )
          v14 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v12);
        else
          v14 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v13)(
                          WPF::g_pProcessHeap,
                          v12,
                          WPF::g_pProcessHeap,
                          WPF::ProcessHeapImpl::Alloc);
        v15 = v14;
        if ( v14 )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *((_QWORD *)this + 65));
          *((_QWORD *)this + 65) = v15;
          *((_DWORD *)this + 127) = v8;
          goto LABEL_13;
        }
        v16 = -2147024882;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xF3u);
    }
LABEL_13:
    *((_DWORD *)this + 132) = 0;
    *((_DWORD *)this + 128) = 0;
    goto LABEL_3;
  }
  *((_DWORD *)this + 128) = v2 + 1;
LABEL_3:
  *((_DWORD *)this + 134) = 0;
  CWatermarkStack<CMILMatrix,8,2,8>::Optimize((__int64)this + 536);
  *((_DWORD *)this + 142) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize();
  while ( *((_DWORD *)this + 156) )
    CDrawingContext::PopLayerInternal((__int64)this);
  CLightStack::Clear((CDrawingContext *)((char *)this + 728));
  *((_DWORD *)this + 220) = 0;
  v5 = *((_DWORD *)this + 222);
  if ( v5 != 10 )
  {
    *((_DWORD *)this + 222) = v5 + 1;
    goto LABEL_7;
  }
  v9 = *((_DWORD *)this + 226);
  v10 = 64LL;
  if ( v9 > 0x40 )
    v10 = v9;
  if ( (unsigned __int64)(3 * v10) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v10) <= *((_DWORD *)this + 221) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 <= 0x1C )
    {
      v21 = -2147024809;
    }
    else
    {
      v17 = 28LL * (unsigned int)v10;
      v18 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v18 == WPF::ProcessHeapImpl::Alloc )
        v19 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v17);
      else
        v19 = v18(WPF::g_pProcessHeap, v17);
      v20 = v19;
      if ( v19 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 112));
        *((_QWORD *)this + 112) = v20;
        *((_DWORD *)this + 221) = v10;
        goto LABEL_18;
      }
      v21 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xF3u);
  }
LABEL_18:
  *((_DWORD *)this + 226) = 0;
  *((_DWORD *)this + 222) = 0;
LABEL_7:
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 912));
  *((_DWORD *)this + 754) = 0;
  CWatermarkStack<float,64,2,10>::Optimize();
  *((_DWORD *)this + 786) = 0;
  v6 = *((_DWORD *)this + 788);
  if ( v6 != 10 )
  {
    *((_DWORD *)this + 788) = v6 + 1;
    return;
  }
  v11 = *((_DWORD *)this + 792);
  if ( v11 > 0x40 )
    v4 = v11;
  if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 787) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 <= 0x10 )
    {
      v3 = -2147024809;
    }
    else
    {
      v22 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      v23 = 16LL * (unsigned int)v4;
      if ( v22 == WPF::ProcessHeapImpl::Alloc )
        v24 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v23);
      else
        v24 = v22(WPF::g_pProcessHeap, v23);
      v25 = v24;
      if ( v24 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 395));
        *((_QWORD *)this + 395) = v25;
        *((_DWORD *)this + 787) = v4;
        goto LABEL_23;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xF3u);
  }
LABEL_23:
  *((_DWORD *)this + 792) = 0;
  *((_DWORD *)this + 788) = 0;
}
