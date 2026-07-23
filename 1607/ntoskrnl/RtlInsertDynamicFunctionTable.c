/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x140097DC0
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v6; // r14d
  _KPROCESS *Process; // rsi
  volatile signed __int64 *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  char *PoolWithQuotaTag; // r15
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  unsigned __int64 *v15; // rax
  bool v16; // zf
  __int64 v17; // rcx
  void *v18; // rbx
  __int64 v19; // r14
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  int v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+24h] [rbp-54h]
  unsigned __int64 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v25 = v2;
  if ( v2 < v24 )
    return 3221225621LL;
  v3 = v2 - v24;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v23 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v22 = 12 * v4;
  P = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
  v9 = KeAbPreAcquire((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].Affinity.Bitmap[19], 0LL) )
    ExfAcquirePushLockExclusiveEx(&Process[2].Affinity.Bitmap[19], v9, &Process[2].Affinity.Bitmap[19]);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  PoolWithQuotaTag = (char *)Process[2].Affinity.Bitmap[18];
  if ( PoolWithQuotaTag )
  {
    v12 = *(_DWORD *)PoolWithQuotaTag;
    v13 = *((_DWORD *)PoolWithQuotaTag + 1);
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  if ( v12 + 1 > v13 )
  {
    v19 = v13 + 10;
    if ( (unsigned int)v19 < v13 )
    {
      v6 = -1073741675;
      goto LABEL_27;
    }
    v20 = 24 * v19 + 16;
    if ( v20 >= 0xFFFFFFFF )
    {
      v6 = -1073741675;
      goto LABEL_27;
    }
    v21 = Process[2].Affinity.Bitmap[18];
    P = (PVOID)v21;
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v20, 0x46447452u);
    if ( !PoolWithQuotaTag )
    {
      v18 = 0LL;
      v6 = -1073741670;
      goto LABEL_28;
    }
    if ( v12 )
    {
      memmove(PoolWithQuotaTag + 16, (const void *)(v21 + 16), 24LL * v12);
      v14 = 1;
    }
    else
    {
      *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 4) = 0LL;
      v14 = 1;
      v12 = 1;
    }
    *(_DWORD *)PoolWithQuotaTag = v12;
    *((_DWORD *)PoolWithQuotaTag + 1) = v19;
    PoolWithQuotaTag[12] = 0;
    Process[2].Affinity.Bitmap[18] = (unsigned __int64)PoolWithQuotaTag;
    v6 = 0;
  }
  else
  {
    v14 = 1;
  }
  if ( v12 > 1 )
  {
    v15 = (unsigned __int64 *)(PoolWithQuotaTag + 48);
    do
    {
      if ( v24 < *v15 )
        break;
      ++v14;
      v15 += 3;
    }
    while ( v14 < v12 );
  }
  if ( *(_QWORD *)&PoolWithQuotaTag[24 * v14] + (unsigned __int64)*(unsigned int *)&PoolWithQuotaTag[24 * v14 + 8] > v24 )
  {
    v6 = -1073741800;
  }
  else
  {
    v16 = v14 == v12;
    if ( v14 >= v12 )
    {
LABEL_24:
      if ( !v16 )
        memmove(
          &PoolWithQuotaTag[16 * v14 + 40 + 8 * v14],
          &PoolWithQuotaTag[16 * v14 + 16 + 8 * v14],
          24LL * (v12 - v14));
      v17 = 3LL * v14;
      *(_QWORD *)&PoolWithQuotaTag[8 * v17 + 16] = a1;
      *(_QWORD *)&PoolWithQuotaTag[8 * v17 + 24] = v24;
      *(_DWORD *)&PoolWithQuotaTag[8 * v17 + 32] = v23;
      *(_DWORD *)&PoolWithQuotaTag[8 * v17 + 36] = v22;
      *(_DWORD *)PoolWithQuotaTag = v12 + 1;
      goto LABEL_27;
    }
    if ( *(_QWORD *)&PoolWithQuotaTag[24 * v14 + 24] >= v25 )
    {
      v16 = v14 == v12;
      goto LABEL_24;
    }
    v6 = -1073741800;
  }
LABEL_27:
  v18 = P;
LABEL_28:
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x46447452u);
  return v6;
}
