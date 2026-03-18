/*
 * XREFs of SmcCacheCreatePrepare @ 0x1406DA4B0
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x1405BD204 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x1406DB050 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rdi
  char v11; // al
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_140352D08, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140352D08, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140352D08, v7, (ULONG_PTR)&qword_140352D08, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = dword_140352D00;
  if ( (dword_140352D00 & 8) == 0 )
  {
    v6 = SmRegistrationCtxStart(&qword_140352F98);
    v11 = dword_140352D00;
    if ( v6 >= 0 )
    {
      v11 = dword_140352D00 | 8;
      dword_140352D00 |= 8u;
    }
  }
  if ( (v11 & 4) == 0 && (v11 & 8) != 0 )
  {
    v6 = SmcCacheManagerStart(a1, qword_140352F98);
    if ( v6 >= 0 )
      dword_140352D00 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140352D08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140352D08);
  KeAbPostRelease((ULONG_PTR)&qword_140352D08);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v6;
}
