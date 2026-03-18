/*
 * XREFs of PoDisableSleepStates @ 0x14058E6EC
 * Callers:
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoDisableSleepStates(int a1, int a2, _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *PoolWithTag; // rbx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 **v12; // rax
  unsigned __int8 v13; // si
  signed __int32 v14; // eax

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x64536F50u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 4) = a1;
    *((_DWORD *)PoolWithTag + 5) = a2;
    v9 = KeAbPreAcquire((ULONG_PTR)&PopDisableSleepMutex, 0LL, 0LL, v8);
    v10 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopDisableSleepMutex, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PopDisableSleepMutex, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    qword_14032F768 = (__int64)KeGetCurrentThread();
    dword_14032F790 = CurrentIrql;
    v12 = (__int64 **)qword_14032F7A8;
    *PoolWithTag = &PopDisableSleepList;
    PoolWithTag[1] = v12;
    if ( *v12 != &PopDisableSleepList )
      __fastfail(3u);
    *v12 = PoolWithTag;
    v13 = dword_14032F790;
    qword_14032F7A8 = (__int64)PoolWithTag;
    qword_14032F768 = 0LL;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&PopDisableSleepMutex, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopDisableSleepMutex, v14);
    __writecr8(v13);
    KeAbPostRelease((ULONG_PTR)&PopDisableSleepMutex);
    *a3 = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
