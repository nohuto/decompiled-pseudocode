/*
 * XREFs of ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801301D8
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006C780 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18006C23C (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
        struct _LUID **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SINGLE_BUFFER_INFO *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  struct CBitmapRealization *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(this, 0, a2, a3, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CCompositionSurfaceInfo::CBindInfo::AddRealization((CCompositionSurfaceInfo::CBindInfo *)this, v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180179148, 3u, v6, 0x509u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180179148, 3u, v4, 0x504u);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v8 + 16LL))(v8);
  return v5;
}
