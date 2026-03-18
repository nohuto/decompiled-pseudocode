/*
 * XREFs of SepSetTokenClaims @ 0x14046E38C
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x14041044C (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x14046E408 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x1406D81A8 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1, int a2, int a3, int a4, void *a5)
{
  char v6; // r15
  __int64 result; // rax
  __int64 v8; // r9
  unsigned int v9; // ebp
  PVOID v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rsi
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  PVOID P; // [rsp+30h] [rbp-28h] BYREF

  P = 0LL;
  v6 = 0;
  result = SepCreateClaimAttributes((int)&P, a2, a3, a4, a5);
  v9 = result;
  if ( (int)result >= 0 )
  {
    v10 = P;
    if ( P )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
        v13 = KeAbPreAcquire((ULONG_PTR)v12, 0LL, 0LL, v8);
        v15 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, v13, (ULONG_PTR)v12, v14);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        v16 = *(_QWORD *)(a1 + 216);
        if ( !*(_QWORD *)(v16 + 112) )
        {
          v6 = 1;
          *(_QWORD *)(v16 + 112) = P;
        }
        v17 = *(_QWORD *)(a1 + 216);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 104));
        KeAbPostRelease(v17 + 104);
        v18 = KeGetCurrentThread();
        v19 = v18->KernelApcDisable + 1;
        v18->KernelApcDisable = v19;
        if ( !v19
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
          && !v18->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v10 = P;
        if ( v6 )
          goto LABEL_21;
      }
      if ( SepCompareClaimAttributes((unsigned int *)v10, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 112LL)) )
      {
LABEL_21:
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
        if ( !v6 )
          SepDeleteClaimAttributes(v10);
      }
      else
      {
        *(_DWORD *)(a1 + 200) |= 0x8000u;
        *(_QWORD *)(a1 + 1096) = v10;
      }
      return v9;
    }
    else
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
  }
  return result;
}
