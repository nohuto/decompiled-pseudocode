/*
 * XREFs of ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0004940
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 */

DwmHitTestLeaveEnterCrit *__fastcall DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit(DwmHitTestLeaveEnterCrit *this)
{
  gbDITInHitTest = 1;
  UserSessionSwitchLeaveCrit();
  return this;
}
