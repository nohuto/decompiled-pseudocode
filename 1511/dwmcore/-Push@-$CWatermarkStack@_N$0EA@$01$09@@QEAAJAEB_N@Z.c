/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800FE0F8
 * Callers:
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x18010DFC4 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B2F0 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B4A4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(const void **a1, _BYTE *a2)
{
  unsigned int v2; // eax
  void *v3; // rbp
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  int v8; // eax
  void *v9; // rsi
  unsigned int v10; // eax
  void *v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 1);
  v3 = 0LL;
  v6 = 0;
  v12 = 0LL;
  if ( *(_DWORD *)a1 == v2 )
  {
    v7 = 2LL * v2;
    if ( v7 > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_11;
    }
    if ( (unsigned int)v7 <= 0x40 )
      LODWORD(v7) = 64;
    v8 = WPF::HrMalloc((WPF *)a1, 1uLL, (unsigned int)v7, &v12);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x54u);
      v3 = v12;
      goto LABEL_11;
    }
    v9 = v12;
    v6 = 0;
    memcpy_0(v12, a1[2], *(unsigned int *)a1);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1[2]);
    a1[2] = v9;
    *((_DWORD *)a1 + 1) = v7;
  }
  *((_BYTE *)a1[2] + (unsigned int)(*(_DWORD *)a1)++) = *a2;
  v10 = *(_DWORD *)a1;
  if ( *((_DWORD *)a1 + 6) > *(_DWORD *)a1 )
    v10 = *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 6) = v10;
LABEL_11:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v3);
  return v6;
}
