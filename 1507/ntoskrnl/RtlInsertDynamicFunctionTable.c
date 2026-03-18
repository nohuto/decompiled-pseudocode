/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x14000AE00
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *Process; // rsi
  volatile signed __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  char *PoolWithQuotaTag; // r15
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  unsigned __int64 *v15; // rax
  bool v16; // zf
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *v19; // rdi
  __int16 v20; // ax
  __int64 v21; // r14
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  int v24; // [rsp+20h] [rbp-58h]
  int v25; // [rsp+24h] [rbp-54h]
  unsigned __int64 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+90h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v26 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v27 = v2;
  if ( v2 < v26 )
    return 3221225621LL;
  v3 = v2 - v26;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v25 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v24 = 12 * v4;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[16];
  v9 = KeAbPreAcquire((ULONG_PTR)&Process[2].Affinity.Bitmap[16]);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].Affinity.Bitmap[16], 0LL) )
    ExfAcquirePushLockExclusiveEx(&Process[2].Affinity.Bitmap[16], v9, &Process[2].Affinity.Bitmap[16]);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  PoolWithQuotaTag = (char *)Process[2].Affinity.Bitmap[15];
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
    v21 = v13 + 10;
    if ( (unsigned int)v21 < v13 )
    {
      v18 = -1073741675;
      v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[16];
      goto LABEL_27;
    }
    v22 = 24 * v21 + 16;
    if ( v22 >= 0xFFFFFFFF )
    {
      v18 = -1073741675;
      v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[16];
      goto LABEL_27;
    }
    v23 = Process[2].Affinity.Bitmap[15];
    P = (PVOID)v23;
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v22, 0x46447452u);
    if ( !PoolWithQuotaTag )
    {
      v18 = -1073741670;
      v19 = 0LL;
      v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[16];
      goto LABEL_28;
    }
    if ( v12 )
    {
      memmove(PoolWithQuotaTag + 16, (const void *)(v23 + 16), 24LL * v12);
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
    *((_DWORD *)PoolWithQuotaTag + 1) = v21;
    PoolWithQuotaTag[12] = 0;
    Process[2].Affinity.Bitmap[15] = (unsigned __int64)PoolWithQuotaTag;
    v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[16];
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
      if ( v26 < *v15 )
        break;
      ++v14;
      v15 += 3;
    }
    while ( v14 < v12 );
  }
  if ( *(_QWORD *)&PoolWithQuotaTag[24 * v14] + (unsigned __int64)*(unsigned int *)&PoolWithQuotaTag[24 * v14 + 8] > v26 )
  {
    v18 = -1073741800;
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
      *(_QWORD *)&PoolWithQuotaTag[8 * v17 + 24] = v26;
      *(_DWORD *)&PoolWithQuotaTag[8 * v17 + 32] = v25;
      *(_DWORD *)&PoolWithQuotaTag[8 * v17 + 36] = v24;
      *(_DWORD *)PoolWithQuotaTag = v12 + 1;
      v18 = 0;
      goto LABEL_27;
    }
    if ( *(_QWORD *)&PoolWithQuotaTag[24 * v14 + 24] >= v27 )
    {
      v16 = v14 == v12;
      goto LABEL_24;
    }
    v18 = -1073741800;
  }
LABEL_27:
  v19 = P;
LABEL_28:
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v20 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v20;
  if ( !v20 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v19 )
    ExFreePoolWithTag(v19, 0x46447452u);
  return v18;
}
