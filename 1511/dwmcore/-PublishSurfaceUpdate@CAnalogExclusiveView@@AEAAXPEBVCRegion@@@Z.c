/*
 * XREFs of ?PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z @ 0x18013B710
 * Callers:
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18013B570 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CBitmapRealization@@QEBA_NXZ @ 0x18000DBC4 (-IsMonitorSpecificContent@CBitmapRealization@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 */

void __fastcall CAnalogExclusiveView::PublishSurfaceUpdate(CAnalogExclusiveView *this, const struct CRegion *a2)
{
  __int64 v4; // rax
  CCompositionSurfaceInfo *v5; // r14
  struct CBitmapRealization *RenderingRealizationNoRef; // rsi
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  bool v11; // [rsp+30h] [rbp-28h]
  char IsMonitorSpecificContent; // [rsp+31h] [rbp-27h]
  char v13; // [rsp+32h] [rbp-26h]
  bool v14; // [rsp+33h] [rbp-25h]
  bool v15; // [rsp+34h] [rbp-24h]

  if ( g_AnalogCompositor )
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
      v5 = *(CCompositionSurfaceInfo **)(v4 + 440);
    else
      v5 = 0LL;
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v5);
    v10 = *((_DWORD *)this + 13);
    v9 = *((_DWORD *)v5 + 18);
    v11 = *((_DWORD *)RenderingRealizationNoRef + 42) != 0;
    IsMonitorSpecificContent = CBitmapRealization::IsMonitorSpecificContent(RenderingRealizationNoRef);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 112) + 120LL))((__int64)RenderingRealizationNoRef + 112);
    v14 = *((_DWORD *)RenderingRealizationNoRef + 59) != 0;
    v15 = *((_DWORD *)v5 + 19) == -1;
    (*(void (__fastcall **)(struct CBitmapRealization *, __int64 *))(*(_QWORD *)RenderingRealizationNoRef + 88LL))(
      RenderingRealizationNoRef,
      &v8);
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, const struct CRegion *))(*(_QWORD *)xmmword_1801A3FB0 + 40LL))(
        xmmword_1801A3FB0,
        &v8,
        a2);
      *((_BYTE *)this + 59) = 1;
    }
  }
}
