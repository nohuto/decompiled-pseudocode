/*
 * XREFs of IopDestroyActiveConnectBlock @ 0x14057D290
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14057D4A0 (IopAcquireReleaseConnectLockInternal.c)
 */

void __fastcall IopDestroyActiveConnectBlock(volatile signed __int32 *a1)
{
  __int64 v2; // rbp
  volatile signed __int32 *v3; // rsi
  __int64 v4; // rdx
  struct _KEVENT *v5; // rdi
  char v6; // r14
  signed __int32 v7; // eax
  __int64 v8; // rcx
  volatile signed __int32 **v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  if ( *((_QWORD *)a1 + 3) )
  {
    v2 = *((_QWORD *)a1 + 4);
    v3 = a1 + 16;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    LOBYTE(v4) = 1;
    v5 = 0LL;
    v6 = 0;
    IopAcquireReleaseConnectLockInternal(0LL, v4, 2LL);
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
        v5 = *(struct _KEVENT **)(v2 + 8);
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
    else if ( v5 )
    {
      KeSetEvent(v5, 0, 0);
    }
    v11 = KeGetCurrentThread();
    v12 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
      && !v11->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
