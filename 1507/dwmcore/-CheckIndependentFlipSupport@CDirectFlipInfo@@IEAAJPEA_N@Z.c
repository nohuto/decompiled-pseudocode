/*
 * XREFs of ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180006244
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x1800066B0 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x180003550 (-IsStereoContent@CBitmapRealization@@UEBA_NXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::CheckIndependentFlipSupport(CDirectFlipInfo *this, bool *a2)
{
  unsigned int v2; // edi
  bool v3; // al
  int v6; // eax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-28h]
  bool v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  v12 = 0LL;
  v11 = 0;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_7;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
         *((_QWORD *)this + 2),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v12);
  v2 = v6;
  if ( v6 < 0 )
  {
    v10 = 588;
LABEL_13:
    v9 = v6;
    goto LABEL_15;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, bool *))(*(_QWORD *)v12 + 400LL))(v12, &v11);
  v2 = v6;
  if ( v6 < 0 )
  {
    v10 = 590;
    goto LABEL_13;
  }
  v3 = v11;
  if ( !v11 )
  {
LABEL_7:
    *a2 = v3;
    goto LABEL_8;
  }
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                    + 4));
  if ( RenderingRealizationNoRef )
  {
    v3 = !CBitmapRealization::IsStereoContent((struct CBitmapRealization *)((char *)RenderingRealizationNoRef + 112));
    v11 = v3;
    goto LABEL_7;
  }
  v2 = -2147467259;
  v10 = 602;
  v9 = -2147467259;
LABEL_15:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v10);
LABEL_8:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v2;
}
