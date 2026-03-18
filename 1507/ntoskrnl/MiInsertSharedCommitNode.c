/*
 * XREFs of MiInsertSharedCommitNode @ 0x1404B7640
 * Callers:
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MmLinkJobProcess @ 0x14041BBF8 (MmLinkJobProcess.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiSectionOpen @ 0x1404B5C58 (MiSectionOpen.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     MiIncludeSharedCommit @ 0x14008AF50 (MiIncludeSharedCommit.c)
 *     MiChargeControlAreaPartition @ 0x14008AF80 (MiChargeControlAreaPartition.c)
 *     MiReleaseControlAreaPartition @ 0x14008B010 (MiReleaseControlAreaPartition.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiSharedCommitCompare @ 0x1404B7DA0 (MiSharedCommitCompare.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  _QWORD *v15; // rsi
  int v16; // eax
  __int16 v17; // ax
  __int16 v18; // ax
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v22; // r9
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  char v25; // [rsp+20h] [rbp-98h]
  char v26; // [rsp+21h] [rbp-97h]
  __int64 v27; // [rsp+28h] [rbp-90h]
  __int64 v28; // [rsp+30h] [rbp-88h]
  int inserted; // [rsp+38h] [rbp-80h]
  __int64 v30; // [rsp+40h] [rbp-78h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-68h]
  unsigned __int64 *v32; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *v33; // [rsp+60h] [rbp-58h]
  unsigned __int64 v34; // [rsp+68h] [rbp-50h]
  char v35[24]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v36; // [rsp+88h] [rbp-30h]
  unsigned __int64 *v37; // [rsp+D8h] [rbp+20h]
  bool v38; // [rsp+D8h] [rbp+20h]

  if ( !MiIncludeSharedCommit(a1) )
    return 0LL;
  v26 = 0;
  if ( (v6 & 1) == 0 && (a3 & 2) == 0 )
  {
    result = MiChargeControlAreaPartition((__int64 *)a1, v6);
    if ( (int)result < 0 )
      return result;
    v26 = 1;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 0LL;
  v25 = 0;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v9 = a2;
    v27 = a2;
    if ( (*(_DWORD *)(a2 + 1716) & 0x40) == 0 )
    {
      v34 = 0LL;
      NumberOfBytes = 64LL;
      goto LABEL_9;
    }
    return 0LL;
  }
  v27 = 0LL;
  NumberOfBytes = 40LL;
  v34 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = 0LL;
LABEL_9:
  v28 = *(_QWORD *)a1;
  v32 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
  CurrentThread = KeGetCurrentThread();
  v36 = a2;
  v33 = CurrentThread;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v37 = (unsigned __int64 *)(v9 + 1912);
    v11 = KeAbPreAcquire(v9 + 1912, 0LL, 0LL, v7);
    v30 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx(v37, v11, (ULONG_PTR)v37, v7);
      v11 = v30;
    }
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire(v28 + 40, 0LL, 0LL, v7);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v28 + 40), v12, v28 + 40, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
  }
  v38 = 0;
  v15 = (_QWORD *)*v32;
  if ( !*v32 )
    goto LABEL_38;
  while ( 1 )
  {
    v16 = MiSharedCommitCompare(v35, v15);
    if ( v16 <= 0 )
      break;
    v20 = (_QWORD *)v15[1];
    if ( !v20 )
    {
      v38 = 1;
      goto LABEL_38;
    }
LABEL_47:
    v15 = v20;
  }
  if ( v16 >= 0 )
  {
    ++v15[4];
    goto LABEL_23;
  }
  v20 = (_QWORD *)*v15;
  if ( *v15 )
    goto LABEL_47;
  v38 = 0;
LABEL_38:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E53694Du);
  v22 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = a2;
    PoolWithTag[4] = 1LL;
    if ( v27 )
    {
      PoolWithTag[7] = a1;
      v23 = *(_QWORD **)(v27 + 1928);
      v24 = PoolWithTag + 5;
      *v24 = v27 + 1920;
      v24[1] = v23;
      if ( *v23 != v27 + 1920 )
        __fastfail(3u);
      *v23 = v24;
      *(_QWORD *)(v27 + 1928) = v24;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 1904), *(_QWORD *)(v28 + 16));
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 1312), *(_QWORD *)(v28 + 16));
    }
    RtlAvlInsertNodeEx(v32, (unsigned __int64)v15, v38, v22);
    if ( v27 )
    {
      if ( (*(_DWORD *)(v27 + 1716) & 0x20) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v27 + 944) | 1LL, 3LL);
        if ( inserted < 0 )
          v25 = 1;
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 40));
    KeAbPostRelease(v28 + 40);
    v17 = v33->SpecialApcDisable + 1;
    v33->SpecialApcDisable = v17;
    if ( !v17 && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 1912), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v27 + 1912));
    KeAbPostRelease(v27 + 1912);
    v18 = v33->SpecialApcDisable + 1;
    v33->SpecialApcDisable = v18;
    if ( !v18 && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v25 == 1 )
  {
    MiRemoveSharedCommitNode(a1, v27, a3);
    return (unsigned int)inserted;
  }
  else
  {
    v19 = inserted;
    if ( inserted < 0 )
    {
      if ( v26 )
        MiReleaseControlAreaPartition((__int64 *)a1, v27);
    }
  }
  return v19;
}
