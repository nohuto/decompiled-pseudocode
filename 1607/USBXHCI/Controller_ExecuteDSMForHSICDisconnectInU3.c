/*
 * XREFs of Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004A01C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003EE0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Controller_ExecuteDSMForHSICDisconnectInU3(__int64 a1, char a2)
{
  bool v2; // zf
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 232) & 0x1000000000000000LL) != 0 )
  {
    v2 = a2 == 0;
    v3 = 5LL;
    if ( v2 )
      v3 = 6LL;
    return Controller_ExecuteDSM(a1, v3);
  }
  return result;
}
