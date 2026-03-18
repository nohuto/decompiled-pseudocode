/*
 * XREFs of ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800727F0
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18005D92C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x18005D96C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180071524 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  __int64 v5; // rcx
  int v6; // edx
  int v7; // r12d
  CD2DTarget *v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  int v12; // eax
  CD2DTarget *v13; // r15
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  CD2DContext::FlushDrawList(this);
  v6 = *((_DWORD *)this + 48);
  v7 = 0;
  v8 = 0LL;
  v14 = 0;
  if ( v6 )
  {
    v5 = (unsigned int)(v6 - 1);
    v8 = *(CD2DTarget **)(*((_QWORD *)this + 21) + 8 * v5);
  }
  *((_DWORD *)this + 48) = v6 - 1;
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 48) )
  {
    v12 = *((_DWORD *)this + 48);
    v13 = 0LL;
    if ( v12 )
      v13 = *(CD2DTarget **)(*((_QWORD *)this + 21) + 8LL * (unsigned int)(v12 - 1));
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v13 + 3) + 8LL))(*((_QWORD **)v13 + 3));
      *a3 = (struct IRenderTarget *)*((_QWORD *)v13 + 3);
    }
    CD2DTarget::ApplyState(v13, this);
  }
  else
  {
    if ( *((_BYTE *)this + 232) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v5, &EVTDESC_ETWGUID_DRAWEVENT_Start, 17LL, 0LL);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 392LL))(
             *((_QWORD *)this + 5),
             0LL,
             0LL);
      v14 = v9;
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x32Cu);
      *((_BYTE *)this + 232) = 0;
      *((_BYTE *)this + 244) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v10, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 17LL, 0LL);
    }
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))v8 + 3))(
           *((_QWORD *)v8 + 3),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v15) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      *((_QWORD *)this + 34) = v8;
      goto LABEL_15;
    }
    CD2DContext::D2DSetTargetInternal(this, 0LL);
  }
  if ( v8 )
    CD2DTarget::`scalar deleting destructor'(v8);
LABEL_15:
  TranslateDXGIorD3DErrorInContext(v7, 0, &v14);
  return v14;
}
