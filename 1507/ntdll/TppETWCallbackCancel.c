/*
 * XREFs of TppETWCallbackCancel @ 0x1800F5D10
 * Callers:
 *     TpWaitForIoCompletion @ 0x1800773F0 (TpWaitForIoCompletion.c)
 *     TppWorkWait @ 0x18007D640 (TppWorkWait.c)
 *     TppWorkCancelPendingCallbacks @ 0x18007DF30 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x1800F5590 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWCallbackCancel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _WORD v7[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+40h] [rbp-48h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]

  v12 = a5;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v7[3] = 7204;
  v8 = a1;
  v13 = a6;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x403u, 0x2Cu, v7);
}
