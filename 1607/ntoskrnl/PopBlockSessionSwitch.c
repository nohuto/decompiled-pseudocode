/*
 * XREFs of PopBlockSessionSwitch @ 0x14066FE80
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x14020D22C (PoSessionBuiltinPanelState.c)
 *     PopScreenOff @ 0x140670294 (PopScreenOff.c)
 *     PoSessionPowerControl @ 0x140674E4C (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1404D1324 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1404D136C (PopDispatchStateCallout.c)
 */

ULONG __fastcall PopBlockSessionSwitch(char a1, ULONG *a2)
{
  ULONG result; // eax
  ULONG v4; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v5[4]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5[0] = 0;
  v5[3] = 0;
  v6 = 0LL;
  v5[1] = 0;
  v5[2] = 1;
  if ( a1 )
  {
    result = PoBlockConsoleSwitch((__int64)v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v6) = 7;
    return PopDispatchStateCallout(v5, (__int64)&v4);
  }
  return result;
}
