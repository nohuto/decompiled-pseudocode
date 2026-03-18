/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAJAEBUCFrame@CGraphWalker@@@Z @ 0x18000C03C
 * Callers:
 *     ?GotoFirstChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x18000BCB8 (-GotoFirstChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z.c)
 *     ?GotoPostChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x1800FA9B0 (-GotoPostChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z.c)
 *     ?GotoPreChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x1800FAA7C (-GotoPreChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z.c)
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker::CFrame,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  void *v2; // rbp
  __int64 v5; // rax
  unsigned int v6; // r15d
  unsigned int v7; // eax
  unsigned int v9; // r12d
  int v10; // eax
  unsigned __int64 v11; // rax
  void *v12; // rsi
  void **v13; // [rsp+20h] [rbp-38h]
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v5 = a1[1];
  v6 = 0;
  if ( *a1 != (_DWORD)v5 )
    goto LABEL_2;
  v9 = 2 * v5;
  if ( (unsigned __int64)(2 * v5) > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_5;
  }
  if ( v9 <= 0x40 )
    v9 = 64;
  v10 = WPF::HrMalloc((WPF *)a1, 16LL, v9, (unsigned __int64)&v14, v13);
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x54u);
LABEL_14:
    v2 = v14;
    goto LABEL_5;
  }
  v11 = 16LL * *a1;
  if ( v11 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    goto LABEL_14;
  }
  v12 = v14;
  v6 = 0;
  memcpy_0(v14, *((const void **)a1 + 2), (unsigned int)v11);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)a1 + 2));
  *((_QWORD *)a1 + 2) = v12;
  a1[1] = v9;
LABEL_2:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (*a1)++) = *a2;
  v7 = *a1;
  if ( a1[6] > *a1 )
    v7 = a1[6];
  a1[6] = v7;
LABEL_5:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v2);
  return v6;
}
