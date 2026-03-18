/*
 * XREFs of ?Push@?$CWatermarkStack@UInverseTransformStruct@CHitTestContext@@$09$01$09@@QEAAJAEBUInverseTransformStruct@CHitTestContext@@@Z @ 0x18000C1A8
 * Callers:
 *     ?GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F@@PEA_N_N@Z @ 0x18000B80C (-GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F.c)
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CHitTestContext::InverseTransformStruct,10,2,10>::Push(unsigned int *a1, __int64 a2)
{
  void *v2; // rbp
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v11; // r12d
  int v12; // eax
  unsigned __int64 v13; // rcx
  void *v14; // rsi
  void **v15; // [rsp+20h] [rbp-38h]
  void *v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  v5 = a1[1];
  v6 = 0;
  if ( *a1 != (_DWORD)v5 )
    goto LABEL_2;
  v11 = 2 * v5;
  if ( (unsigned __int64)(2 * v5) > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_5;
  }
  if ( v11 <= 0xA )
    v11 = 10;
  v12 = WPF::HrMalloc((WPF *)a1, 40LL, v11, (unsigned __int64)&v16, v15);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x54u);
LABEL_14:
    v2 = v16;
    goto LABEL_5;
  }
  v13 = 40LL * *a1;
  if ( v13 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    goto LABEL_14;
  }
  v14 = v16;
  v6 = 0;
  memcpy_0(v16, *((const void **)a1 + 2), (unsigned int)v13);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)a1 + 2));
  *((_QWORD *)a1 + 2) = v14;
  a1[1] = v11;
LABEL_2:
  v7 = 5LL * *a1;
  v8 = *((_QWORD *)a1 + 2);
  *(_OWORD *)(v8 + 8 * v7) = *(_OWORD *)a2;
  *(_OWORD *)(v8 + 8 * v7 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(v8 + 8 * v7 + 32) = *(_QWORD *)(a2 + 32);
  v9 = ++*a1;
  if ( a1[6] > *a1 )
    v9 = a1[6];
  a1[6] = v9;
LABEL_5:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v2);
  return v6;
}
