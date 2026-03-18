/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x140096130
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v6; // edi
  volatile signed __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  char *PoolWithQuotaTag; // rsi
  unsigned int v11; // r14d
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  unsigned __int64 *v14; // rcx
  bool v15; // zf
  __int64 v16; // rcx
  void *v17; // rsi
  __int64 v18; // r15
  unsigned __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+24h] [rbp-54h]
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  char *P; // [rsp+88h] [rbp+10h]
  _KPROCESS *Process; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v23 = v2;
  if ( v2 < v22 )
    return 3221225621LL;
  v3 = v2 - v22;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v21 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v20 = 12 * v4;
  P = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[17];
  v8 = KeAbPreAcquire((ULONG_PTR)&Process[2].Affinity.Bitmap[17], 0LL, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].Affinity.Bitmap[17], 0LL) )
    ExfAcquirePushLockExclusiveEx(&Process[2].Affinity.Bitmap[17], v8, (ULONG_PTR)&Process[2].Affinity.Bitmap[17]);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  PoolWithQuotaTag = (char *)Process[2].Affinity.Bitmap[16];
  if ( PoolWithQuotaTag )
  {
    v11 = *(_DWORD *)PoolWithQuotaTag;
    v12 = *((_DWORD *)PoolWithQuotaTag + 1);
  }
  else
  {
    v11 = 0;
    v12 = 0;
  }
  if ( v11 + 1 > v12 )
  {
    v18 = v12 + 10;
    if ( (unsigned int)v18 < v12 || (v19 = 24 * v18 + 16, v19 >= 0xFFFFFFFF) )
    {
      v6 = -1073741675;
      goto LABEL_26;
    }
    P = (char *)Process[2].Affinity.Bitmap[16];
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v19, 0x46447452u);
    if ( !PoolWithQuotaTag )
    {
      v6 = -1073741670;
      v17 = 0LL;
      goto LABEL_27;
    }
    if ( v11 )
    {
      memmove(PoolWithQuotaTag + 16, P + 16, 24LL * v11);
    }
    else
    {
      *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 4) = 0LL;
      v11 = 1;
    }
    *(_DWORD *)PoolWithQuotaTag = v11;
    *((_DWORD *)PoolWithQuotaTag + 1) = v18;
    PoolWithQuotaTag[12] = 0;
    Process[2].Affinity.Bitmap[16] = (unsigned __int64)PoolWithQuotaTag;
  }
  v13 = 1;
  if ( v11 > 1 )
  {
    v14 = (unsigned __int64 *)(PoolWithQuotaTag + 48);
    do
    {
      if ( v22 < *v14 )
        break;
      ++v13;
      v14 += 3;
    }
    while ( v13 < v11 );
  }
  if ( *(_QWORD *)&PoolWithQuotaTag[24 * v13] + (unsigned __int64)*(unsigned int *)&PoolWithQuotaTag[24 * v13 + 8] <= v22 )
  {
    v15 = v13 == v11;
    if ( v13 >= v11 )
    {
LABEL_23:
      if ( !v15 )
        memmove(
          &PoolWithQuotaTag[16 * v13 + 40 + 8 * v13],
          &PoolWithQuotaTag[16 * v13 + 16 + 8 * v13],
          24LL * (v11 - v13));
      v16 = 3LL * v13;
      *(_QWORD *)&PoolWithQuotaTag[8 * v16 + 16] = a1;
      *(_QWORD *)&PoolWithQuotaTag[8 * v16 + 24] = v22;
      *(_DWORD *)&PoolWithQuotaTag[8 * v16 + 32] = v21;
      *(_DWORD *)&PoolWithQuotaTag[8 * v16 + 36] = v20;
      *(_DWORD *)PoolWithQuotaTag = v11 + 1;
      goto LABEL_26;
    }
    if ( *(_QWORD *)&PoolWithQuotaTag[24 * v13 + 24] >= v23 )
    {
      v15 = v13 == v11;
      goto LABEL_23;
    }
  }
  v6 = -1073741800;
LABEL_26:
  v17 = P;
LABEL_27:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x46447452u);
  return v6;
}
