/*
 * XREFs of MiInsertSharedCommitNode @ 0x14042D550
 * Callers:
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiSectionOpen @ 0x14042D27C (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmLinkJobProcess @ 0x1404D6388 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     MiIncludeSharedCommit @ 0x140027730 (MiIncludeSharedCommit.c)
 *     MiChargeControlAreaPartition @ 0x140027760 (MiChargeControlAreaPartition.c)
 *     MiReleaseControlAreaPartition @ 0x1400279F0 (MiReleaseControlAreaPartition.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v11; // rax
  _BYTE *v12; // rsi
  _BYTE *v13; // rax
  _BYTE *v14; // rsi
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rax
  __int16 v17; // ax
  __int16 v18; // ax
  _QWORD *v19; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  char v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-38h]
  int inserted; // [rsp+48h] [rbp-30h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-28h]
  unsigned __int64 v29; // [rsp+58h] [rbp-20h]
  unsigned __int64 *v30; // [rsp+60h] [rbp-18h]
  unsigned __int64 *v31; // [rsp+98h] [rbp+20h]
  bool v32; // [rsp+98h] [rbp+20h]

  if ( !MiIncludeSharedCommit(a1) )
    return 0LL;
  v23 = 0;
  if ( (v6 & 1) == 0 && (a3 & 2) == 0 )
  {
    result = MiChargeControlAreaPartition((__int64 *)a1, v6);
    if ( (int)result < 0 )
      return result;
    v23 = 1;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v8 = a2;
    v25 = a2;
    if ( (*(_DWORD *)(a2 + 1740) & 0x40) == 0 )
    {
      v29 = 0LL;
      NumberOfBytes = 64LL;
      goto LABEL_9;
    }
    return 0LL;
  }
  v25 = 0LL;
  NumberOfBytes = 40LL;
  v29 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = 0LL;
LABEL_9:
  v9 = *(_QWORD *)a1;
  v24 = *(_QWORD *)a1;
  v30 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
  CurrentThread = KeGetCurrentThread();
  v26 = (__int64)CurrentThread;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v31 = (unsigned __int64 *)(v8 + 1912);
    v11 = (_BYTE *)KeAbPreAcquire(v8 + 1912, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0LL) )
      ExfAcquirePushLockExclusiveEx(v31, v11, (ULONG_PTR)v31);
    v9 = v24;
    if ( v12 )
      v12[26] |= 1u;
  }
  if ( (a3 & 2) == 0 )
  {
    --*(_WORD *)(v26 + 486);
    v13 = (_BYTE *)KeAbPreAcquire(v9 + 40, 0LL, 0);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v24 + 40), v13, v24 + 40);
    if ( v14 )
      v14[26] |= 1u;
  }
  v32 = 0;
  v15 = (_QWORD *)*v30;
  if ( !*v30 )
    goto LABEL_40;
  while ( 1 )
  {
    v16 = v15[3];
    if ( a2 < v16 )
      break;
    if ( a2 <= v16 )
    {
      ++v15[4];
      goto LABEL_23;
    }
    v19 = (_QWORD *)v15[1];
    if ( !v19 )
    {
      v32 = 1;
      goto LABEL_40;
    }
LABEL_36:
    v15 = v19;
  }
  v19 = (_QWORD *)*v15;
  if ( *v15 )
    goto LABEL_36;
  v32 = 0;
LABEL_40:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E53694Du);
  if ( PoolWithTag )
  {
    PoolWithTag[3] = a2;
    PoolWithTag[4] = 1LL;
    if ( v25 )
    {
      PoolWithTag[7] = a1;
      v21 = PoolWithTag + 5;
      v22 = *(_QWORD **)(v25 + 1928);
      if ( *v22 != v25 + 1920 )
        __fastfail(3u);
      *v21 = v25 + 1920;
      PoolWithTag[6] = v22;
      *v22 = v21;
      *(_QWORD *)(v25 + 1928) = v21;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 1904), *(_QWORD *)(v24 + 16));
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 1320), *(_QWORD *)(v24 + 16));
    }
    RtlAvlInsertNodeEx(v30, (unsigned __int64)v15, v32, (unsigned __int64)PoolWithTag);
    if ( v25 )
    {
      if ( (*(_DWORD *)(v25 + 1740) & 0x20) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v25 + 944) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode(a1, v25, a3 | 7u);
      }
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_23:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v24 + 40));
    KeAbPostRelease(v24 + 40);
    v17 = *(_WORD *)(v26 + 486) + 1;
    *(_WORD *)(v26 + 486) = v17;
    if ( !v17 && *(_QWORD *)(v26 + 152) != v26 + 152 )
      KiCheckForKernelApcDelivery(v26);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 1912), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 1912));
    KeAbPostRelease(v25 + 1912);
    v18 = *(_WORD *)(v26 + 486) + 1;
    *(_WORD *)(v26 + 486) = v18;
    if ( !v18 && *(_QWORD *)(v26 + 152) != v26 + 152 )
      KiCheckForKernelApcDelivery(v26);
  }
  if ( inserted < 0 )
  {
    if ( v23 )
      MiReleaseControlAreaPartition((__int64 *)a1, v25);
  }
  return (unsigned int)inserted;
}
