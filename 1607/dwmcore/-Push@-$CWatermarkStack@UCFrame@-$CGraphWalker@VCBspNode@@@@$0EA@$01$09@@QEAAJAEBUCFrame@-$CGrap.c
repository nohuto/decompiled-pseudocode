/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCBspNode@@@@@Z @ 0x18018E2C8
 * Callers:
 *     ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x18018E06C (-GotoPostChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x18018E114 (-GotoPreChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  unsigned int v2; // eax
  int v3; // edi
  void *v4; // rbp
  unsigned __int64 v7; // rsi
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v9; // rdx
  LPVOID v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != v2 )
    goto LABEL_15;
  v7 = 2LL * v2;
  if ( v7 > 0xFFFFFFFF )
  {
    v14 = 76;
    goto LABEL_22;
  }
  if ( (unsigned int)v7 <= 0x40 )
    LODWORD(v7) = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 0x10 )
  {
    v3 = -2147024809;
  }
  else
  {
    v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v9 = 16LL * (unsigned int)v7;
    if ( v8 == WPF::ProcessHeapImpl::Alloc )
      v10 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v9);
    else
      v10 = v8(WPF::g_pProcessHeap, v9);
    v4 = v10;
    if ( !v10 )
      v3 = -2147024882;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
    goto LABEL_18;
  }
  v11 = 16LL * *a1;
  if ( v11 > 0xFFFFFFFF )
  {
    v14 = 86;
LABEL_22:
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v14);
    goto LABEL_18;
  }
  v3 = 0;
  memcpy_0(v4, *((const void **)a1 + 2), (unsigned int)v11);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)a1 + 2));
  *((_QWORD *)a1 + 2) = v4;
  v4 = 0LL;
  a1[1] = v7;
LABEL_15:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (*a1)++) = *a2;
  v12 = *a1;
  if ( a1[6] > *a1 )
    v12 = a1[6];
  a1[6] = v12;
LABEL_18:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return (unsigned int)v3;
}
