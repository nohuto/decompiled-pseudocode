/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC3F4
 * Callers:
 *     UmfdUninitializeThread @ 0x1C02A5540 (UmfdUninitializeThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C02BBE00 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C02BBE20 (--1UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C02D8EE4 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D8F0C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C02D9B18 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C02D9B30 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02DC2B0 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void UmfdHostLifeTimeManager::UninitializeThread(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 ThreadWin32Thread; // rax
  struct UmfdTls *v4; // rbx
  __int64 v5; // rdx
  void *ServerPort; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v9; // rbx
  __int64 v10; // rax
  struct UmfdTls *v11; // rcx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v12);
  UmfdHostLifeTimeManager::s_Ready = 0;
  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::~UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v12);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0, v1, v2);
  if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 344) )
  {
    v4 = UmfdTls::EnsureTls();
    ServerPort = (void *)UmfdGetServerPort(*((unsigned int *)v4 + 2));
    if ( ServerPort )
    {
      v9 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v4 + 2);
      if ( v9 )
      {
        if ( *v9 )
        {
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v9);
          *v9 = 0LL;
        }
        EngFreeMem(v9);
      }
      UmfdCancelServerOutstandingRequests(ServerPort);
    }
    v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8);
    if ( v10 )
    {
      v11 = *(struct UmfdTls **)(v10 + 344);
      if ( v11 )
      {
        *(_QWORD *)(v10 + 344) = 0LL;
        UmfdTls::Destroy(v11);
      }
    }
  }
}
