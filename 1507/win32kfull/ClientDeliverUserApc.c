/*
 * XREFs of ClientDeliverUserApc @ 0x1C00FA764
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00E02A8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientDeliverUserApc(__int64 a1, __int64 a2)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(84LL);
  KeUserModeCallback(84LL, 0LL, 0LL, &v4, &v3);
  EtwTraceEndCallback(84LL);
  return EnterCrit(1LL);
}
