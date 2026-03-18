/*
 * XREFs of KsepIsModuleShimmed @ 0x140485CC8
 * Callers:
 *     KsepGetShimsForDriver @ 0x140484638 (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x1404E5924 (KsepGetShimCallbacksForDriver.c)
 *     KseDriverUnloadImage @ 0x140546854 (KseDriverUnloadImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v8; // rax
  signed __int8 v9; // cf
  _BYTE *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v13; // rdx

  v3 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F20, 0LL, 0);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F20, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140328F20, v8, (ULONG_PTR)&qword_140328F20);
  if ( v10 )
    v10[26] |= 1u;
  v11 = *(_QWORD **)(a1 + 32);
  while ( v11 != (_QWORD *)(a1 + 32) )
  {
    v13 = v11;
    v11 = (_QWORD *)*v11;
    if ( v13[2] == a2 )
    {
      *a3 = v13;
      v3 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F20);
  KeAbPostRelease((ULONG_PTR)&qword_140328F20);
  KeLeaveCriticalRegion();
  return v3;
}
