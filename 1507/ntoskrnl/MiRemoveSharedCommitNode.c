/*
 * XREFs of MiRemoveSharedCommitNode @ 0x1404B7A60
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MmLinkJobProcess @ 0x14041BBF8 (MmLinkJobProcess.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiSectionClose @ 0x1404B5C34 (MiSectionClose.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiDeletePartialCloneVad @ 0x1406AA6A8 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiIncludeSharedCommit @ 0x14008AF50 (MiIncludeSharedCommit.c)
 *     MiReleaseControlAreaPartition @ 0x14008B010 (MiReleaseControlAreaPartition.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiSharedCommitCompare @ 0x1404B7DA0 (MiSharedCommitCompare.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 *v8; // rcx
  unsigned __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 *v17; // rax
  _QWORD *v18; // rsi
  int v19; // eax
  struct _KTHREAD *v21; // rdi
  __int16 v22; // ax
  __int16 v23; // ax
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  struct _KTHREAD *v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v29; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v30; // [rsp+38h] [rbp-60h]
  char v31[24]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+58h] [rbp-40h]
  int v33; // [rsp+A8h] [rbp+10h]
  __int64 v34; // [rsp+B8h] [rbp+20h]

  v32 = a2;
  if ( (a2 & 1) != 0 )
  {
    v9 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = 0LL;
    v28 = 0LL;
  }
  else
  {
    v28 = a2;
    if ( !MiIncludeSharedCommit(a1) )
      return;
    if ( (a3 & 2) == 0 )
    {
      MiReleaseControlAreaPartition(v8, v7);
      v7 = a2;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || (*(_DWORD *)(a2 + 1716) & 0x40) != 0 )
      return;
    v9 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v34 = *(_QWORD *)a1;
  v29 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
  v33 = a3 & 1;
  v27 = CurrentThread;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v30 = (unsigned __int64 *)(v7 + 1912);
    v11 = KeAbPreAcquire(v7 + 1912, 0LL, 0LL, a4);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
      ExfAcquirePushLockExclusiveEx(v30, v11, (ULONG_PTR)v30, a4);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    CurrentThread = v27;
  }
  v13 = a3 & 2;
  if ( !v13 )
  {
    --CurrentThread->SpecialApcDisable;
    v14 = KeAbPreAcquire(v34 + 40, 0LL, 0LL, a4);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v34 + 40), v14, v34 + 40, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
  }
  v17 = v29;
  v18 = (_QWORD *)*v29;
  if ( *v29 )
  {
    do
    {
      v19 = MiSharedCommitCompare(v31, v18);
      if ( v19 < 0 )
      {
        v18 = (_QWORD *)*v18;
      }
      else
      {
        if ( v19 <= 0 )
          break;
        v18 = (_QWORD *)v18[1];
      }
    }
    while ( v18 );
    v17 = v29;
  }
  if ( v18[4]-- == 1LL )
  {
    RtlAvlRemoveNode(v17, (__int64)v18);
    v24 = -*(_QWORD *)(v34 + 16);
    if ( v28 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 1904), v24);
      v25 = v18[5];
      v26 = (_QWORD *)v18[6];
      if ( *(_QWORD **)(v25 + 8) != v18 + 5 || (_QWORD *)*v26 != v18 + 5 )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      if ( (*(_DWORD *)(v28 + 1716) & 0x20) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v28 + 944) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 1312), v24);
    }
  }
  else
  {
    v18 = 0LL;
  }
  if ( v13 )
  {
    v21 = v27;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v34 + 40));
    KeAbPostRelease(v34 + 40);
    v21 = v27;
    v22 = v27->SpecialApcDisable + 1;
    v27->SpecialApcDisable = v22;
    if ( !v22 && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( !v33 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 1912), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 1912));
    KeAbPostRelease(v28 + 1912);
    v23 = v21->SpecialApcDisable + 1;
    v21->SpecialApcDisable = v23;
    if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
}
