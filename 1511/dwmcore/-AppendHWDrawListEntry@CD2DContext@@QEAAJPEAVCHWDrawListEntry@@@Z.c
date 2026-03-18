/*
 * XREFs of ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA640
 * Callers:
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800FA918 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@Mil.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180020670 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800209A0 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800F9FBC (-AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 */

__int64 __fastcall CD2DContext::AppendHWDrawListEntry(
        struct ID2D1PrivateCompositorRenderer **this,
        struct CHWDrawListEntry *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int appended; // eax

  if ( this[42] )
    CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  v4 = CD2DContext::EnsureHwCallbackRenderer((CD2DContext *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    appended = CHWCallbackRenderer::AppendDrawListPrimitive(this[37], a2);
    v5 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x207u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x203u);
  }
  return v5;
}
