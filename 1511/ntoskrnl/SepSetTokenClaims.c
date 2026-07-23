/*
 * XREFs of SepSetTokenClaims @ 0x1403C2354
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepCreateClaimAttributes @ 0x1403C23C0 (SepCreateClaimAttributes.c)
 *     SepCompareClaimAttributes @ 0x1404C44E8 (SepCompareClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140656090 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // r15
  __int64 result; // rax
  unsigned int v4; // ebp
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
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
        v8 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL);
        v9 = v8;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
          ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
        if ( v9 )
          *(_BYTE *)(v9 + 26) |= 1u;
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
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v5 = P[0];
        if ( v2 )
          goto LABEL_17;
      }
      if ( (unsigned __int8)SepCompareClaimAttributes(v5, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
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
