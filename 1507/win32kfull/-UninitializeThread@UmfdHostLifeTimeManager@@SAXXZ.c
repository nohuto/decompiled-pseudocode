/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B9B90
 * Callers:
 *     UmfdUninitializeThread @ 0x1C02A4B80 (UmfdUninitializeThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C02D4A64 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D4A8C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C02D5688 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D7E00 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void UmfdHostLifeTimeManager::UninitializeThread(void)
{
  __int64 ThreadWin32Thread; // rax
  struct UmfdTls *v1; // rax
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v2; // rbx
  __int64 v3; // rax
  struct UmfdTls *v4; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 360) )
  {
    v1 = UmfdTls::EnsureTls();
    v2 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v1 + 2);
    if ( v2 )
    {
      if ( UmfdGetServerPort(*((unsigned int *)v1 + 2)) && *v2 )
      {
        CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v2);
        *v2 = 0LL;
      }
      EngFreeMem(v2);
    }
    v3 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v3 )
    {
      v4 = *(struct UmfdTls **)(v3 + 360);
      if ( v4 )
      {
        *(_QWORD *)(v3 + 360) = 0LL;
        UmfdTls::Destroy(v4);
      }
    }
  }
}
