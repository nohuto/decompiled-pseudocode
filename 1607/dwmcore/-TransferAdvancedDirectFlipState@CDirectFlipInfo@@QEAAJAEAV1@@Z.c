/*
 * XREFs of ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18012D2E0
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180152808 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 */

__int64 __fastcall CDirectFlipInfo::TransferAdvancedDirectFlipState(CDirectFlipInfo *this, struct CDirectFlipInfo *a2)
{
  char v2; // al
  unsigned int v3; // ebx
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD); // rcx
  int v8; // eax
  int v9; // eax
  struct IRenderTargetDisplay *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_BYTE *)a2 + 40);
  v3 = 0;
  v11 = 0LL;
  *((_BYTE *)this + 40) = v2;
  if ( v2 )
  {
    v6 = *((_QWORD *)this + 6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *((_QWORD *)this + 6) = *((_QWORD *)a2 + 6);
    v7 = (void (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 6);
    if ( v7 )
      (**v7)(v7);
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRenderTargetDisplay **))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v11);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1B7u);
    }
    else
    {
      v9 = CCompositionSurfaceInfo::SetAdvancedDirectFlipState(
             *((CCompositionSurfaceInfo **)this + 4),
             v11,
             *((struct CRegionWrapper **)this + 6));
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1B9u);
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v3;
}
