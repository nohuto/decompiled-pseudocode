/*
 * XREFs of ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDEAC
 * Callers:
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilComp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DD4A0 (-AppendDrawListPrimitive@CHWCallbackRenderer@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800DDA8C (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 */

__int64 __fastcall CD2DContext::AppendHWDrawListEntry(CHWCallbackRenderer **this, struct CHWDrawListEntry *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int appended; // eax

  if ( this[44] )
    CD2DContext::FlushDrawList((CD2DContext *)this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  v4 = CD2DContext::EnsureHwCallbackRenderer((CD2DContext *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    appended = CHWCallbackRenderer::AppendDrawListPrimitive(this[39], a2);
    v5 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x1F6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1F2u);
  }
  return v5;
}
