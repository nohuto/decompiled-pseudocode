/*
 * XREFs of IopInterlockedInsertHeadList @ 0x14015E0D0
 * Callers:
 *     IoRegisterLastChanceShutdownNotification @ 0x140590394 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x1405904B8 (IoRegisterShutdownNotification.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopInterlockedInsertHeadList(__int64 *a1, __int64 *a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *a1;
  *a2 = *a1;
  a2[1] = (__int64)a1;
  if ( *(__int64 **)(v5 + 8) != a1 )
    __fastfail(3u);
  *(_QWORD *)(v5 + 8) = a2;
  *a1 = (__int64)a2;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
}
