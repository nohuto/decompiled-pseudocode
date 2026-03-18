/*
 * XREFs of PopFxActivateComponent @ 0x1400276B4
 * Callers:
 *     PoFxActivateComponent @ 0x140027650 (PoFxActivateComponent.c)
 *     PopFxActivateComponentWorker @ 0x14002775C (PopFxActivateComponentWorker.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     PopFxActivateComponentWorker @ 0x14002775C (PopFxActivateComponentWorker.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

NTSTATUS __fastcall PopFxActivateComponent(__int64 a1, volatile signed __int32 *a2, __int64 a3, char a4)
{
  NTSTATUS result; // eax
  char v6; // si
  __int64 *v8; // r9
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  result = *(_DWORD *)(a1 + 616);
  v6 = a3;
  if ( (result & 1) == 0 )
  {
    v8 = &v11;
    if ( (a3 & 2) != 0 )
      v8 = 0LL;
    result = _InterlockedIncrement(a2 + 22);
    if ( result == 1 )
    {
      _InterlockedIncrement(a2 + 22);
      LOBYTE(a3) = a4;
      result = PopFxActivateComponentWorker(a1, a2, a3, v8);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( (result & 0x40000000) != 0 )
      {
        v9 = a2 + 32;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(a2 + 32);
        }
        else if ( _interlockedbittestandset64(v9, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(a2 + 32);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(a2 + 32, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
    if ( (v6 & 1) != 0 )
      return KeWaitForSingleObject((PVOID)(a2 + 26), Executive, 0, 0, 0LL);
  }
  return result;
}
