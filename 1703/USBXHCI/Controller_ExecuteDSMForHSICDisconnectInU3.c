/*
 * XREFs of Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004C008
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Controller_ExecuteDSMForHSICDisconnectInU3(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 232) & 0x1000000000000000LL) != 0 )
  {
    v2 = 5LL;
    if ( !a2 )
      v2 = 6LL;
    return Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, v2);
  }
  return result;
}
