/*
 * XREFs of ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x1800256D0
 * Callers:
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180025440 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?PushOffset@CBaseMatrixStack@@IEAAJMMM@Z @ 0x180163D54 (-PushOffset@CBaseMatrixStack@@IEAAJMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // eax
  void (*v10)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned int v12; // esi
  unsigned __int64 v13; // rdx
  void *(__fastcall *v14)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-28h]

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != (_DWORD)v2 )
    goto LABEL_2;
  v12 = 2 * v2;
  if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF )
  {
    v17 = 76;
    goto LABEL_24;
  }
  if ( v12 <= 8 )
    v12 = 8;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v12 <= 0x44 )
  {
    v3 = -2147024809;
  }
  else
  {
    v13 = 68LL * v12;
    v14 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v14 == WPF::ProcessHeapImpl::Alloc )
      v15 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v13);
    else
      v15 = v14(WPF::g_pProcessHeap, v13);
    v4 = v15;
    if ( !v15 )
      v3 = -2147024882;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
    goto LABEL_5;
  }
  v16 = 68LL * *a1;
  if ( v16 > 0xFFFFFFFF )
  {
    v17 = 86;
LABEL_24:
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v17);
    goto LABEL_5;
  }
  v3 = 0;
  memcpy_0(v4, *((const void **)a1 + 2), (unsigned int)v16);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)a1 + 2));
  *((_QWORD *)a1 + 2) = v4;
  v4 = 0LL;
  a1[1] = v12;
LABEL_2:
  v7 = *((_QWORD *)a1 + 2);
  v8 = 68LL * *a1;
  *(_OWORD *)(v8 + v7) = *(_OWORD *)a2;
  *(_OWORD *)(v8 + v7 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v8 + v7 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v8 + v7 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v8 + v7 + 64) = *(_DWORD *)(a2 + 64);
  v9 = ++*a1;
  if ( a1[6] > *a1 )
    v9 = a1[6];
  a1[6] = v9;
LABEL_5:
  v10 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v10 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v10)(WPF::g_pProcessHeap, v4);
  return (unsigned int)v3;
}
