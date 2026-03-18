/*
 * XREFs of ?FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18002F158
 * Callers:
 *     ?QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18002F0E4 (-QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapR.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18002F478 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18006C1C0 (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@AEBUCSM_REA.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006C780 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::FindRealization(
        CCompositionSurfaceInfo *this,
        unsigned __int64 a2,
        struct CBitmapRealization **a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // esi
  unsigned __int64 v6; // rdi
  CCompositionSurfaceInfo *v7; // r9
  CBitmapOfDeviceBitmaps *RealizationNoRef; // rbx
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rcx
  bool v12; // zf
  __int64 (__fastcall *v13)(CBitmapOfDeviceBitmaps *); // rdi
  CCompositionSurfaceInfo::CBindInfo *v15; // rbx
  int v16; // eax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = 0;
  *a3 = 0LL;
  v6 = a2;
  v7 = this;
  if ( *((_QWORD *)this + 7) != v3 )
    goto LABEL_18;
  RealizationNoRef = 0LL;
  v9 = 0LL;
  if ( !*((_DWORD *)this + 26) )
    goto LABEL_11;
  v10 = *((_QWORD *)this + 10);
  while ( 1 )
  {
    v11 = *(_QWORD *)(v10 + 8 * v9);
    a2 = *(unsigned int *)(v11 + 296);
    if ( *(_QWORD *)(v11 + 296) == *(_QWORD *)(v6 + 184) )
    {
      a2 = (unsigned int)(a2 - 1);
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 != 1 || *(_DWORD *)(v11 + 312) != *(_DWORD *)(v6 + 200) )
          goto LABEL_16;
        v12 = *(_DWORD *)(v11 + 316) == *(_DWORD *)(v6 + 204);
      }
      else
      {
        v12 = *(_QWORD *)(v11 + 304) == *(_QWORD *)(v6 + 192);
      }
      if ( v12 )
        break;
    }
LABEL_16:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *((_DWORD *)v7 + 26) )
      goto LABEL_11;
  }
  RealizationNoRef = *(CBitmapOfDeviceBitmaps **)(v10 + 8 * v9);
LABEL_11:
  if ( RealizationNoRef )
  {
LABEL_12:
    v13 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)RealizationNoRef + 8LL);
    if ( v13 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(RealizationNoRef);
    else
      ((void (__fastcall *)(CBitmapOfDeviceBitmaps *, unsigned __int64, __int64, CCompositionSurfaceInfo *))v13)(
        RealizationNoRef,
        a2,
        v9,
        v7);
    *a3 = RealizationNoRef;
    return v4;
  }
LABEL_18:
  v15 = (CCompositionSurfaceInfo *)((char *)v7 + 48);
  v16 = CCompositionSurfaceInfo::CBindInfo::Initialize((CCompositionSurfaceInfo *)((char *)v7 + 48), v3);
  v4 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1ABu);
  }
  else
  {
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                         v15,
                         (const struct CSM_REALIZATION_INFO *)(v6 + 184));
    if ( RealizationNoRef )
      goto LABEL_12;
  }
  return v4;
}
