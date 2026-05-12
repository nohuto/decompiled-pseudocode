/*
 * XREFs of RaidCreateAdapter @ 0x1C0015D30
 * Callers:
 *     RaDriverAddDevice @ 0x1C00159A0 (RaDriverAddDevice.c)
 * Callees:
 *     RaidCreateDeferredQueue @ 0x1C0015EC8 (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C0015EF8 (StorCreateIoGateway.c)
 *     StorCreateDictionary @ 0x1C0015F48 (StorCreateDictionary.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaCreateBus @ 0x1C005776C (RaCreateBus.c)
 *     RaidCreateResourceList @ 0x1C0057780 (RaidCreateResourceList.c)
 *     RaidCreateDma @ 0x1C005ABB0 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C005ABCC (RaCreateMiniport.c)
 */

void __fastcall RaidCreateAdapter(_DWORD *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset(a1, 0, 0x1680uLL);
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
      KeInitializeTimer((PKTIMER)(a1 + 1370));
      a1[22] = 2;
      *((_BYTE *)a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 85);
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 701);
    }
  }
}
