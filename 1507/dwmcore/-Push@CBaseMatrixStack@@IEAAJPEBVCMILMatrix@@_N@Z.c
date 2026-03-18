/*
 * XREFs of ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180019C20
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000B938 (-PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18001FD48 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014CDD8 (-PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z @ 0x180019EFC (-Push@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAJAEBVCBaseMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
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
  __int64 v14; // r8
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  unsigned int v20; // r14d
  int v21; // eax
  unsigned __int64 v22; // rax
  void *v23; // r15
  void *v24; // r13
  void **v25; // [rsp+20h] [rbp-E8h]
  void *v26; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v27[4]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v28[64]; // [rsp+80h] [rbp-88h] BYREF

  v3 = *(_DWORD *)this;
  if ( !*(_DWORD *)this || !a3 )
  {
    v6 = (WPF *)*((unsigned int *)this + 1);
    v7 = 0LL;
    v8 = 0;
    v26 = 0LL;
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
    v20 = 2 * (_DWORD)v6;
    if ( (unsigned __int64)(2LL * (_QWORD)v6) > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    }
    else
    {
      if ( v20 <= 8 )
        v20 = 8;
      v21 = WPF::HrMalloc(v6, 64LL, v20, (unsigned __int64)&v26, v25);
      v8 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x54u);
        v7 = v26;
      }
      else
      {
        v22 = (unsigned __int64)*(unsigned int *)this << 6;
        if ( v22 <= 0xFFFFFFFF )
        {
          v23 = v26;
          v8 = 0;
          memcpy_0(v26, *((const void **)this + 2), (unsigned int)v22);
          v24 = (void *)*((_QWORD *)this + 2);
          v26 = *(void **)(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v26 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v24);
          else
            ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v26)(WPF::g_pProcessHeap, v24);
          *((_QWORD *)this + 2) = v23;
          *((_DWORD *)this + 1) = v20;
          goto LABEL_4;
        }
        v8 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
        v7 = v26;
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
  if ( v3 )
  {
    v14 = (unsigned int)(v3 - 1);
    v15 = *((_QWORD *)this + 2);
    v14 <<= 6;
    v16 = *(_OWORD *)(v14 + v15 + 16);
    v27[0] = *(_OWORD *)(v14 + v15);
    v17 = *(_OWORD *)(v14 + v15 + 32);
    v27[1] = v16;
    v18 = *(_OWORD *)(v14 + v15 + 48);
    v27[2] = v17;
    v27[3] = v18;
    D2DMatrixMultiply((struct D2DMatrix *)v28, a2, (const struct D2DMatrix *)v27);
    v19 = CWatermarkStack<CBaseMatrix,8,2,8>::Push(this, v28);
    v8 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x45u);
    return (unsigned int)v8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x3Du);
  return 2147500037LL;
}
