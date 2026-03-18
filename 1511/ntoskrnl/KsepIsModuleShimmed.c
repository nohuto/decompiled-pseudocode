/*
 * XREFs of KsepIsModuleShimmed @ 0x1403B8C3C
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x1403B684C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1403B6FE4 (KsepGetShimsForDriver.c)
 *     KseDriverUnloadImage @ 0x1404C57BC (KseDriverUnloadImage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v13; // rdx

  v3 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140305F40, 0LL, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140305F40, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140305F40, v8, (ULONG_PTR)&qword_140305F40);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
  KeAbPostRelease((ULONG_PTR)&qword_140305F40);
  KeLeaveCriticalRegion();
  return v3;
}
