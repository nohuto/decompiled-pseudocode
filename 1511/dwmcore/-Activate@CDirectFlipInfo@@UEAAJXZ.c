/*
 * XREFs of ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180007060
 * Callers:
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180006A30 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180006C10 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180006CF8 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180006E44 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@@Z @ 0x18000A760 (-SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  __int64 v1; // rdi
  int CurrentDXGIResource; // eax
  unsigned int v4; // edi
  bool v5; // dl
  __int64 (__fastcall *v6)(CHwFullScreenRenderTarget *__hidden, struct IDXGIResource *); // rdi
  int v7; // eax
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-28h]
  struct IDXGIResource *v11; // [rsp+50h] [rbp+8h] BYREF
  CHwFullScreenRenderTarget *v12; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v13; // [rsp+60h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 2);
  v12 = 0LL;
  v11 = 0LL;
  CurrentDXGIResource = (*(__int64 (__fastcall **)(__int64, struct _LUID *, _QWORD))(*(_QWORD *)v1 + 104LL))(
                          v1,
                          &v13,
                          0LL);
  v4 = CurrentDXGIResource;
  if ( CurrentDXGIResource < 0 )
  {
    v10 = 296;
    goto LABEL_25;
  }
  if ( *((_DWORD *)this + 14) != 4 )
  {
    CurrentDXGIResource = CDirectFlipInfo::CheckIndependentFlipSupport(this, (bool *)this + 77);
    v4 = CurrentDXGIResource;
    if ( CurrentDXGIResource < 0 )
    {
      v10 = 300;
LABEL_25:
      v9 = CurrentDXGIResource;
      goto LABEL_28;
    }
  }
  CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 4));
  v5 = !*((_BYTE *)this + 40) && *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) != -1;
  CurrentDXGIResource = CDirectFlipInfo::EnsureIndependentFlipState(this, v5, 0);
  v4 = CurrentDXGIResource;
  if ( CurrentDXGIResource < 0 )
  {
    v10 = 317;
    goto LABEL_25;
  }
  CurrentDXGIResource = CDirectFlipInfo::GetCurrentDXGIResource((CCompositionSurfaceInfo **)this, v13, &v11);
  v4 = CurrentDXGIResource;
  if ( CurrentDXGIResource < 0 )
  {
    v10 = 319;
    goto LABEL_25;
  }
  CurrentDXGIResource = (***((__int64 (__fastcall ****)(_QWORD, GUID *, CHwFullScreenRenderTarget **))this + 2))(
                          *((_QWORD *)this + 2),
                          &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
                          &v12);
  v4 = CurrentDXGIResource;
  if ( CurrentDXGIResource < 0 )
  {
    v10 = 322;
    goto LABEL_25;
  }
  v6 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, struct IDXGIResource *))(*(_QWORD *)v12 + 328LL);
  if ( v6 == CHwFullScreenRenderTarget::SetDirectFlipOverride )
    v7 = CHwFullScreenRenderTarget::SetDirectFlipOverride(v12, v11);
  else
    v7 = v6(v12, v11);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *((_DWORD *)this + 14) = 4;
    goto LABEL_13;
  }
  v10 = 324;
  v9 = v7;
LABEL_28:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v10);
LABEL_13:
  if ( v12 )
    (*(void (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    ((void (__fastcall *)(struct IDXGIResource *))v11->lpVtbl->Release)(v11);
  return v4;
}
