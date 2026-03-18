/*
 * XREFs of PdcPoBlockSessionSwitch @ 0x1406B73C8
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x14055E220 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PdcPoBlockSessionSwitch(char a1, int *a2)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
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
