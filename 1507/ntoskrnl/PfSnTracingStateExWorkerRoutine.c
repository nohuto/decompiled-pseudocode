/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x14055B534
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v9; // eax
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax
  PVOID v12; // rcx
  PVOID *v13; // rax

  v5 = KeAbPreAcquire((ULONG_PTR)&dword_140353658, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&dword_140353658, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&dword_140353658, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  qword_140353660 = (__int64)KeGetCurrentThread();
  dword_140353688 = CurrentIrql;
  if ( dword_140353694 == 2 )
  {
    qword_140353660 = 0LL;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140353658, 1, 0);
    if ( v9 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140353658, v9);
    __writecr8(CurrentIrql);
    KeAbPostRelease((ULONG_PTR)&dword_140353658);
  }
  else
  {
    dword_140353694 = 1;
    while ( qword_140353648 != &qword_140353648 )
    {
      v12 = qword_140353650;
      v13 = (PVOID *)*((_QWORD *)qword_140353650 + 1);
      if ( *(PVOID **)qword_140353650 != &qword_140353648 || *v13 != qword_140353650 )
        __fastfail(3u);
      qword_140353650 = (PVOID)*((_QWORD *)qword_140353650 + 1);
      *v13 = &qword_140353648;
      ExFreePoolWithTag(v12, 0);
      --dword_140353690;
    }
    qword_140353660 = 0LL;
    v10 = dword_140353688;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140353658, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140353658, v11);
    __writecr8(v10);
    KeAbPostRelease((ULONG_PTR)&dword_140353658);
    if ( qword_140353698 )
      KeSetEvent(qword_140353698, 0, 0);
  }
  ExFreePoolWithTag(a1, 0);
}
