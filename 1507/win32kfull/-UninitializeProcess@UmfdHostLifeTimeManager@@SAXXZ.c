/*
 * XREFs of ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B9A60
 * Callers:
 *     UmfdUninitializeProcess @ 0x1C02A4B70 (UmfdUninitializeProcess.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0141ED8 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     _lambda_9bc42c391025735687ce71b9e59c95f3_::operator() @ 0x1C02A35F4 (_lambda_9bc42c391025735687ce71b9e59c95f3_--operator().c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C02B9998 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C02B9C1C (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D3B10 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02D3BE4 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C02D5688 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D7E00 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void UmfdHostLifeTimeManager::UninitializeProcess(void)
{
  unsigned int i; // ebx
  union _SLIST_HEADER **ServerPort; // rax
  union _SLIST_HEADER **v2; // rdi
  union _SLIST_HEADER *j; // rcx
  CMultipleConsumerWorkQueue::CWaitableWorkItem *v4; // rax
  PVOID v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx(
    (CAutoPushLockEx *)&v8,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  UmfdHostLifeTimeManager::s_Ready = 0;
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  for ( i = 0; i < 4; ++i )
  {
    ServerPort = (union _SLIST_HEADER **)UmfdGetServerPort(i);
    v2 = ServerPort;
    if ( ServerPort )
    {
      for ( j = *ServerPort; ; j = *v2 )
      {
        v4 = (CMultipleConsumerWorkQueue::CWaitableWorkItem *)ExpInterlockedPopEntrySList(j + 1);
        if ( !v4 )
          break;
        CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(v4);
      }
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
  if ( UmfdAllocation::s_allocationLookup )
  {
    v5 = UmfdAllocation::s_allocationLookupLock;
    NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive((NSInstrumentation::CPlatformReaderWriterLock *)UmfdAllocation::s_allocationLookupLock);
    NSInstrumentation::CPointerHashTable::Enumerate(
      UmfdAllocation::s_allocationLookup,
      (void (*)(void *, void *, void *))UmfdAllocation::_RemoveAllocationFromLookup,
      0LL);
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&v8);
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
  v8 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  GreAcquireFastMutex(ghfmMemory);
  lambda_9bc42c391025735687ce71b9e59c95f3_::operator()(v6, (__int64)gpPFTPublic);
  lambda_9bc42c391025735687ce71b9e59c95f3_::operator()(v7, (__int64)gpPFTPrivate);
  GreReleaseFastMutex(ghfmMemory);
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  UmfdHostLifeTimeManager::s_Launched = 0;
}
