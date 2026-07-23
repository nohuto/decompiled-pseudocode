/*
 * XREFs of KsepIsModuleShimmed @ 0x140515050
 * Callers:
 *     KsepGetShimsForDriver @ 0x1405139C0 (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x1405151DC (KsepGetShimCallbacksForDriver.c)
 *     KseDriverUnloadImage @ 0x140546D94 (KseDriverUnloadImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
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
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F60, 0LL, 0);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F60, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140328F60, v8, (ULONG_PTR)&qword_140328F60);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
  KeAbPostRelease((ULONG_PTR)&qword_140328F60);
  KeLeaveCriticalRegion();
  return v3;
}
