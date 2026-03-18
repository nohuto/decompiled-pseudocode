/*
 * XREFs of SepSetTokenClaims @ 0x14047959C
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x1404768C4 (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x140479608 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140695A00 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1, int a2, int a3, int a4, void *a5)
{
  char v6; // r15
  __int64 result; // rax
  unsigned int v8; // ebp
  PVOID v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // r14
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID P; // [rsp+30h] [rbp-28h] BYREF

  P = 0LL;
  v6 = 0;
  result = SepCreateClaimAttributes((int)&P, a2, a3, a4, a5);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v9 = P;
    if ( P )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v11 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
        v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
        v13 = v12;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
          ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
        if ( v13 )
          v13[26] |= 1u;
        v14 = *(_QWORD *)(a1 + 216);
        if ( !*(_QWORD *)(v14 + 112) )
        {
          v6 = 1;
          *(_QWORD *)(v14 + 112) = P;
        }
        v15 = *(_QWORD *)(a1 + 216);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 104));
        KeAbPostRelease(v15 + 104);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
        v9 = P;
        if ( v6 )
          goto LABEL_17;
      }
      if ( SepCompareClaimAttributes((unsigned int *)v9, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 112LL)) )
      {
LABEL_17:
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
        if ( !v6 )
          SepDeleteClaimAttributes(v9);
      }
      else
      {
        *(_DWORD *)(a1 + 200) |= 0x8000u;
        *(_QWORD *)(a1 + 1096) = v9;
      }
      return v8;
    }
    else
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
  }
  return result;
}
