/*
 * XREFs of VfAllocateAdapterChannel @ 0x140706210
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     ExInterlockedInsertTailList @ 0x14008B840 (ExInterlockedInsertTailList.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ViIsActiveChannelWcb @ 0x140222ADC (ViIsActiveChannelWcb.c)
 *     ADD_MAP_REGISTERS @ 0x140705AB8 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140705BC0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140705E04 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140705EA0 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140705F98 (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
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
  unsigned int v19; // esi
  KIRQL v20; // al
  char **v21; // r9
  void **v22; // r8

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
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    v21 = (char **)*((_QWORD *)v9 + 9);
    v22 = (void **)*((_QWORD *)v9 + 10);
    if ( v21[1] != v9 + 72 || *v22 != v9 + 72 )
      __fastfail(3u);
    *v22 = v21;
    v21[1] = (char *)v22;
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 144), v20);
    DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a3);
    if ( *((_QWORD *)v9 + 12) )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v9);
  }
  return v19;
}
