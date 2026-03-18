/*
 * XREFs of ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18007DC00
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180005658 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800AD74C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  __int64 v5; // rcx
  int v6; // edx
  int v7; // r14d
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  int v12; // eax
  CD2DTarget *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void (__fastcall *v17)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  CD2DContext::FlushDrawList(this);
  v6 = *((_DWORD *)this + 54);
  v7 = 0;
  v8 = 0LL;
  v18 = 0;
  if ( v6 )
  {
    v5 = (unsigned int)(v6 - 1);
    v8 = *((_QWORD *)this[24] + v5);
  }
  *((_DWORD *)this + 54) = v6 - 1;
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 54) )
  {
    v12 = *((_DWORD *)this + 54);
    v13 = 0LL;
    if ( v12 )
      v13 = (CD2DTarget *)*((_QWORD *)this[24] + (unsigned int)(v12 - 1));
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v13 + 3) + 8LL))(*((_QWORD **)v13 + 3));
      *a3 = (struct IRenderTarget *)*((_QWORD *)v13 + 3);
    }
    CD2DTarget::ApplyState(v13, (struct CD2DContext *)this);
  }
  else
  {
    if ( *((_BYTE *)this + 400) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v5, &EVTDESC_ETWGUID_DRAWEVENT_Start, 17LL, 0LL);
      v9 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD, _QWORD))(*(_QWORD *)this[5]
                                                                                              + 392LL))(
             this[5],
             0LL,
             0LL);
      v18 = v9;
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4A0u);
      *((_WORD *)this + 200) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v10, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 17LL, 0LL);
    }
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v8 + 24))(
           *(_QWORD *)(v8 + 24),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v19) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      this[36] = (struct ID2D1PrivateCompositorRenderer *)v8;
      goto LABEL_15;
    }
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD, _QWORD))(*(_QWORD *)this[6] + 56LL))(
      this[6],
      0LL,
      0LL);
  }
  if ( v8 )
  {
    v14 = *(_QWORD *)(v8 + 40);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *(_QWORD *)(v8 + 32);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = *(_QWORD *)(v8 + 24);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v17 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)v8);
    else
      v17(WPF::g_pProcessHeap, (void *)v8);
  }
LABEL_15:
  TranslateDXGIorD3DErrorInContext(v7, 0, (int *)&v18);
  return v18;
}
