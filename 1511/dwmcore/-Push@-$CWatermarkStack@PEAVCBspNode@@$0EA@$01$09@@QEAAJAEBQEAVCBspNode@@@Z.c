/*
 * XREFs of ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18015B000
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18015AC0C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B4A4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CBspNode *,64,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rbp
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  int v8; // eax
  unsigned __int64 v9; // rax
  void *v10; // rsi
  unsigned int v11; // eax
  void *v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[1];
  v3 = 0LL;
  v6 = 0;
  v13 = 0LL;
  if ( *a1 == v2 )
  {
    v7 = 2LL * v2;
    if ( v7 > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_12;
    }
    if ( (unsigned int)v7 <= 0x40 )
      LODWORD(v7) = 64;
    v8 = WPF::HrMalloc((WPF *)a1, 8uLL, (unsigned int)v7, &v13);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x54u);
LABEL_14:
      v3 = v13;
      goto LABEL_12;
    }
    v9 = 8LL * *a1;
    if ( v9 > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      goto LABEL_14;
    }
    v10 = v13;
    v6 = 0;
    memcpy_0(v13, *((const void **)a1 + 2), (unsigned int)v9);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)a1 + 2));
    *((_QWORD *)a1 + 2) = v10;
    a1[1] = v7;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * (*a1)++) = *a2;
  v11 = *a1;
  if ( a1[6] > *a1 )
    v11 = a1[6];
  a1[6] = v11;
LABEL_12:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v3);
  return v6;
}
