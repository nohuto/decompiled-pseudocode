/*
 * XREFs of ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180152808
 * Callers:
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18012D2E0 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180151D8C (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::SetAdvancedDirectFlipState(
        CCompositionSurfaceInfo *this,
        struct IRenderTargetDisplay *a2,
        struct CRegionWrapper *a3)
{
  unsigned int v6; // ebx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v8; // r14
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this);
  v15 = 0LL;
  v14[0] = 0LL;
  v8 = RenderingRealizationNoRef;
  if ( (**(int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
         RenderingRealizationNoRef,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v15) < 0 )
    goto LABEL_11;
  if ( !*((_QWORD *)this + 16) )
  {
    v9 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, _QWORD *, _QWORD))(*(_QWORD *)v8 + 80LL))(v8, v14, 0LL);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xAAu);
      goto LABEL_11;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IRenderTargetDisplay *, _QWORD))(*(_QWORD *)a2 + 352LL))(a2, v14[0]) )
      goto LABEL_9;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
    v11 = CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer(
            (CCompositionSurfaceInfo *)((char *)this + 48),
            (struct _GUID *)(v10 + 252));
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB4u);
      goto LABEL_11;
    }
  }
  a2 = 0LL;
LABEL_9:
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IRenderTargetDisplay *, struct CRegionWrapper *))(*(_QWORD *)v15 + 24LL))(
          v15,
          *((_QWORD *)this + 16),
          a2,
          a3);
  v6 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xBAu);
LABEL_11:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  return v6;
}
