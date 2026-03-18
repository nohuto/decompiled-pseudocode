/*
 * XREFs of VfFreeAdapterObject @ 0x14073BA44
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14073A150 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14073A430 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFreeAdapterObject(__int64 a1, unsigned int a2)
{
  __int64 RealDmaOperation; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, _QWORD); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 result; // rax
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 i; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 216LL);
  LOBYTE(v5) = 1;
  v6 = (__int64 (__fastcall *)(__int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v5);
  result = v6(a1, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v9 = (volatile signed __int32 *)(AdapterInformationInternal + 144);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(AdapterInformationInternal + 144));
    }
    else if ( _interlockedbittestandset64(v9, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(AdapterInformationInternal + 144));
    }
    for ( i = *(_QWORD *)(AdapterInformationInternal + 128); ; i = *(_QWORD *)(v12 + 72) )
    {
      v12 = i - 72;
      if ( AdapterInformationInternal + 128 == v12 + 72 )
        break;
      if ( *(_DWORD *)(v12 + 52) == 1 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        if ( a2 == 3 )
        {
          *(_DWORD *)(v12 + 52) = 3;
        }
        else
        {
          v13 = *(_QWORD *)(v12 + 72);
          v14 = *(_QWORD **)(v12 + 80);
          if ( *(_QWORD *)(v13 + 8) != v12 + 72 || *v14 != v12 + 72 )
            __fastfail(3u);
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v12 + 48));
          if ( *(_QWORD *)(v12 + 96) )
            ViFreeMapRegisterFile(AdapterInformationInternal);
          ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v12);
        }
        break;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(AdapterInformationInternal + 144), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
