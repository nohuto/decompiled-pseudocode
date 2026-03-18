/*
 * XREFs of UsbhWaitForResetTimeout @ 0x1C00276B4
 * Callers:
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000C760 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 */

void __fastcall UsbhWaitForResetTimeout(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // eax
  int v6; // r10d
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  Log(*(_QWORD *)(a2 + 16), 4, 1666667569, 0LL, *(unsigned __int16 *)(a2 + 4));
  v5 = UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 768), 5000, 1667323697, (unsigned int)v4 & v7, v4 & v8);
  Log(*(_QWORD *)(a2 + 16), 4, 1666667570, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v6 == 258 )
    Log((__int64)a1, 4, 1953448769, *(unsigned __int16 *)(a2 + 4), a2);
}
