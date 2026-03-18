/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180011654
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180001BF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FAFE0 (-RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180022F20 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  char *v4; // rbp
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  int updated; // eax
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( this )
    v4 = (char *)this + 56;
  else
    v4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 47) + 32LL))(
         *((_QWORD *)this + 47),
         v4,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x24F0u);
    if ( !a2 )
    {
LABEL_15:
      --*((_DWORD *)this + 176);
      goto LABEL_16;
    }
  }
  else
  {
    if ( g_LockAndReadD2DTarget )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 44) + 168LL))(
        *((_QWORD *)this + 44),
        0LL,
        0LL);
    if ( !a2 )
    {
      v7 = *((_QWORD *)this + 44);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 44));
      v8 = v14;
      *((_QWORD *)this + 44) = v14;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = *((_QWORD *)this + 45);
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 45));
        *((_QWORD *)this + 45) = 0LL;
      }
      (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 44))(
        *((_QWORD *)this + 44),
        &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
        (char *)this + 360);
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v6 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2501u);
      goto LABEL_15;
    }
  }
  v12 = *((_QWORD *)this + 44);
  if ( v12 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*((_QWORD *)this + 44));
    *((_QWORD *)this + 44) = 0LL;
  }
  v13 = *((_QWORD *)this + 45);
  if ( v13 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(*((_QWORD *)this + 45));
    *((_QWORD *)this + 45) = 0LL;
  }
LABEL_16:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  result = v6;
  *(_WORD *)((char *)this + 5929) = 257;
  return result;
}
