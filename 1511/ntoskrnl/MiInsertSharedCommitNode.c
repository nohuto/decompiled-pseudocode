/*
 * XREFs of MiInsertSharedCommitNode @ 0x14041B4F0
 * Callers:
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MmLinkJobProcess @ 0x1403E80C0 (MmLinkJobProcess.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiSectionOpen @ 0x14041BEDC (MiSectionOpen.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiIncludeSharedCommit @ 0x14006DBC0 (MiIncludeSharedCommit.c)
 *     MiChargeControlAreaPartition @ 0x14006DBF0 (MiChargeControlAreaPartition.c)
 *     MiReleaseControlAreaPartition @ 0x14006DC60 (MiReleaseControlAreaPartition.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rax
  __int16 v17; // ax
  __int16 v18; // ax
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v22; // r9
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  char v25; // [rsp+20h] [rbp-58h]
  char v26; // [rsp+21h] [rbp-57h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  int inserted; // [rsp+38h] [rbp-40h]
  __int64 v30; // [rsp+40h] [rbp-38h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-28h]
  unsigned __int64 v32; // [rsp+58h] [rbp-20h]
  unsigned __int64 *v33; // [rsp+60h] [rbp-18h]
  unsigned __int64 *v34; // [rsp+98h] [rbp+20h]
  bool v35; // [rsp+98h] [rbp+20h]

  if ( !MiIncludeSharedCommit(a1) )
    return 0LL;
  v25 = 0;
  if ( (v6 & 1) == 0 && (a3 & 2) == 0 )
  {
    result = MiChargeControlAreaPartition(a1, v6);
    if ( (int)result < 0 )
      return result;
    v25 = 1;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 0LL;
  v26 = 0;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v8 = a2;
    v28 = a2;
    if ( (*(_DWORD *)(a2 + 1724) & 0x40) == 0 )
    {
      v32 = 0LL;
      NumberOfBytes = 64LL;
      goto LABEL_9;
    }
    return 0LL;
  }
  v28 = 0LL;
  NumberOfBytes = 40LL;
  v32 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = 0LL;
LABEL_9:
  v9 = *(_QWORD *)a1;
  v27 = *(_QWORD *)a1;
  v33 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
  CurrentThread = KeGetCurrentThread();
  v30 = (__int64)CurrentThread;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v34 = (unsigned __int64 *)(v8 + 1896);
    v11 = KeAbPreAcquire(v8 + 1896, 0LL, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
      ExfAcquirePushLockExclusiveEx(v34, v11, (ULONG_PTR)v34);
    v9 = v27;
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    CurrentThread = (struct _KTHREAD *)v30;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v13 = KeAbPreAcquire(v9 + 40, 0LL, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v27 + 40), v13, v27 + 40);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
  }
  v35 = 0;
  v15 = (_QWORD *)*v33;
  if ( !*v33 )
    goto LABEL_39;
  while ( 1 )
  {
    v16 = v15[3];
    if ( a2 <= v16 )
      break;
    v20 = (_QWORD *)v15[1];
    if ( !v20 )
    {
      v35 = 1;
      goto LABEL_39;
    }
LABEL_48:
    v15 = v20;
  }
  if ( a2 >= v16 )
  {
    ++v15[4];
    goto LABEL_24;
  }
  v20 = (_QWORD *)*v15;
  if ( *v15 )
    goto LABEL_48;
  v35 = 0;
LABEL_39:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E53694Du);
  v22 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = a2;
    PoolWithTag[4] = 1LL;
    if ( v28 )
    {
      PoolWithTag[7] = a1;
      v23 = *(_QWORD **)(v28 + 1912);
      v24 = PoolWithTag + 5;
      *v24 = v28 + 1904;
      v24[1] = v23;
      if ( *v23 != v28 + 1904 )
        __fastfail(3u);
      *v23 = v24;
      *(_QWORD *)(v28 + 1912) = v24;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 1888), *(_QWORD *)(v27 + 16));
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 1312), *(_QWORD *)(v27 + 16));
    }
    RtlAvlInsertNodeEx(v33, (unsigned __int64)v15, v35, v22);
    if ( v28 )
    {
      if ( (*(_DWORD *)(v28 + 1724) & 0x20) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v28 + 944) | 1LL, 3LL);
        if ( inserted < 0 )
          v26 = 1;
      }
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_24:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v27 + 40));
    KeAbPostRelease(v27 + 40);
    v17 = *(_WORD *)(v30 + 486) + 1;
    *(_WORD *)(v30 + 486) = v17;
    if ( !v17 && *(_QWORD *)(v30 + 152) != v30 + 152 )
      KiCheckForKernelApcDelivery(v30);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 1896), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 1896));
    KeAbPostRelease(v28 + 1896);
    v18 = *(_WORD *)(v30 + 486) + 1;
    *(_WORD *)(v30 + 486) = v18;
    if ( !v18 && *(_QWORD *)(v30 + 152) != v30 + 152 )
      KiCheckForKernelApcDelivery(v30);
  }
  if ( v26 == 1 )
  {
    MiRemoveSharedCommitNode(a1, v28, a3);
    return (unsigned int)inserted;
  }
  else
  {
    v19 = inserted;
    if ( inserted < 0 )
    {
      if ( v25 )
        MiReleaseControlAreaPartition(a1, v28);
    }
  }
  return v19;
}
