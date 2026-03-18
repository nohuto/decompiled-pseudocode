/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F0F0
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010C40 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180114DB0 (-RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180021AE0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180037290 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  const struct ID2DContextOwner *v4; // rbx
  __int64 (__fastcall *v5)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **); // rbp
  int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // rdi
  struct IRenderTarget *v9; // rdi
  __int64 v10; // rdi
  int updated; // eax
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  struct IRenderTarget *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( this )
    v4 = (CDrawingContext *)((char *)this + 56);
  else
    v4 = 0LL;
  v5 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **))(**((_QWORD **)this + 47) + 32LL);
  if ( v5 == CD2DContext::PopTarget )
    v6 = CD2DContext::PopTarget(*((CD2DContext **)this + 47), v4, &v15);
  else
    v6 = v5(*((CD2DContext **)this + 47), v4, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2423u);
    if ( !a2 )
    {
LABEL_17:
      --*((_DWORD *)this + 176);
      goto LABEL_18;
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
      v8 = *((_QWORD *)this + 44);
      if ( v8 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 44));
      v9 = v15;
      *((_QWORD *)this + 44) = v15;
      if ( v9 )
        (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = *((_QWORD *)this + 45);
      if ( v10 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 45));
        *((_QWORD *)this + 45) = 0LL;
      }
      (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 44))(
        *((_QWORD *)this + 44),
        &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
        (char *)this + 360);
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v7 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2434u);
      goto LABEL_17;
    }
  }
  v13 = *((_QWORD *)this + 44);
  if ( v13 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(*((_QWORD *)this + 44));
    *((_QWORD *)this + 44) = 0LL;
  }
  v14 = *((_QWORD *)this + 45);
  if ( v14 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 16LL))(*((_QWORD *)this + 45));
    *((_QWORD *)this + 45) = 0LL;
  }
LABEL_18:
  if ( v15 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v15 + 16LL))(v15);
  result = v7;
  *(_WORD *)((char *)this + 5965) = 257;
  return result;
}
