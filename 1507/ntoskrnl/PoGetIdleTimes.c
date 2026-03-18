/*
 * XREFs of PoGetIdleTimes @ 0x140014610
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     ExpQueryProcessorInformationCounters @ 0x1404FABCC (ExpQueryProcessorInformationCounters.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     PopGetIdleTimesCallback @ 0x1400148E0 (PopGetIdleTimesCallback.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

struct _KTHREAD *__fastcall PoGetIdleTimes(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx
  int v4; // r12d
  unsigned __int16 v8; // ax
  unsigned __int8 v9; // dl
  unsigned int v10; // ecx
  __int64 v11; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // di
  int IdleTimesCallback; // eax
  ULONG_PTR v16; // rtt
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KTHREAD *result; // rax
  __int16 v20; // cx
  $CD287064E7C9F7953DE243E927CFCB99 *v21; // rcx
  unsigned __int16 v22; // ax
  unsigned __int8 v23; // dl
  unsigned int v24; // r10d
  __int64 v25; // rcx
  __int64 *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v29[21]; // [rsp+38h] [rbp-F0h] BYREF

  v3 = 0LL;
  v4 = -1;
  if ( !*(_BYTE *)(a1 + 3) )
  {
    v8 = *(_WORD *)a1;
    if ( !*(_WORD *)a1 && !*(_BYTE *)(a1 + 2) )
    {
      v10 = 0;
      goto LABEL_7;
    }
    if ( v8 < (unsigned __int16)KiMaximumGroups )
    {
      v9 = *(_BYTE *)(a1 + 2);
      if ( v9 < 0x40u )
      {
        v10 = KiProcessorNumberToIndexMappingTable[64 * v8 + v9];
        if ( v10 )
          goto LABEL_7;
      }
    }
  }
  v10 = -1;
LABEL_7:
  if ( v10 >= (unsigned int)KeNumberProcessors_0 )
    v11 = 0LL;
  else
    v11 = KiProcessorBlock[v10];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PpmIdlePolicyLock, v13, &PpmIdlePolicyLock);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  IdleTimesCallback = PopGetIdleTimesCallback(v11, a2, a3);
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v28 = 1310721LL;
    memset(v29, 0, 0xA0uLL);
    if ( !*(_BYTE *)(a1 + 3) )
    {
      v22 = *(_WORD *)a1;
      if ( *(_WORD *)a1 || *(_BYTE *)(a1 + 2) )
      {
        if ( v22 < (unsigned __int16)KiMaximumGroups )
        {
          v23 = *(_BYTE *)(a1 + 2);
          if ( v23 < 0x40u )
          {
            if ( KiProcessorNumberToIndexMappingTable[64 * v22 + v23] )
              v4 = KiProcessorNumberToIndexMappingTable[64 * v22 + v23];
          }
        }
      }
      else
      {
        v4 = 0;
      }
    }
    v24 = KiProcessorIndexToNumberMappingTable[v4] & 0x3F;
    v25 = (unsigned int)KiProcessorIndexToNumberMappingTable[v4] >> 6;
    if ( (unsigned __int16)v28 <= (unsigned int)v25 )
      LOWORD(v28) = v25 + 1;
    v26 = &v29[v25];
    v27 = *v26;
    _bittestandset64(&v27, v24);
    *v26 = v27;
    PopExecuteOnTargetProcessors((__int64)&v28, (__int64)PopGetIdleTimesCallback, a2, a3);
  }
  if ( qword_14032E288 )
    qword_14032E288 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v16 = PpmIdlePolicyLock,
        v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v3, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  result = KeGetCurrentThread();
  v20 = result->KernelApcDisable + 1;
  result->KernelApcDisable = v20;
  if ( !v20 )
  {
    v21 = &result->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != v21 && !result->SpecialApcDisable )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery(v21, v17, v18);
  }
  return result;
}
