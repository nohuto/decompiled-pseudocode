/*
 * XREFs of ?Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18015C2E4
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x18015BE54 (--0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INF.c)
 */

__int64 __fastcall CSectionBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        struct CBitmapRealization **a5)
{
  CSectionBitmapRealization *v9; // rax
  unsigned int v10; // esi
  struct CBitmapRealization *v11; // rdi

  v9 = (CSectionBitmapRealization *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      528LL);
  v10 = 0;
  if ( v9 )
    v11 = CSectionBitmapRealization::CSectionBitmapRealization(v9, a1, a2, a3, a4);
  else
    v11 = 0LL;
  *a5 = v11;
  if ( v11 )
  {
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
  }
  return v10;
}
