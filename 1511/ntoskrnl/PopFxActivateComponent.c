/*
 * XREFs of PopFxActivateComponent @ 0x1400DAE60
 * Callers:
 *     PoFxActivateComponent @ 0x1400DADFC (PoFxActivateComponent.c)
 *     PopFxActivateComponentWorker @ 0x1400DAF10 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x14051BB30 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopFxActivateComponentWorker @ 0x1400DAF10 (PopFxActivateComponentWorker.c)
 */

void __fastcall PopFxActivateComponent(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // si
  __int64 *v7; // r9
  int v8; // eax
  KSPIN_LOCK *v9; // rbx
  KIRQL v10; // al
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF

  v5 = a3;
  if ( (*(_DWORD *)(a1 + 616) & 1) == 0 )
  {
    v7 = &v11;
    if ( (a3 & 2) != 0 )
      v7 = 0LL;
    v8 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( v8 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      LOBYTE(a3) = a4;
      PopFxActivateComponentWorker(a1, a2, a3, v7);
    }
    else
    {
      if ( v8 < 0 )
        return;
      if ( (v8 & 0x40000000) != 0 )
      {
        v9 = (KSPIN_LOCK *)(a2 + 128);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KeReleaseSpinLock(v9, v10);
      }
    }
    if ( (v5 & 1) != 0 )
      KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
  }
}
