/*
 * XREFs of NtUserGetIMEShowStatus @ 0x1402006D0
 * Callers:
 *     <none>
 * Callees:
 *     _GetIMEShowStatus @ 0x14020070C (_GetIMEShowStatus.c)
 */

__int64 NtUserGetIMEShowStatus()
{
  __int64 IMEShowStatus; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  IMEShowStatus = (int)GetIMEShowStatus();
  UserSessionSwitchLeaveCrit(v1);
  return IMEShowStatus;
}
