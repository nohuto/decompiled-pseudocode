/*
 * XREFs of PopHaltDeviceIdle @ 0x140119EC0
 * Callers:
 *     PoInitializeBroadcast @ 0x1404F6AFC (PoInitializeBroadcast.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

void PopHaltDeviceIdle()
{
  __int16 *v0; // rbx
  KIRQL v1; // al
  __int16 v2; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+32h] [rbp-26h]
  int v4; // [rsp+34h] [rbp-24h]
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF

  v0 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140305B6C = 1;
  if ( dword_140305B68 )
  {
    v4 = 0;
    v5[1] = v5;
    v2 = 1;
    v5[0] = v5;
    v0 = &v2;
    v3 = 6;
    PopDeviceIdleSync = (PRKEVENT)&v2;
  }
  KeReleaseSpinLock(&PopDopeGlobalLock, v1);
  if ( v0 )
    KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
}
