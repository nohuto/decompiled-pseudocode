/*
 * XREFs of ?ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z @ 0x1800375E0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180005CD0 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x180037C9C (-GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_.c)
 *     ?GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x180037CD8 (-GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180099454 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CSurfaceManager::ProcessSurfaceUpdates(CSurfaceManager *this, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // r14d
  CSurfaceManager *v5; // r15
  int SurfaceUpdates; // ebx
  unsigned int i; // edi
  __int64 v8; // rcx
  __int64 v10; // rsi
  CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  int v12; // eax
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v13 = 0;
  v2 = 0;
  v14 = 0;
  v3 = 0;
  v5 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start);
  while ( 1 )
  {
    SurfaceUpdates = CCompositionSurfaceManager::GetSurfaceUpdates(this, a2, &v13, &v14);
    if ( SurfaceUpdates < 0 )
      break;
    for ( i = 0; i < v13; ++i )
    {
      v10 = *((_QWORD *)v5 + 81) + 200LL * i;
      CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(
                                       (CSurfaceManager *)((char *)v5 + 16),
                                       *(struct _LUID *)(v10 + 4));
      if ( CompositionSurfaceInfoByLuid )
      {
        v12 = CCompositionSurfaceInfo::ProcessSurfaceUpdate(
                CompositionSurfaceInfoByLuid,
                (const struct CSM_SURFACE_UPDATE *)v10);
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD0u);
        ++v3;
      }
      this = *(CSurfaceManager **)(v10 + 32);
      if ( (unsigned __int64)this >= 2 )
        DeleteObject(this);
    }
    if ( !v14 )
      break;
    ++v2;
  }
  CCompositionSurfaceManager::ProcessRestoreContent((CSurfaceManager *)((char *)v5 + 16), 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v8, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop, v3, v2);
  return (unsigned int)SurfaceUpdates;
}
