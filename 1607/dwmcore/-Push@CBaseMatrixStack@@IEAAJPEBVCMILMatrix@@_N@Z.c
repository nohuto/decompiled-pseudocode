/*
 * XREFs of ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180025440
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18005C77C (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D5A4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D790 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x180025674 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x1800256D0 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseMatrixStack::Push(CBaseMatrixStack *this, const struct CMILMatrix *a2, char a3)
{
  int v3; // eax
  __int64 v6; // rcx
  int v7; // edi
  void *v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  void (*v11)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  unsigned __int64 v16; // rdx
  void *(__fastcall *v17)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v18; // rax
  unsigned __int64 v19; // rcx
  void *v20; // rdx
  void (*v21)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned int v22; // [rsp+20h] [rbp-C8h]
  _BYTE v23[64]; // [rsp+30h] [rbp-B8h] BYREF
  int v24; // [rsp+70h] [rbp-78h]
  _BYTE v25[64]; // [rsp+80h] [rbp-68h] BYREF
  int v26; // [rsp+C0h] [rbp-28h]

  v3 = *(_DWORD *)this;
  if ( !*(_DWORD *)this || !a3 )
  {
    v6 = *((unsigned int *)this + 1);
    v7 = 0;
    v8 = 0LL;
    if ( v3 != (_DWORD)v6 )
    {
LABEL_4:
      v9 = *((_QWORD *)this + 2) + 68LL * *(unsigned int *)this;
      *(_OWORD *)v9 = *(_OWORD *)a2;
      *(_OWORD *)(v9 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v9 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v9 + 48) = *((_OWORD *)a2 + 3);
      *(_DWORD *)(v9 + 64) = *((_DWORD *)a2 + 16);
      v10 = ++*(_DWORD *)this;
      if ( *((_DWORD *)this + 6) > *(_DWORD *)this )
        v10 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 6) = v10;
      goto LABEL_7;
    }
    v15 = 2 * v6;
    if ( (unsigned __int64)(2 * v6) > 0xFFFFFFFF )
    {
      v22 = 76;
    }
    else
    {
      if ( v15 <= 8 )
        v15 = 8;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v15 <= 0x44 )
      {
        v7 = -2147024809;
      }
      else
      {
        v16 = 68LL * v15;
        v17 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        if ( v17 == WPF::ProcessHeapImpl::Alloc )
          v18 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v16);
        else
          v18 = v17(WPF::g_pProcessHeap, v16);
        v8 = v18;
        if ( !v18 )
          v7 = -2147024882;
      }
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x54u);
LABEL_7:
        v11 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v11 == WPF::ProcessHeapImpl::Free )
        {
          if ( v8 )
            HeapFree(g_hProcessHeap, 0, v8);
        }
        else
        {
          ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v11)(WPF::g_pProcessHeap, v8);
        }
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x36u);
        return (unsigned int)v7;
      }
      v19 = 68LL * *(unsigned int *)this;
      if ( v19 <= 0xFFFFFFFF )
      {
        v7 = 0;
        memcpy_0(v8, *((const void **)this + 2), (unsigned int)v19);
        v20 = (void *)*((_QWORD *)this + 2);
        v21 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v21 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v20);
        else
          ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v21)(WPF::g_pProcessHeap, v20);
        *((_QWORD *)this + 2) = v8;
        v8 = 0LL;
        *((_DWORD *)this + 1) = v15;
        goto LABEL_4;
      }
      v22 = 86;
    }
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v22);
    goto LABEL_7;
  }
  v24 = 0;
  v26 = 0;
  v13 = CWatermarkStack<CMILMatrix,8,2,8>::Top(this, v23);
  v7 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3Du);
    return (unsigned int)v7;
  }
  CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v23, (struct CMILMatrix *)v25);
  result = CWatermarkStack<CMILMatrix,8,2,8>::Push(this, v25);
  v14 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x45u);
    return v14;
  }
  return result;
}
