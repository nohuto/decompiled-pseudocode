/*
 * XREFs of ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC2F0
 * Callers:
 *     UmfdUninitializeProcess @ 0x1C02A5530 (UmfdUninitializeProcess.c)
 * Callees:
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0021514 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _lambda_e4e79ac46a0bd5e7c8e76743931293b9_::operator() @ 0x1C02A3F6C (_lambda_e4e79ac46a0bd5e7c8e76743931293b9_--operator().c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C02BBE00 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C02BC228 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C02BC4B0 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D7F90 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02D8064 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C02D9B18 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C02D9B30 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 */

void UmfdHostLifeTimeManager::UninitializeProcess(void)
{
  unsigned int i; // ebx
  void *ServerPort; // rax
  PVOID v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v5);
  UmfdHostLifeTimeManager::s_Ready = 0;
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  for ( i = 0; i < 4; ++i )
  {
    ServerPort = (void *)UmfdGetServerPort(i);
    if ( ServerPort )
      UmfdCancelServerOutstandingRequests(ServerPort);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  if ( UmfdAllocation::s_allocationLookup )
  {
    v2 = UmfdAllocation::s_allocationLookupLock;
    NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive((NSInstrumentation::CPlatformReaderWriterLock *)UmfdAllocation::s_allocationLookupLock);
    NSInstrumentation::CPointerHashTable::Enumerate(
      UmfdAllocation::s_allocationLookup,
      (void (*)(void *, void *, void *))UmfdAllocation::_RemoveAllocationFromLookup,
      0LL);
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
  AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&v5);
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  v5 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  GreAcquireFastMutex(ghfmMemory);
  lambda_e4e79ac46a0bd5e7c8e76743931293b9_::operator()(v3, (__int64)gpPFTPublic);
  lambda_e4e79ac46a0bd5e7c8e76743931293b9_::operator()(v4, (__int64)gpPFTPrivate);
  GreReleaseFastMutex(ghfmMemory);
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  UmfdHostLifeTimeManager::s_Launched = 0;
}
