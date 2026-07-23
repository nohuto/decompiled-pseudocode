/*
 * XREFs of PopHaltDeviceIdle @ 0x140123A38
 * Callers:
 *     PoInitializeBroadcast @ 0x14053253C (PoInitializeBroadcast.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
  byte_140328A8C = 1;
  if ( dword_140328A88 )
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
