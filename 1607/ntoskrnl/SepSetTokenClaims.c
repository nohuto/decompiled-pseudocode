/*
 * XREFs of SepSetTokenClaims @ 0x14047846C
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x140475794 (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x1404784D8 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140695AE4 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // r15
  __int64 result; // rax
  unsigned int v4; // ebp
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // r14
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF

  P[0] = 0LL;
  v2 = 0;
  result = SepCreateClaimAttributes(P);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = P[0];
    if ( P[0] )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
        v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
        v9 = v8;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
          ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
        if ( v9 )
          v9[26] |= 1u;
        v10 = *(_QWORD *)(a1 + 216);
        if ( !*(_QWORD *)(v10 + 112) )
        {
          v2 = 1;
          *(PVOID *)(v10 + 112) = P[0];
        }
        v11 = *(_QWORD *)(a1 + 216);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 104));
        KeAbPostRelease(v11 + 104);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
        v5 = P[0];
        if ( v2 )
          goto LABEL_17;
      }
      if ( SepCompareClaimAttributes((unsigned int *)v5, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 112LL)) )
      {
LABEL_17:
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
        if ( !v2 )
          SepDeleteClaimAttributes(v5);
      }
      else
      {
        *(_DWORD *)(a1 + 200) |= 0x8000u;
        *(_QWORD *)(a1 + 1096) = v5;
      }
      return v4;
    }
    else
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
  }
  return result;
}
