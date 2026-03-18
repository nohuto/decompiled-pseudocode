/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x1405038C4
 * Callers:
 *     IopDestroyActiveConnectBlock @ 0x1405036E8 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x1405037D4 (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x1405037E8 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x1405037FC (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

NTSTATUS __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
{
  struct _KEVENT *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a3 & 1) != 0 )
  {
    v3 = (struct _KEVENT *)(a1 + 40);
  }
  else if ( (a3 & 2) != 0 )
  {
    v3 = &ActiveConnectListLock;
  }
  else
  {
    v3 = *(struct _KEVENT **)(a1 + 24);
  }
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v3, 0, 0);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
