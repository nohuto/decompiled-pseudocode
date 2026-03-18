/*
 * XREFs of CiProcessLocate @ 0x1C000AB10
 * Callers:
 *     CiThreadCreate @ 0x1C000A890 (CiThreadCreate.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000B620 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     CiProcessComparer @ 0x1C000ABB0 (CiProcessComparer.c)
 *     CiSystemAcquirePushLock @ 0x1C000B5F0 (CiSystemAcquirePushLock.c)
 */

_QWORD *__fastcall CiProcessLocate(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // r8
  _QWORD *v4; // rbx
  int v5; // eax

  v2 = 0LL;
  CiSystemAcquirePushLock(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  v4 = (_QWORD *)WPP_MAIN_CB.DeviceQueue.1;
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
    goto LABEL_6;
  while ( 1 )
  {
    v5 = CiProcessComparer(a1, v4, v3);
    if ( v5 >= 0 )
      break;
    v4 = (_QWORD *)*v4;
LABEL_8:
    if ( !v4 )
      goto LABEL_6;
  }
  if ( v5 > 0 )
  {
    v4 = (_QWORD *)v4[1];
    goto LABEL_8;
  }
  if ( v4 )
  {
    v2 = v4 - 5;
    if ( _InterlockedIncrement64(v4 - 1) <= 1 )
      __fastfail(0xEu);
  }
LABEL_6:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  return v2;
}
