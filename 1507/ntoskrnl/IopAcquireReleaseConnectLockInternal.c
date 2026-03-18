/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x14057D4A0
 * Callers:
 *     IopDestroyActiveConnectBlock @ 0x14057D290 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x14057D3B0 (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14057D3C4 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x14057D3D8 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
{
  struct _KEVENT *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax

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
    KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v3, 0, 0);
    v5 = KeGetCurrentThread();
    v6 = v5->KernelApcDisable + 1;
    v5->KernelApcDisable = v6;
    if ( !v6
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
      && !v5->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
