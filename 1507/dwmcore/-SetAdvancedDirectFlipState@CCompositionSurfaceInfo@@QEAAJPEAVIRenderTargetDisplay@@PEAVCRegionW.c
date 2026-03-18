/*
 * XREFs of ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180119594
 * Callers:
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18000643C (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureRestoreBuffer@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1801194E0 (-EnsureRestoreBuffer@CCompositionSurfaceInfo@@AEAAJXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::SetAdvancedDirectFlipState(
        CCompositionSurfaceInfo *this,
        struct IRenderTargetDisplay *a2,
        struct CRegionWrapper *a3)
{
  unsigned int v6; // edi
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v8; // r14
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this);
  v14 = 0LL;
  v8 = RenderingRealizationNoRef;
  v13[0] = 0LL;
  if ( (**(int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
         RenderingRealizationNoRef,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v14) < 0 )
    goto LABEL_11;
  if ( !*((_QWORD *)this + 17) )
  {
    v9 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, _QWORD *, _QWORD))(*(_QWORD *)v8 + 80LL))(v8, v13, 0LL);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x105u);
      goto LABEL_11;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IRenderTargetDisplay *, _QWORD))(*(_QWORD *)a2 + 328LL))(a2, v13[0]) )
      goto LABEL_9;
    v10 = CCompositionSurfaceInfo::EnsureRestoreBuffer(this);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x10Fu);
      goto LABEL_11;
    }
  }
  a2 = 0LL;
LABEL_9:
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IRenderTargetDisplay *, struct CRegionWrapper *))(*(_QWORD *)v14 + 24LL))(
          v14,
          *((_QWORD *)this + 17),
          a2,
          a3);
  v6 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x115u);
LABEL_11:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  return v6;
}
