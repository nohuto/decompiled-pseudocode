/*
 * XREFs of CmWorkerEngineDequeueWorkItem @ 0x14065433C
 * Callers:
 *     CmpUnfreezeHive @ 0x1401DFB54 (CmpUnfreezeHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

char __fastcall CmWorkerEngineDequeueWorkItem(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  unsigned __int8 v11; // bl
  signed __int32 v12; // eax

  v5 = 0;
  v6 = KeAbPreAcquire((ULONG_PTR)&CmpWorkerEngineLock, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpWorkerEngineLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpWorkerEngineLock, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_14034DC08 = (__int64)KeGetCurrentThread();
  dword_14034DC30 = CurrentIrql;
  v9 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v10 = (_QWORD *)a1[1];
    if ( (_QWORD *)v9[1] != a1 || (_QWORD *)*v10 != a1 )
      __fastfail(3u);
    *v10 = v9;
    v5 = 1;
    v9[1] = v10;
    a1[1] = a1;
    *a1 = a1;
  }
  qword_14034DC08 = 0LL;
  v11 = dword_14034DC30;
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpWorkerEngineLock, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpWorkerEngineLock, v12);
  __writecr8(v11);
  KeAbPostRelease((ULONG_PTR)&CmpWorkerEngineLock);
  return v5;
}
