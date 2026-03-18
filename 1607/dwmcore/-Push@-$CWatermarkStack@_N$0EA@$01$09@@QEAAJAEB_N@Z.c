/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801122BC
 * Callers:
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180124730 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D3EC (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D5A4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(const void **a1, _BYTE *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // rbp
  unsigned __int64 v7; // rsi
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v9; // rax
  unsigned int v10; // ecx

  v2 = *((_DWORD *)a1 + 1);
  v3 = 0;
  v4 = 0LL;
  if ( *(_DWORD *)a1 == v2 )
  {
    v7 = 2LL * v2;
    if ( v7 > 0xFFFFFFFF )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_17;
    }
    if ( (unsigned int)v7 <= 0x40 )
      LODWORD(v7) = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 1 )
    {
      v3 = -2147024809;
    }
    else
    {
      v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v8 == WPF::ProcessHeapImpl::Alloc )
        v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v7);
      else
        v9 = v8(WPF::g_pProcessHeap, (unsigned int)v7);
      v4 = v9;
      if ( !v9 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
      goto LABEL_17;
    }
    v3 = 0;
    memcpy_0(v4, a1[2], *(unsigned int *)a1);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1[2]);
    a1[2] = v4;
    v4 = 0LL;
    *((_DWORD *)a1 + 1) = v7;
  }
  *((_BYTE *)a1[2] + (unsigned int)(*(_DWORD *)a1)++) = *a2;
  v10 = *(_DWORD *)a1;
  if ( *((_DWORD *)a1 + 6) > *(_DWORD *)a1 )
    v10 = *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 6) = v10;
LABEL_17:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return (unsigned int)v3;
}
