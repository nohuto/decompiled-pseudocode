/*
 * XREFs of ?RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ @ 0x18013B81C
 * Callers:
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18013B570 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?SetExclusiveMode@CAnalogCompositorClient@@QEAAX_N@Z @ 0x18013B958 (-SetExclusiveMode@CAnalogCompositorClient@@QEAAX_N@Z.c)
 */

bool __fastcall CAnalogExclusiveView::RegisterSurfaceHandles(CAnalogExclusiveView *this)
{
  __int64 v1; // rbp
  __int64 v3; // r14
  __int64 v4; // r12
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  char v6; // al
  __int64 v7; // r9
  CAnalogCompositorClient *v8; // rcx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
    v1 = *(_QWORD *)(v1 + 440);
  if ( v1 && *(_DWORD *)(v1 + 104) == 2 )
  {
    v3 = 0LL;
    v4 = 0LL;
    do
    {
      if ( (unsigned int)v3 < *(_DWORD *)(v1 + 104) )
        (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v4 + *(_QWORD *)(v1 + 80)) + 88LL))(
          *(_QWORD *)(v4 + *(_QWORD *)(v1 + 80)),
          (char *)this + 8 * v3 + 72);
      v3 = (unsigned int)(v3 + 1);
      v4 += 8LL;
    }
    while ( (unsigned int)v3 < 2 );
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)v1);
    v6 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 14) + 80LL))((__int64)RenderingRealizationNoRef + 112);
    v7 = *(_QWORD *)xmmword_1801A3FB0;
    LOBYTE(v7) = v6;
    if ( (*(int (__fastcall **)(_QWORD, char *, __int64, __int64))(*(_QWORD *)xmmword_1801A3FB0 + 64LL))(
           xmmword_1801A3FB0,
           (char *)this + 72,
           2LL,
           v7) >= 0 )
    {
      *((_BYTE *)this + 57) = 1;
      CAnalogCompositorClient::SetExclusiveMode(v8, 1);
    }
  }
  return *((_BYTE *)this + 57);
}
