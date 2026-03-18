/*
 * XREFs of VfFreeAdapterChannel @ 0x1406BB058
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x14020B268 (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1406B9B1C (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1406B9DFC (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x1406B9EF4 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x1406BD3E4 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1406BD6B0 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1406BD8CC (ViGetRealDmaOperation.c)
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
