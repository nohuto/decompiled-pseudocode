/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A4B4C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180051D40 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A47D4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     Template_px @ 0x180145870 (Template_px.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  int updated; // eax
  char *v6; // rbx
  unsigned int v7; // esi
  CVisual *Visual; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v6 = 0LL;
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x14Cu);
  }
  else
  {
    Visual = CInteraction::GetVisual(this);
    if ( Visual )
      CVisual::OnInputSinkChange(Visual);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      if ( this )
        v6 = (char *)this + 8;
      Template_px(v10, v9, v6, a3[1]);
    }
  }
  return v7;
}
