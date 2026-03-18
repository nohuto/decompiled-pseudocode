/*
 * XREFs of CiProcessLocate @ 0x1C000AAA0
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000A030 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000A830 (CiThreadCreate.c)
 * Callees:
 *     CiProcessComparer @ 0x1C000A170 (CiProcessComparer.c)
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 */

_QWORD *__fastcall CiProcessLocate(unsigned __int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  int v4; // eax

  v2 = 0LL;
  CiSystemAcquirePushLock(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  v3 = (_QWORD *)WPP_MAIN_CB.DeviceQueue.1;
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
    goto LABEL_6;
  while ( 1 )
  {
    v4 = CiProcessComparer(a1, (__int64)v3);
    if ( v4 >= 0 )
      break;
    v3 = (_QWORD *)*v3;
LABEL_8:
    if ( !v3 )
      goto LABEL_6;
  }
  if ( v4 > 0 )
  {
    v3 = (_QWORD *)v3[1];
    goto LABEL_8;
  }
  if ( v3 )
  {
    v2 = v3 - 5;
    if ( _InterlockedIncrement64(v3 - 1) <= 1 )
      __fastfail(0xEu);
  }
LABEL_6:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  return v2;
}
