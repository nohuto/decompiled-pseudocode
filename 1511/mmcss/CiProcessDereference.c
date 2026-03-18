/*
 * XREFs of CiProcessDereference @ 0x1C000B320
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000A030 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000A830 (CiThreadCreate.c)
 *     CiDispatchClose @ 0x1C000B090 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000B1C0 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 */

void __fastcall CiProcessDereference(char *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  char v4; // di
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 v7; // rax

  _m_prefetchw(P + 32);
  v2 = *((_QWORD *)P + 4);
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 4, v2 - 1, v2);
    if ( v3 == v2 )
      return;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  v4 = 0;
  CiSystemAcquirePushLock(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v6 = v5 <= 1;
  v7 = v5 - 1;
  if ( v6 )
  {
    if ( v7 )
      __fastfail(0xEu);
    v4 = 1;
    RtlRbRemoveNode(&WPP_MAIN_CB.DeviceQueue.Busy, P + 40);
  }
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  if ( v4 )
  {
    ObfDereferenceObject(*((PVOID *)P + 10));
    ExFreePoolWithTag(P, 0x5073634Du);
  }
}
