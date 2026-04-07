/*
 * XREFs of ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x180088BA4
 * Callers:
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18006FD10 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180087808 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x180088AC8 (-OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x180088C00 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x180088C6C (-_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::UpdateInstructions(CTextTetherVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int updated; // eax

  v2 = CVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    updated = CTextTetherVisual::_UpdateHandleInstructions(this);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xACu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0xABu);
  }
  return v3;
}
