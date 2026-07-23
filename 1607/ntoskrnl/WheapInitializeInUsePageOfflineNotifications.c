/*
 * XREFs of WheapInitializeInUsePageOfflineNotifications @ 0x140579E88
 * Callers:
 *     WheaInitializeServices @ 0x1407B7BF0 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

__int64 *WheapInitializeInUsePageOfflineNotifications()
{
  __int64 *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  WheapInUsePageOfflineNotifyLock = 0LL;
  result = &WheapInUsePageOfflineNotifyList;
  qword_1403415F8 = (__int64)&WheapInUsePageOfflineNotifyList;
  WheapInUsePageOfflineNotifyList = (__int64)&WheapInUsePageOfflineNotifyList;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  WheapInUsePageOfflineNotifyInit = 1;
  return result;
}
