/*
 * XREFs of ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x18004E7C0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x180055BC4 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B4A4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B6A4 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Top@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEBAJPEAVCBaseMatrix@@I@Z @ 0x18005DDC8 (-Top@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEBAJPEAVCBaseMatrix@@I@Z.c)
 *     ?Push@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z @ 0x18005DE18 (-Push@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CBaseMatrixStack::Push(CBaseMatrixStack *this, const struct CMILMatrix *a2, char a3)
{
  int v3; // eax
  WPF *v6; // rcx
  void *v7; // rdi
  int v8; // esi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // ecx
  void (*v12)(WPF::ProcessHeapImpl *__hidden, void *); // rbx
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // r14d
  int v18; // eax
  unsigned __int64 v19; // rax
  void *v20; // r15
  void *v21; // r13
  void **v22; // [rsp+20h] [rbp-E8h]
  void *v23; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v24[64]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v25[64]; // [rsp+80h] [rbp-88h] BYREF

  v3 = *(_DWORD *)this;
  if ( !*(_DWORD *)this || !a3 )
  {
    v6 = (WPF *)*((unsigned int *)this + 1);
    v7 = 0LL;
    v8 = 0;
    v23 = 0LL;
    if ( v3 != (_DWORD)v6 )
    {
LABEL_4:
      v9 = *((_QWORD *)this + 2);
      v10 = (unsigned __int64)*(unsigned int *)this << 6;
      *(_OWORD *)(v10 + v9) = *(_OWORD *)a2;
      *(_OWORD *)(v10 + v9 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v10 + v9 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v10 + v9 + 48) = *((_OWORD *)a2 + 3);
      v11 = ++*(_DWORD *)this;
      if ( *((_DWORD *)this + 6) > *(_DWORD *)this )
        v11 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 6) = v11;
      goto LABEL_7;
    }
    v17 = 2 * (_DWORD)v6;
    if ( (unsigned __int64)(2LL * (_QWORD)v6) > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    }
    else
    {
      if ( v17 <= 8 )
        v17 = 8;
      v18 = WPF::HrMalloc(v6, 64LL, v17, (unsigned __int64)&v23, v22);
      v8 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x54u);
        v7 = v23;
      }
      else
      {
        v19 = (unsigned __int64)*(unsigned int *)this << 6;
        if ( v19 <= 0xFFFFFFFF )
        {
          v20 = v23;
          v8 = 0;
          memcpy_0(v23, *((const void **)this + 2), (unsigned int)v19);
          v21 = (void *)*((_QWORD *)this + 2);
          v23 = *(void **)(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v23 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v21);
          else
            ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v23)(WPF::g_pProcessHeap, v21);
          *((_QWORD *)this + 2) = v20;
          *((_DWORD *)this + 1) = v17;
          goto LABEL_4;
        }
        v8 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
        v7 = v23;
      }
    }
LABEL_7:
    v12 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v12 == WPF::ProcessHeapImpl::Free )
    {
      if ( v7 )
        HeapFree(g_hProcessHeap, 0, v7);
    }
    else
    {
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v12)(WPF::g_pProcessHeap, v7);
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x36u);
    return (unsigned int)v8;
  }
  v14 = CWatermarkStack<CBaseMatrix,8,2,8>::Top(this, v24);
  v15 = v14;
  if ( v14 >= 0 )
  {
    D2DMatrixMultiply((struct D2DMatrix *)v25, a2, (const struct D2DMatrix *)v24);
    v16 = CWatermarkStack<CBaseMatrix,8,2,8>::Push(this, v25);
    v8 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x45u);
    return (unsigned int)v8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x3Du);
  return v15;
}
