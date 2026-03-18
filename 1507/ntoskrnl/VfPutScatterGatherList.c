/*
 * XREFs of VfPutScatterGatherList @ 0x14073CCCC
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14073A278 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14073A430 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x14073A528 (VF_ASSERT_IRQL.c)
 *     VF_UNMARK_SCATTER_GATHER_LIST @ 0x14073A95C (VF_UNMARK_SCATTER_GATHER_LIST.c)
 *     ViFlushDoubleBuffer @ 0x14073DE3C (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 */

void __fastcall VfPutScatterGatherList(__int64 a1, int *a2, char a3)
{
  __int64 RealDmaOperation; // rax
  __int64 v7; // rdx
  __int64 AdapterInformationInternal; // rsi
  __int64 v9; // r8
  _QWORD *v10; // r14
  volatile signed __int32 *v11; // rbx
  unsigned __int8 CurrentIrql; // r12
  _QWORD *i; // rdi
  _QWORD *v14; // rdi
  int v15; // r14d
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  void (__fastcall *v20)(__int64, int *, __int64); // [rsp+78h] [rbp+20h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 96LL);
  LOBYTE(v7) = 1;
  v20 = (void (__fastcall *)(__int64, int *, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v7);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v10 = (_QWORD *)(AdapterInformationInternal + 56), (_QWORD *)*v10 == v10) )
  {
LABEL_22:
    LOBYTE(v9) = a3;
    v20(a1, a2, v9);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  else
  {
    v11 = (volatile signed __int32 *)(AdapterInformationInternal + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(AdapterInformationInternal + 72));
    }
    else if ( _interlockedbittestandset64(v11, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(AdapterInformationInternal + 72));
    }
    for ( i = (_QWORD *)*v10; ; i = (_QWORD *)v14[9] )
    {
      v14 = i - 9;
      if ( v10 == v14 + 9 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(AdapterInformationInternal + 72), retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
        __writecr8(CurrentIrql);
        goto LABEL_22;
      }
      if ( (int *)v14[8] == a2 )
        break;
    }
    v15 = *a2;
    v16 = v14[9];
    v17 = (_QWORD *)v14[10];
    if ( *(_QWORD **)(v16 + 8) != v14 + 9 || (_QWORD *)*v17 != v14 + 9 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(AdapterInformationInternal + 72), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    __writecr8(CurrentIrql);
    VF_UNMARK_SCATTER_GATHER_LIST((__int64)a2, v14[12]);
    LOBYTE(v18) = a3;
    v20(a1, a2, v18);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v15);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v14[12], v14[2], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v14);
  }
}
