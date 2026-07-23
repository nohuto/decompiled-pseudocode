/*
 * XREFs of PerfLogSpinLockRelease @ 0x140228518
 * Callers:
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DCE8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14022DE28 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfLogSpinLockRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // si
  unsigned __int8 v9; // di
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v11; // r14
  unsigned int v12; // ecx
  int NestingLevel; // edx
  unsigned __int8 CurrentIrql; // al
  char v15; // al
  unsigned __int8 v16; // si
  __int64 v17; // rcx
  __int128 v18; // xmm1
  _QWORD v19[4]; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+54h] [rbp-2Ch]
  int KernelStack; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+5Ch] [rbp-24h]
  unsigned __int8 v24; // [rsp+60h] [rbp-20h]
  char v25; // [rsp+61h] [rbp-1Fh]
  char v26; // [rsp+62h] [rbp-1Eh]
  _QWORD *v27; // [rsp+68h] [rbp-18h] BYREF
  int v28; // [rsp+70h] [rbp-10h]
  int v29; // [rsp+74h] [rbp-Ch]

  result = (__int64)KeGetCurrentPrcb();
  v7 = *(_QWORD *)(result + 24536) + 2560LL;
  v8 = *(_BYTE *)(*(_QWORD *)(result + 24536) + 2816LL);
  if ( v8 )
  {
    v9 = *(_BYTE *)(*(_QWORD *)(result + 24536) + 2816LL);
    while ( 1 )
    {
      result = 32LL * --v9;
      if ( *(_QWORD *)(result + v7 + 8) == a1 )
        break;
      if ( !v9 )
      {
        ++*(_DWORD *)(v7 + 264);
        return result;
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v7 + 32LL * v9;
    if ( *(_BYTE *)(v7 + 257) )
      goto LABEL_20;
    if ( !EtwpSpinLockHoldThreshold
      || (result = (unsigned int)(a3 - *(_DWORD *)v11), (unsigned int)result <= EtwpSpinLockHoldThreshold) )
    {
      v12 = *(_DWORD *)(v11 + 20);
      if ( v12 < EtwpSpinLockSpinThreshold
        || (result = CurrentPrcb->SynchCounters.SpinLockContentionCount / EtwpSpinLockContentionSampleRate,
            CurrentPrcb->SynchCounters.SpinLockContentionCount % EtwpSpinLockContentionSampleRate) )
      {
        if ( v12 )
          goto LABEL_20;
        result = (CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
               / EtwpSpinLockAcquireSampleRate;
        if ( (CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
           % EtwpSpinLockAcquireSampleRate )
        {
          goto LABEL_20;
        }
      }
    }
    NestingLevel = CurrentPrcb->NestingLevel;
    *(_BYTE *)(v7 + 257) = 1;
    v19[0] = a1;
    v19[1] = a2;
    v19[3] = a3;
    KernelStack = (int)KeGetCurrentThread()[1].KernelStack;
    v25 = v8;
    CurrentIrql = KeGetCurrentIrql();
    v24 = CurrentIrql;
    v19[2] = *(_QWORD *)v11;
    v20 = *(_DWORD *)(v11 + 16);
    v21 = *(_DWORD *)(v11 + 20);
    v23 = CurrentPrcb->InterruptCount - *(_DWORD *)(v11 + 24);
    v15 = *(_BYTE *)(v11 + 28);
    v26 = v15;
    if ( NestingLevel == 1 )
    {
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v26 |= 0x40u;
LABEL_19:
        v29 = 0;
        v27 = v19;
        v28 = 56;
        result = EtwTraceKernelEvent((int)&v27, 1, 0x20010000u, 1321, 1538);
        *(_BYTE *)(v7 + 257) = 0;
LABEL_20:
        v16 = v8 - 1;
        while ( v9 < v16 )
        {
          result = (unsigned int)v9 + 1;
          v17 = 32LL * (int)result;
          ++v9;
          v18 = *(_OWORD *)(v17 + v7 + 16);
          *(_OWORD *)v11 = *(_OWORD *)(v17 + v7);
          *(_OWORD *)(v11 + 16) = v18;
          v11 += 32LL;
        }
        --*(_BYTE *)(v7 + 256);
        return result;
      }
      v15 = v26;
    }
    else if ( !NestingLevel )
    {
      goto LABEL_19;
    }
    v26 = v15 | 0x80;
    goto LABEL_19;
  }
  return result;
}
