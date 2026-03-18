/*
 * XREFs of VfAllocateAdapterChannel @ 0x14073A974
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
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateAdapterChannel(__int64 a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  char *v9; // rdi
  __int64 RealDmaOperation; // rax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, void *, __int64); // r13
  __int64 AdapterInformationInternal; // rbx
  char *v14; // rax
  bool v16; // zf
  __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // ebp
  volatile signed __int32 *v20; // rsi
  unsigned __int8 CurrentIrql; // r15
  char **v22; // rdx
  void **v23; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v9 = 0LL;
  RealDmaOperation = ViGetRealDmaOperation(a1, 32LL);
  LOBYTE(v11) = 1;
  v12 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, void *, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v11);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v14 = (char *)ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v9 = v14;
    if ( !v14 )
      return 3221225626LL;
    memset(v14, 0, 0x98uLL);
    v16 = ViDoubleBufferDma == 0;
    *(_QWORD *)v9 = a5;
    *((_QWORD *)v9 + 1) = a4;
    *((_QWORD *)v9 + 7) = AdapterInformationInternal;
    *((_DWORD *)v9 + 12) = a3;
    if ( !v16 && !*(_BYTE *)(AdapterInformationInternal + 33) && *(_DWORD *)(AdapterInformationInternal + 192) < 3u )
      *((_QWORD *)v9 + 12) = ViAllocateMapRegisterFile(AdapterInformationInternal, a3);
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = a2;
    a4 = &ViAdapterCallback;
    v17 = (__int64)v9;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a3, 0);
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v9 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
  }
  else
  {
    v17 = a5;
  }
  v18 = v12(a1, a2, a3, a4, v17);
  v19 = v18;
  if ( AdapterInformationInternal && v18 && ViIsActiveChannelWcb(AdapterInformationInternal, (__int64)v9) )
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
    v22 = (char **)*((_QWORD *)v9 + 9);
    v23 = (void **)*((_QWORD *)v9 + 10);
    if ( v22[1] != v9 + 72 || *v23 != v9 + 72 )
      __fastfail(3u);
    *v23 = v22;
    v22[1] = (char *)v23;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(AdapterInformationInternal + 144), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v20, 0LL);
    __writecr8(CurrentIrql);
    DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a3);
    if ( *((_QWORD *)v9 + 12) )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v9);
  }
  return v19;
}
