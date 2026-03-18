/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18015D388
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x18015D230 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBU.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct _LUID a4,
        struct CBitmapRealization **a5)
{
  CDxHandleAdvancedDirectFlipBitmapRealization *v8; // rax
  CDxHandleAdvancedDirectFlipBitmapRealization *v9; // rdi
  int v10; // esi
  int v11; // eax

  *a5 = 0LL;
  v8 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                         WPF::g_pProcessHeap,
                                                         520LL);
  if ( v8 )
    v9 = CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(v8, a1, a2, a3, a4);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(CDxHandleAdvancedDirectFlipBitmapRealization *))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = (*(__int64 (__fastcall **)(CDxHandleAdvancedDirectFlipBitmapRealization *))(*(_QWORD *)v9 + 112LL))(v9);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *a5 = v9;
      v9 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x25u);
    }
    if ( v10 < 0 )
    {
      if ( !v9 )
        return (unsigned int)v10;
      *((_QWORD *)v9 + 38) = 0LL;
    }
    if ( v9 )
      (*(void (__fastcall **)(CDxHandleAdvancedDirectFlipBitmapRealization *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22u);
  }
  return (unsigned int)v10;
}
