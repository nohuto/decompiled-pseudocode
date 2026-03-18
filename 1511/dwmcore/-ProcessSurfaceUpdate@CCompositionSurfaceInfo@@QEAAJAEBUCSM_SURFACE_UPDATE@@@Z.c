/*
 * XREFs of ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18002F478
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800ADEF0 (-ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x18013B60C (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18002EB80 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18002F158 (-FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18006C85C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180083380 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_nxxxqqxqqqqqqqqx @ 0x180130620 (Template_nxxxqqxqqqqqqqqx.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ProcessSurfaceUpdate(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  unsigned int v2; // ebp
  int Realization; // eax
  struct CBitmapRealization *v6; // rsi
  unsigned int (__fastcall *v7)(CBitmapRealization *__hidden); // rbx
  struct CBitmapRealization *v9; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_nxxxqqxqqqqqqqqx(
      (_DWORD)this,
      (_DWORD)a2,
      *((_DWORD *)a2 + 63),
      (_DWORD)a2,
      *((_QWORD *)a2 + 1),
      *((_DWORD *)a2 + 63));
  if ( *((_QWORD *)this + 7) != *((_QWORD *)a2 + 1) )
  {
    CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
    CCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL, 1);
  }
  if ( *((_QWORD *)a2 + 1) )
  {
    Realization = CCompositionSurfaceInfo::FindRealization(this, (unsigned __int64)a2, &v9);
    v6 = v9;
    v2 = Realization;
    if ( Realization < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Realization, 0xA6u);
    }
    else
    {
      *((_DWORD *)this + 18) = *((_DWORD *)a2 + 63);
      *((_DWORD *)this + 19) = *((_DWORD *)a2 + 64);
      CCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        v6,
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 16),
        *((HRGN *)a2 + 27),
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 224),
        0);
    }
    if ( v6 )
    {
      v7 = *(unsigned int (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v6 + 16LL);
      if ( v7 == CBitmapRealization::Release )
        CBitmapRealization::Release(v6);
      else
        v7(v6);
    }
  }
  return v2;
}
