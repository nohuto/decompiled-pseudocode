/*
 * XREFs of PoReenableSleepStates @ 0x1406B2F98
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall PoReenableSleepStates(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax

  v5 = KeAbPreAcquire((ULONG_PTR)&PopDisableSleepMutex, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopDisableSleepMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopDisableSleepMutex, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  qword_14032F768 = (__int64)KeGetCurrentThread();
  dword_14032F790 = CurrentIrql;
  v8 = *a1;
  v9 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v9 != a1 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  qword_14032F768 = 0LL;
  v10 = dword_14032F790;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PopDisableSleepMutex, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopDisableSleepMutex, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&PopDisableSleepMutex);
  ExFreePoolWithTag(a1, 0x64536F50u);
}
