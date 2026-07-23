/*
 * XREFs of VfFreeAdapterChannel @ 0x1407070FC
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x140222B50 (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140705BC0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140705EA0 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140705F98 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 */

void __fastcall VfFreeAdapterChannel(__int64 a1)
{
  __int64 RealDmaOperation; // rax
  __int64 v3; // rdx
  void (__fastcall *v4)(__int64); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 v6; // rbx

  VF_ASSERT_IRQL(2u);
  RealDmaOperation = ViGetRealDmaOperation(a1, 48LL);
  LOBYTE(v3) = 1;
  v4 = (void (__fastcall *)(__int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v3);
  v4(a1);
  if ( AdapterInformationInternal )
  {
    _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
    v6 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, 0LL);
    if ( v6 )
    {
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v6 + 48));
      if ( *(_QWORD *)(v6 + 96) )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v6);
    }
  }
}
