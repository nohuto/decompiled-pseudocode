/*
 * XREFs of ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF624
 * Callers:
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402E4AD0 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 */

void __fastcall DesktopRecalc::xxxEndApplyWindowActionOld(
        DesktopRecalc *this,
        struct tagWND *a2,
        struct CMonitorTopology *a3)
{
  CRecalcProp *RecalcProperty; // rax

  RecalcProperty = CRecalcProp::GetRecalcProperty(this, (__int64)a2);
  if ( RecalcProperty )
    CRecalcProp::xxxEndApplyWindowActionOld(RecalcProperty, this, a2);
}
