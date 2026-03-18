/*
 * XREFs of ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180093490
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180037D5C (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180093308 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::ProcessUpdate(
        CCompositionSurfaceBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSURFACEBITMAP *a3)
{
  void *v3; // rdi
  struct CCompositionSurfaceInfo *v4; // rbx
  int v7; // eax
  int v8; // edi
  int updated; // eax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
  struct CCompositionSurfaceInfo *v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0LL;
  v13 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Start);
  if ( v3 )
  {
    v7 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
           (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 16LL),
           v3,
           &v13);
    v12 = v7;
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x316u);
      v4 = v13;
      goto LABEL_8;
    }
    v4 = v13;
  }
  updated = CCompositionSurfaceBitmap::UpdateSurfaceInfo(this, v4);
  v12 = updated;
  v8 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x31Cu);
  }
  else
  {
    *((_BYTE *)this + 574) = *((_DWORD *)a3 + 4) != 0;
    *((_BYTE *)this + 575) = *((_DWORD *)a3 + 5) != 0;
  }
LABEL_8:
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  TranslateDXGIorD3DErrorInContext(v8, 12, (int *)&v12);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v10, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Stop);
  return v12;
}
