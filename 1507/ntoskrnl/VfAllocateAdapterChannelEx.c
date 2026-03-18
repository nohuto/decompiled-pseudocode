/*
 * XREFs of VfAllocateAdapterChannelEx @ 0x14073AB94
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExInterlockedInsertTailList @ 0x140122800 (ExInterlockedInsertTailList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ViIsActiveChannelWcb @ 0x14025A7A8 (ViIsActiveChannelWcb.c)
 *     ADD_MAP_REGISTERS @ 0x14073A048 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14073A150 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x14073A394 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14073A430 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x14073A528 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateAdapterChannelEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        void *a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // r12
  __int64 v12; // rbx
  __int64 AdapterInformationInternal; // rdi
  PVOID v14; // rax
  __int64 v16; // rbp
  void *v17; // rsi
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *); // rax
  unsigned int v19; // ebp
  volatile signed __int32 *v20; // rsi
  unsigned __int8 CurrentIrql; // r15
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v8 = a2;
  LOBYTE(a2) = 1;
  v12 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, a2);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v14 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v12 = (__int64)v14;
    if ( !v14 )
      return 3221225626LL;
    memset(v14, 0, 0x98uLL);
    v16 = a7;
    v17 = a6;
    *(_QWORD *)v12 = a7;
    *(_QWORD *)(v12 + 8) = a6;
    *(_QWORD *)(v12 + 56) = AdapterInformationInternal;
    *(_DWORD *)(v12 + 48) = a4;
    *(_QWORD *)(v12 + 40) = a3;
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = v8;
    if ( a6 )
    {
      v17 = &ViAdapterCallback;
      v16 = v12;
    }
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a4, 1);
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v12 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
  }
  else
  {
    v16 = a7;
    v17 = a6;
  }
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *))ViGetRealDmaOperation(a1, 160LL);
  v19 = RealDmaOperation(a1, v8, a3, a4, a5, v17, v16, a8);
  if ( AdapterInformationInternal && ViIsActiveChannelWcb(AdapterInformationInternal, v12) )
  {
    if ( v19 )
    {
      v20 = (volatile signed __int32 *)(AdapterInformationInternal + 144);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)(AdapterInformationInternal + 144));
      }
      else if ( _interlockedbittestandset64(v20, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(AdapterInformationInternal + 144));
      }
      v22 = *(_QWORD *)(v12 + 72);
      v23 = *(_QWORD **)(v12 + 80);
      if ( *(_QWORD *)(v22 + 8) != v12 + 72 || *v23 != v12 + 72 )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)(AdapterInformationInternal + 144), retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v20, 0LL);
      __writecr8(CurrentIrql);
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a4);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v12);
    }
    else if ( !v17 )
    {
      *(_DWORD *)(v12 + 52) = 1;
      *(_QWORD *)(v12 + 88) = *a8;
    }
  }
  return v19;
}
