/*
 * XREFs of Template_q @ 0x180029FA4
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180017550 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800846C0 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

ULONG __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  v4.Ptr = (ULONGLONG)&v5;
  v4.Reserved = 0;
  v4.Size = 4;
  return EventWrite(Microsoft_Windows_AudioHandle, a2, 1u, &v4);
}
