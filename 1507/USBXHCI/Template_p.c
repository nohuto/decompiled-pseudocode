/*
 * XREFs of Template_p @ 0x1C0016674
 * Callers:
 *     Controller_D0EntryRestoreState @ 0x1C0014854 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0014A64 (Controller_D0ExitSaveState.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 */

NTSTATUS Template_p(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, a2, 0LL, 1u, &v4);
}
