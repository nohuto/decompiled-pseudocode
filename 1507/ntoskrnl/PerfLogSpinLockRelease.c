/*
 * XREFs of PerfLogSpinLockRelease @ 0x14025FC50
 * Callers:
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140264370 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfLogSpinLockRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  char v7; // di
  unsigned __int8 v8; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v10; // r15
  unsigned int v11; // ecx
  int NestingLevel; // edx
  unsigned __int8 CurrentIrql; // al
  char v14; // al
  unsigned __int8 v15; // di
  _QWORD v16[4]; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+50h] [rbp-30h]
  int v18; // [rsp+54h] [rbp-2Ch]
  int KernelStack; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+5Ch] [rbp-24h]
  unsigned __int8 v21; // [rsp+60h] [rbp-20h]
  char v22; // [rsp+61h] [rbp-1Fh]
  char v23; // [rsp+62h] [rbp-1Eh]
  _QWORD *v24; // [rsp+68h] [rbp-18h] BYREF
  int v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+74h] [rbp-Ch]

  result = (__int64)KeGetCurrentPrcb();
  v6 = *(_QWORD *)(result + 24536) + 2560LL;
  v7 = *(_BYTE *)(*(_QWORD *)(result + 24536) + 2816LL);
  if ( !v7 )
    return result;
  v8 = *(_BYTE *)(*(_QWORD *)(result + 24536) + 2816LL);
  while ( 1 )
  {
    result = 32LL * --v8;
    if ( *(_QWORD *)(result + v6 + 8) == a1 )
      break;
    if ( !v8 )
    {
      ++*(_DWORD *)(v6 + 264);
      return result;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = v6 + 32LL * v8;
  if ( !*(_BYTE *)(v6 + 257) )
  {
    if ( EtwpSpinLockHoldThreshold
      && (result = (unsigned int)(a3 - *(_DWORD *)v10), (unsigned int)result > EtwpSpinLockHoldThreshold)
      || (v11 = *(_DWORD *)(v10 + 20), v11 >= EtwpSpinLockSpinThreshold)
      && (result = CurrentPrcb->SynchCounters.SpinLockContentionCount / EtwpSpinLockContentionSampleRate,
          !(CurrentPrcb->SynchCounters.SpinLockContentionCount % EtwpSpinLockContentionSampleRate))
      || !v11
      && (result = (CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
                 / EtwpSpinLockAcquireSampleRate,
          !((CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
          % EtwpSpinLockAcquireSampleRate)) )
    {
      NestingLevel = CurrentPrcb->NestingLevel;
      *(_BYTE *)(v6 + 257) = 1;
      v16[0] = a1;
      v16[1] = a2;
      v16[3] = a3;
      KernelStack = (int)KeGetCurrentThread()[1].KernelStack;
      v22 = v7;
      CurrentIrql = KeGetCurrentIrql();
      v21 = CurrentIrql;
      v16[2] = *(_QWORD *)v10;
      v17 = *(_DWORD *)(v10 + 16);
      v18 = *(_DWORD *)(v10 + 20);
      v20 = CurrentPrcb->InterruptCount - *(_DWORD *)(v10 + 24);
      v14 = *(_BYTE *)(v10 + 28);
      v23 = v14;
      if ( NestingLevel == 1 )
      {
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        {
          v23 |= 0x40u;
LABEL_19:
          v26 = 0;
          v24 = v16;
          v25 = 56;
          result = (__int64)EtwTraceKernelEvent((int)&v24, 1, 0x20010000u, 0x529u, 1538);
          *(_BYTE *)(v6 + 257) = 0;
          goto LABEL_20;
        }
        v14 = v23;
      }
      else if ( !NestingLevel )
      {
        goto LABEL_19;
      }
      v23 = v14 | 0x80;
      goto LABEL_19;
    }
  }
LABEL_20:
  v15 = v7 - 1;
  if ( v8 < v15 )
  {
    result = 0x7FFFFFFFFFFFFFFLL;
    qmemcpy((void *)v10, (const void *)(v10 + 32), 32LL * (unsigned __int8)(v15 - v8));
  }
  --*(_BYTE *)(v6 + 256);
  return result;
}
