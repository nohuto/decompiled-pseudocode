/*
 * XREFs of VfPutScatterGatherList @ 0x140708310
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140705CB8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140705E70 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140705F68 (VF_ASSERT_IRQL.c)
 *     VF_UNMARK_SCATTER_GATHER_LIST @ 0x1407061C8 (VF_UNMARK_SCATTER_GATHER_LIST.c)
 *     ViFlushDoubleBuffer @ 0x1407092A8 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x140709458 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140709708 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709924 (ViGetRealDmaOperation.c)
 */

void __fastcall VfPutScatterGatherList(__int64 a1, int *a2, char a3)
{
  __int64 RealDmaOperation; // rax
  __int64 v7; // rdx
  void (__fastcall *v8)(__int64, int *, __int64); // r13
  __int64 AdapterInformationInternal; // rdi
  __int64 v10; // r8
  _QWORD *v11; // rsi
  KIRQL v12; // al
  _QWORD *i; // rbx
  _QWORD *v14; // rbx
  int v15; // esi
  __int64 v16; // r8
  _QWORD *v17; // rcx
  __int64 v18; // r8

  RealDmaOperation = ViGetRealDmaOperation(a1, 96LL);
  LOBYTE(v7) = 1;
  v8 = (void (__fastcall *)(__int64, int *, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v7);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v11 = (_QWORD *)(AdapterInformationInternal + 56), (_QWORD *)*v11 == v11) )
  {
LABEL_8:
    LOBYTE(v10) = a3;
    v8(a1, a2, v10);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
    for ( i = (_QWORD *)*v11; ; i = (_QWORD *)v14[9] )
    {
      v14 = i - 9;
      if ( v11 == v14 + 9 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72), v12);
        goto LABEL_8;
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
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72), v12);
    VF_UNMARK_SCATTER_GATHER_LIST((__int64)a2, v14[12]);
    LOBYTE(v18) = a3;
    v8(a1, a2, v18);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v15);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v14[12], v14[2], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v14);
  }
}
