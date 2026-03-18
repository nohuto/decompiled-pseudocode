/*
 * XREFs of ?Push@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z @ 0x18005DE18
 * Callers:
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x18004E7C0 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?PushOffset@CBaseMatrixStack@@IEAAJMMM@Z @ 0x18013A690 (-PushOffset@CBaseMatrixStack@@IEAAJMMM@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CBaseMatrix,8,2,8>::Push(const void **a1, _OWORD *a2)
{
  void *v2; // rbp
  __int64 v5; // rax
  unsigned int v6; // r15d
  char *v7; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  void (__fastcall *v10)(WPF::ProcessHeapImpl *, void *); // rdi
  unsigned int v12; // r12d
  int v13; // eax
  unsigned __int64 v14; // rax
  void *v15; // rsi
  void **v16; // [rsp+20h] [rbp-38h]
  void *v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v17 = 0LL;
  v5 = *((unsigned int *)a1 + 1);
  v6 = 0;
  if ( *(_DWORD *)a1 != (_DWORD)v5 )
    goto LABEL_2;
  v12 = 2 * v5;
  if ( (unsigned __int64)(2 * v5) > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_5;
  }
  if ( v12 <= 8 )
    v12 = 8;
  v13 = WPF::HrMalloc((WPF *)a1, 64LL, v12, (unsigned __int64)&v17, v16);
  v6 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x54u);
LABEL_17:
    v2 = v17;
    goto LABEL_5;
  }
  v14 = (unsigned __int64)*(unsigned int *)a1 << 6;
  if ( v14 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    goto LABEL_17;
  }
  v15 = v17;
  v6 = 0;
  memcpy_0(v17, a1[2], (unsigned int)v14);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a1[2]);
  a1[2] = v15;
  *((_DWORD *)a1 + 1) = v12;
LABEL_2:
  v7 = (char *)a1[2];
  v8 = (unsigned __int64)*(unsigned int *)a1 << 6;
  *(_OWORD *)&v7[v8] = *a2;
  *(_OWORD *)&v7[v8 + 16] = a2[1];
  *(_OWORD *)&v7[v8 + 32] = a2[2];
  *(_OWORD *)&v7[v8 + 48] = a2[3];
  v9 = ++*(_DWORD *)a1;
  if ( *((_DWORD *)a1 + 6) > *(_DWORD *)a1 )
    v9 = *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 6) = v9;
LABEL_5:
  v10 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v10 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    v10(WPF::g_pProcessHeap, v2);
  return v6;
}
