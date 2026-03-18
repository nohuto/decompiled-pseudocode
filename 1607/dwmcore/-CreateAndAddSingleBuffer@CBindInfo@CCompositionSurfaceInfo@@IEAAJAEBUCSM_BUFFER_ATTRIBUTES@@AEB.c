/*
 * XREFs of ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x180151C84
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180099AE4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x180099634 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSingleBuffer(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SINGLE_BUFFER_INFO *a3)
{
  int v4; // eax
  struct CBitmapRealization *v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  struct CBitmapRealization *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(this, a2, a3, &v9);
  v5 = v9;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, v4, 0x524u);
  }
  else
  {
    v7 = CCompositionSurfaceInfo::CBindInfo::AddRealization((CCompositionSurfaceInfo::CBindInfo *)this, v9);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, v7, 0x529u);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
