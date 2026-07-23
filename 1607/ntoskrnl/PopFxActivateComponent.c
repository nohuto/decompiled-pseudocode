/*
 * XREFs of PopFxActivateComponent @ 0x1401426E4
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400BF4F0 (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x140567268 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopFxActivateComponentWorker @ 0x1400BF4F0 (PopFxActivateComponentWorker.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxActivateComponent(ULONG_PTR a1, __int64 a2, char a3, char a4)
{
  int *v7; // r9
  int v8; // eax
  KSPIN_LOCK *v9; // rbx
  KIRQL v10; // al
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(a1 + 616) & 1) == 0 )
  {
    v7 = (int *)&v11;
    if ( (a3 & 2) != 0 )
      v7 = 0LL;
    v8 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( v8 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      PopFxActivateComponentWorker(a1, a2, a4, v7);
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
    if ( (a3 & 1) != 0 )
      KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
  }
}
