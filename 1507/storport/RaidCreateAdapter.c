/*
 * XREFs of RaidCreateAdapter @ 0x1C0008A24
 * Callers:
 *     RaDriverAddDevice @ 0x1C0008830 (RaDriverAddDevice.c)
 * Callees:
 *     RaidCreateDeferredQueue @ 0x1C0008BA4 (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C0008BD4 (StorCreateIoGateway.c)
 *     StorCreateDictionary @ 0x1C0008C18 (StorCreateDictionary.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaCreateMiniport @ 0x1C004C748 (RaCreateMiniport.c)
 *     RaCreateBus @ 0x1C004C790 (RaCreateBus.c)
 *     RaidCreateResourceList @ 0x1C004C7A4 (RaidCreateResourceList.c)
 *     RaidCreateDma @ 0x1C004D098 (RaidCreateDma.c)
 */

void __fastcall RaidCreateAdapter(_DWORD *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset(a1, 0, 0x1580uLL);
  *a1 = 0;
  *((_QWORD *)a1 + 16) = a1 + 30;
  *((_QWORD *)a1 + 15) = a1 + 30;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 14);
  *((_QWORD *)a1 + 26) = a1 + 50;
  *((_QWORD *)a1 + 25) = a1 + 50;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 24);
  InitializeSListHead((PSLIST_HEADER)a1 + 14);
  InitializeSListHead((PSLIST_HEADER)a1 + 317);
  a1[14] = -1;
  if ( (int)StorCreateDictionary(a1 + 36) >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *((_QWORD *)a1 + 32) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 74);
      RaidCreateDma(a1 + 174);
      a1[66] = 0;
      a1[67] = 0;
      a1[68] = 0;
      *((_BYTE *)a1 + 276) = 0;
      RaidCreateResourceList(a1 + 70);
      RaCreateBus(a1 + 148);
      *((_QWORD *)a1 + 91) = 0LL;
      *((_QWORD *)a1 + 92) = 0LL;
      *((_QWORD *)a1 + 93) = 0LL;
      StorCreateIoGateway((PKSPIN_LOCK)a1 + 96);
      RaidCreateDeferredQueue(a1 + 272);
      RaidCreateDeferredQueue(a1 + 368);
      a1[308] = 134684677;
      a1[328] = 134684677;
      a1[348] = 134684677;
      KeInitializeTimer((PKTIMER)a1 + 26);
      KeInitializeTimer((PKTIMER)a1 + 29);
      KeInitializeTimer((PKTIMER)(a1 + 1054));
      a1[22] = 2;
      *((_BYTE *)a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 85);
    }
  }
}
