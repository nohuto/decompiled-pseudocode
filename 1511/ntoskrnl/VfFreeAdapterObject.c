/*
 * XREFs of VfFreeAdapterObject @ 0x1406BB0F8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1406B9B1C (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1406B9DFC (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x1406BD3E4 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1406BD6B0 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1406BD8CC (ViGetRealDmaOperation.c)
 */

void __fastcall VfFreeAdapterObject(__int64 a1, unsigned int a2)
{
  __int64 RealDmaOperation; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, _QWORD); // rbx
  __int64 AdapterInformationInternal; // rsi
  KIRQL v8; // r14
  __int64 i; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  RealDmaOperation = ViGetRealDmaOperation(a1, 216LL);
  LOBYTE(v5) = 1;
  v6 = (void (__fastcall *)(__int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v5);
  v6(a1, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    for ( i = *(_QWORD *)(AdapterInformationInternal + 128); ; i = *(_QWORD *)(v10 + 72) )
    {
      v10 = i - 72;
      if ( AdapterInformationInternal + 128 == v10 + 72 )
        break;
      if ( *(_DWORD *)(v10 + 52) == 1 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        if ( a2 == 3 )
        {
          *(_DWORD *)(v10 + 52) = 3;
        }
        else
        {
          v11 = *(_QWORD *)(v10 + 72);
          v12 = *(_QWORD **)(v10 + 80);
          if ( *(_QWORD *)(v11 + 8) != v10 + 72 || *v12 != v10 + 72 )
            __fastfail(3u);
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v10 + 48));
          if ( *(_QWORD *)(v10 + 96) )
            ViFreeMapRegisterFile(AdapterInformationInternal);
          ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v10);
        }
        break;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 144), v8);
  }
}
