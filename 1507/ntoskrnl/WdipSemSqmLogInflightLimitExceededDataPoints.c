/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14054CF68
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14054CD10 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x1405525BC (WdipSemFastFree.c)
 *     WdipSemSqmAddToStream @ 0x1406DF684 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1406DF81C (WdipSemSqmIncrementDword.c)
 *     WdipSemGetGuidKey @ 0x1406DFAF0 (WdipSemGetGuidKey.c)
 */

__int64 __fastcall WdipSemSqmLogInflightLimitExceededDataPoints(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned int i; // esi
  signed __int64 v14; // rcx
  ULONG_PTR v15; // rtt
  struct _KTHREAD *v16; // rdx
  __int16 v17; // ax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v23[4]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v22 = 0;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_14032AF88, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14032AF88, 0LL);
  v11 = v6;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_14032AF88, v6, (ULONG_PTR)&qword_14032AF88, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (unsigned int)dword_14032AF80;
  if ( dword_14032AF80 )
  {
    v5 = WdipSemSqmIncrementDword(v8, (unsigned int)dword_14032AF80);
    if ( v5 < 0 )
      v5 = 0;
    if ( (_DWORD)v12 )
    {
      v19 = WdipSemFrequentScenarioTable;
      do
      {
        v20 = *v19;
        if ( (int)WdipSemGetGuidKey(*v19, &v22) >= 0 )
        {
          v23[0] = v22;
          v23[1] = *(unsigned __int16 *)(v20 + 16);
          v23[2] = *(_DWORD *)(v20 + 20);
          v5 = WdipSemSqmAddToStream(1062LL, 3LL, v23);
          if ( v5 < 0 )
            v5 = 0;
        }
        else
        {
          v5 = 0;
        }
        ++v19;
        --v12;
      }
      while ( v12 );
    }
  }
  for ( i = 0; i < dword_14032AF80; WdipSemFrequentScenarioTable[v21] = 0LL )
  {
    v21 = i;
    WdipSemFastFree(5LL, WdipSemFrequentScenarioTable[i++]);
  }
  dword_14032AF80 = 0;
  _m_prefetchw(&qword_14032AF88);
  v14 = qword_14032AF88 - 16;
  if ( (qword_14032AF88 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (qword_14032AF88 & 2) != 0
    || (v15 = qword_14032AF88,
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AF88, v14, qword_14032AF88)) )
  {
    ExfReleasePushLock(&qword_14032AF88, v7);
  }
  KeAbPostRelease((ULONG_PTR)&qword_14032AF88);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v5;
}
