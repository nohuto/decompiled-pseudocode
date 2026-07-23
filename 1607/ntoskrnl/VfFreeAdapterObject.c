/*
 * XREFs of VfFreeAdapterObject @ 0x14070719C
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140705BC0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140705EA0 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
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
