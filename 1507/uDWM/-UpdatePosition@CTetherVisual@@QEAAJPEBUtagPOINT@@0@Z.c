/*
 * XREFs of ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800871CC
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18007FDA8 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180080A2C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x180086DBC (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::UpdatePosition(
        struct tagPOINT *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  unsigned int v3; // ebx
  int updated; // eax

  v3 = 0;
  if ( a3 )
    this[36] = *a3;
  if ( a2 )
    this[35] = *a2;
  if ( a3 || a2 )
  {
    updated = CTetherVisual::UpdateInstructions((CTetherVisual *)this);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x6Au);
  }
  return v3;
}
