/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180005658
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013A80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012E910 (-RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F3C0 (-RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180064170 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18007DC00 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  const struct ID2DContextOwner *v4; // rdx
  CD2DContext *v5; // rcx
  __int64 (__fastcall *v6)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **); // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  struct IRenderTarget *v13; // rcx
  __int64 v14; // rcx
  int updated; // eax
  struct IRenderTarget *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( this )
    v4 = (CDrawingContext *)((char *)this + 128);
  else
    v4 = 0LL;
  v5 = (CD2DContext *)*((_QWORD *)this + 57);
  v6 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v5 + 32LL);
  if ( v6 == CD2DContext::PopTarget )
    v7 = CD2DContext::PopTarget(v5, v4, &v16);
  else
    v7 = v6(v5, v4, &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( g_LockAndReadD2DTarget )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 54) + 176LL))(
        *((_QWORD *)this + 54),
        0LL,
        0LL);
    if ( a2 )
      goto LABEL_9;
    v12 = *((_QWORD *)this + 54);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = v16;
    *((_QWORD *)this + 54) = v16;
    if ( v13 )
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *((_QWORD *)this + 55);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      *((_QWORD *)this + 55) = 0LL;
    }
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 54))(
      *((_QWORD *)this + 54),
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 440);
    updated = CDrawingContext::UpdateRenderTargetState(this);
    v8 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x24CBu);
LABEL_24:
    --*((_DWORD *)this + 234);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x24BAu);
  if ( !a2 )
    goto LABEL_24;
LABEL_9:
  v9 = *((_QWORD *)this + 54);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 54) = 0LL;
  }
  v10 = *((_QWORD *)this + 55);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 55) = 0LL;
  }
LABEL_13:
  if ( v16 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v16 + 16LL))(v16);
  result = v8;
  *((_BYTE *)this + 6529) = 1;
  return result;
}
