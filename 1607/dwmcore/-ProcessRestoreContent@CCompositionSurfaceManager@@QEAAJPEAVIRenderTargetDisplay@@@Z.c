/*
 * XREFs of ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180005CD0
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z @ 0x1800375E0 (-ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z.c)
 * Callees:
 *     ?ProcessRestoreContent@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180005DB0 (-ProcessRestoreContent@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

CCompositionSurfaceInfo **__fastcall CCompositionSurfaceManager::ProcessRestoreContent(
        CCompositionSurfaceManager *this,
        struct IRenderTargetDisplay *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rdi
  CCompositionSurfaceInfo **result; // rax
  int v5; // eax
  unsigned int v6; // ebx
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  RestartKey = 0LL;
  result = (CCompositionSurfaceInfo **)RtlEnumerateGenericTableWithoutSplaying(
                                         (PRTL_GENERIC_TABLE)((char *)this + 8),
                                         &RestartKey);
  if ( result )
  {
    while ( 1 )
    {
      v5 = CCompositionSurfaceInfo::ProcessRestoreContent(result[1], a2);
      v6 = v5;
      if ( v5 < 0 )
        break;
      result = (CCompositionSurfaceInfo **)RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
      if ( !result )
        return (CCompositionSurfaceInfo **)v6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xBDu);
    return (CCompositionSurfaceInfo **)v6;
  }
  return result;
}
