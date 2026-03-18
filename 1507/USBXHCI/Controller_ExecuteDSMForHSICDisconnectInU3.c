/*
 * XREFs of Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004E4AC
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Controller_ExecuteDSM @ 0x1C004E268 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_ExecuteDSMForHSICDisconnectInU3(__int64 *a1, char a2)
{
  bool v2; // zf
  int v3; // edx

  if ( (a1[29] & 0x1000000000000000LL) != 0 )
  {
    v2 = a2 == 0;
    v3 = 5;
    if ( v2 )
      v3 = 6;
    Controller_ExecuteDSM(a1, v3);
  }
}
