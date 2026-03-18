/*
 * XREFs of CiTaskIndexDereference @ 0x1C0001AF0
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A190 (CiDispatchCreateTaskIndexClient.c)
 *     CiThreadCreate @ 0x1C000A830 (CiThreadCreate.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000AF20 (CiCreateTaskIndexClientFromThread.c)
 *     CiDispatchClose @ 0x1C000B090 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000B1C0 (CiThreadCleanup.c)
 * Callees:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0001C70 (CiSchedulerRemoveTaskIndex.c)
 *     CiReleaseTaskIndexListLock @ 0x1C000B490 (CiReleaseTaskIndexListLock.c)
 *     CiTaskIndexRemove @ 0x1C000B4B0 (CiTaskIndexRemove.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000B4E0 (CiAcquireTaskIndexListLock.c)
 */

void __fastcall CiTaskIndexDereference(volatile signed __int64 *P)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rax
  bool v5; // cc
  signed __int64 v6; // rax

  v1 = P;
  _m_prefetchw((const void *)(P + 6));
  v2 = *((_QWORD *)P + 6);
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(P + 6, v2 - 1, v2);
    if ( v3 == v2 )
      return;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  CiAcquireTaskIndexListLock();
  v4 = _InterlockedExchangeAdd64(v1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4 <= 1;
  v6 = v4 - 1;
  if ( v5 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CiTaskIndexRemove(v1);
  }
  else
  {
    v1 = 0LL;
  }
  CiReleaseTaskIndexListLock();
  if ( v1 )
  {
    CiSchedulerRemoveTaskIndex(v1);
    ExFreePoolWithTag((PVOID)v1, 0);
  }
}
