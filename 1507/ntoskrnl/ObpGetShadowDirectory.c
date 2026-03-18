/*
 * XREFs of ObpGetShadowDirectory @ 0x140510DC0
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall ObpGetShadowDirectory(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  signed __int64 v5; // rbx
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // r9
  __int64 v14; // rax
  signed __int64 v15; // rax
  unsigned __int64 v16; // rtt
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  __int64 result; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 344);
  v5 = 0LL;
  v7 = 0LL;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x10) == 0 )
      return *(_QWORD *)(a1 + 312);
    result = 0LL;
    if ( a2 )
      return *(_QWORD *)(a1 + 312);
  }
  else
  {
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v20, a4);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = (unsigned __int64 *)(v20 + 120);
    v12 = KeAbPreAcquire(v20 + 120, 0LL, 0LL, v10);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9, v12, (ULONG_PTR)v9, v13);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v14 = *(_QWORD *)(a1 + 304);
    if ( v14 )
      v7 = *(_QWORD *)(v14 + 8);
    _m_prefetchw(v9);
    v15 = *v9;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v5 = v15 - 16;
    if ( (v15 & 2) != 0 || (v16 = *v9, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v5, v15)) )
      ExfReleasePushLock(v9, v11);
    KeAbPostRelease((ULONG_PTR)v9);
    v17 = KeGetCurrentThread();
    v18 = v17->SpecialApcDisable + 1;
    v17->SpecialApcDisable = v18;
    if ( !v18 && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
      KiCheckForKernelApcDelivery();
    PsDereferenceMonitorContextServerSilo(v20);
    return v7;
  }
  return result;
}
