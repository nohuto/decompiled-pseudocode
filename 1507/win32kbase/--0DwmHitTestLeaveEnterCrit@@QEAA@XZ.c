/*
 * XREFs of ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00039A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 */

DwmHitTestLeaveEnterCrit *__fastcall DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit(DwmHitTestLeaveEnterCrit *this)
{
  gbDITInHitTest = 1;
  UserSessionSwitchLeaveCrit();
  return this;
}
