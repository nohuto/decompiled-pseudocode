/*
 * XREFs of SmcCacheCreatePrepare @ 0x1406580B8
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406581B8 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     SmRegistrationCtxStart @ 0x140545D38 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x140658B98 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  char v7; // al

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&qword_140304F98, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140304F98, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140304F98, v4, (ULONG_PTR)&qword_140304F98);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = dword_140304F90;
  if ( (dword_140304F90 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart(&qword_140305228);
    v7 = dword_140304F90;
    if ( v2 >= 0 )
    {
      v7 = dword_140304F90 | 8;
      dword_140304F90 |= 8u;
    }
  }
  if ( (v7 & 4) == 0 && (v7 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_140305228);
    if ( v2 >= 0 )
      dword_140304F90 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140304F98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140304F98);
  KeAbPostRelease((ULONG_PTR)&qword_140304F98);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
