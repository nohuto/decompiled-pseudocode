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

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // r15
  __int64 result; // rax
  __int64 v4; // r9
  unsigned int v5; // ebp
  PVOID v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF

  P[0] = 0LL;
  v2 = 0;
  result = SepCreateClaimAttributes(P);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = P[0];
    if ( P[0] )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v8 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
        v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, v4);
        v11 = v9;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
        if ( v11 )
          *(_BYTE *)(v11 + 26) |= 1u;
        v12 = *(_QWORD *)(a1 + 216);
        if ( !*(_QWORD *)(v12 + 112) )
        {
          v2 = 1;
          *(PVOID *)(v12 + 112) = P[0];
        }
        v13 = *(_QWORD *)(a1 + 216);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 104));
        KeAbPostRelease(v13 + 104);
        v14 = KeGetCurrentThread();
        v15 = v14->KernelApcDisable + 1;
        v14->KernelApcDisable = v15;
        if ( !v15
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
          && !v14->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v6 = P[0];
        if ( v2 )
          goto LABEL_21;
      }
      if ( SepCompareClaimAttributes((unsigned int *)v6, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 112LL)) )
      {
LABEL_21:
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
        if ( !v2 )
          SepDeleteClaimAttributes(v6);
      }
      else
      {
        *(_DWORD *)(a1 + 200) |= 0x8000u;
        *(_QWORD *)(a1 + 1096) = v6;
      }
      return v5;
    }
    else
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
  }
  return result;
}
