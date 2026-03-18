/*
 * XREFs of IopDestroyActiveConnectBlock @ 0x1405036E8
 * Callers:
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1405038C4 (IopAcquireReleaseConnectLockInternal.c)
 */

void __fastcall IopDestroyActiveConnectBlock(volatile signed __int32 *a1)
{
  __int64 v2; // rbp
  volatile signed __int32 *v3; // rsi
  struct _KEVENT *v4; // rdi
  __int64 v5; // rdx
  char v6; // r14
  signed __int32 v7; // eax
  __int64 v8; // rcx
  volatile signed __int32 **v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  if ( *((_QWORD *)a1 + 3) )
  {
    v2 = *((_QWORD *)a1 + 4);
    v3 = a1 + 16;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = 0LL;
    LOBYTE(v5) = 1;
    v6 = 0;
    IopAcquireReleaseConnectLockInternal(0LL, v5, 2LL);
    v7 = _InterlockedDecrement((volatile signed __int32 *)v2);
    if ( (volatile signed __int32 *)v2 == v3 )
    {
      if ( v7 )
      {
        v6 = 1;
        *((_QWORD *)a1 + 9) = &Event;
      }
    }
    else
    {
      if ( !v7 )
        v4 = *(struct _KEVENT **)(v2 + 8);
      _InterlockedAdd(v3, 0xFFFFFFFF);
    }
    v8 = *(_QWORD *)a1;
    v9 = (volatile signed __int32 **)*((_QWORD *)a1 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1 || *v9 != a1 )
      __fastfail(3u);
    *v9 = (volatile signed __int32 *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    IopAcquireReleaseConnectLockInternal(0LL, 0LL, 2LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( v6 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else if ( v4 )
    {
      KeSetEvent(v4, 0, 0);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
