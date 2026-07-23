/*
 * XREFs of SmcCacheCreatePrepare @ 0x140697448
 * Callers:
 *     SmcProcessCreateRequest @ 0x140697548 (SmcProcessCreateRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x14057F46C (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x14069A060 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rdi
  char v7; // al

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403BF128, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403BF128, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_1403BF128, v4, (ULONG_PTR)&qword_1403BF128);
  if ( v6 )
    v6[26] |= 1u;
  v7 = dword_1403BF110;
  if ( (dword_1403BF110 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart(&qword_1403BF3B8);
    v7 = dword_1403BF110;
    if ( v2 >= 0 )
    {
      v7 = dword_1403BF110 | 8;
      dword_1403BF110 |= 8u;
    }
  }
  if ( (v7 & 4) == 0 && (v7 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_1403BF3B8);
    if ( v2 >= 0 )
      dword_1403BF110 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403BF128, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403BF128);
  KeAbPostRelease((ULONG_PTR)&qword_1403BF128);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
