/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x14053A684
 * Callers:
 *     IopDestroyActiveConnectBlock @ 0x14053A4D8 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x14053A5C0 (IopInitializeActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x14053A6EC (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14053A708 (IopAcquireActiveConnectLock.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
{
  struct _KEVENT *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

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
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  }
}
