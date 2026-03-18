/*
 * XREFs of ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180021AE0
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F0F0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800204E0 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180024C6C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180024F84 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v7; // r12d
  struct ID2D1PrivateCompositorRenderer *v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  int v12; // eax
  CD2DTarget *v13; // r15
  unsigned int v14; // edx
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  CD2DContext::FlushDrawList(this);
  v6 = *((_DWORD *)this + 48);
  v7 = 0;
  v8 = 0LL;
  v15 = 0;
  if ( v6 )
  {
    v5 = (unsigned int)(v6 - 1);
    v8 = (struct ID2D1PrivateCompositorRenderer *)*((_QWORD *)this[21] + v5);
  }
  *((_DWORD *)this + 48) = v6 - 1;
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 48) )
  {
    v12 = *((_DWORD *)this + 48);
    v13 = 0LL;
    if ( v12 )
      v13 = (CD2DTarget *)*((_QWORD *)this[21] + (unsigned int)(v12 - 1));
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v13 + 3) + 8LL))(*((_QWORD **)v13 + 3));
      *a3 = (struct IRenderTarget *)*((_QWORD *)v13 + 3);
    }
    CD2DTarget::ApplyState(v13, (struct CD2DContext *)this);
  }
  else
  {
    if ( *((_BYTE *)this + 376) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v5, &EVTDESC_ETWGUID_DRAWEVENT_Start, 17LL, 0LL);
      v9 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD, _QWORD))(*(_QWORD *)this[5]
                                                                                              + 392LL))(
             this[5],
             0LL,
             0LL);
      v15 = v9;
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x335u);
      *((_WORD *)this + 188) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v10, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 17LL, 0LL);
    }
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))v8 + 3))(
           *((_QWORD *)v8 + 3),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v16) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      this[33] = v8;
      goto LABEL_15;
    }
    CD2DContext::D2DSetTargetInternal((CD2DContext *)this, 0LL);
  }
  if ( v8 )
    CD2DTarget::`scalar deleting destructor'(v8, v14);
LABEL_15:
  TranslateDXGIorD3DErrorInContext(v7, 0LL, &v15);
  return v15;
}
