/*
 * XREFs of MiRemoveSharedCommitNode @ 0x14042D940
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiSectionClose @ 0x14042D1A8 (MiSectionClose.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmLinkJobProcess @ 0x1404D6388 (MmLinkJobProcess.c)
 *     MiDeletePartialCloneVad @ 0x140663220 (MiDeletePartialCloneVad.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140027730 (MiIncludeSharedCommit.c)
 *     MiReleaseControlAreaPartition @ 0x1400279F0 (MiReleaseControlAreaPartition.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  _BYTE *v11; // rax
  _BYTE *v12; // rdi
  unsigned __int64 *v13; // rax
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rax
  bool v16; // zf
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rsi
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 v22; // ax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h]
  struct _KTHREAD *v29; // [rsp+30h] [rbp-38h]
  unsigned __int64 *v30; // [rsp+38h] [rbp-30h]
  unsigned __int64 v31; // [rsp+40h] [rbp-28h]
  unsigned __int64 *v32; // [rsp+78h] [rbp+10h]
  int v33; // [rsp+78h] [rbp+10h]
  int v34; // [rsp+88h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v26 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = 0LL;
    v31 = v26;
    v27 = 0LL;
LABEL_8:
    CurrentThread = KeGetCurrentThread();
    v28 = *(_QWORD *)a1;
    v30 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
    v34 = a3 & 1;
    v29 = CurrentThread;
    if ( (a3 & 1) == 0 )
    {
      --CurrentThread->SpecialApcDisable;
      v32 = (unsigned __int64 *)(v6 + 1912);
      v9 = (_BYTE *)KeAbPreAcquire(v6 + 1912, 0LL, 0);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
        ExfAcquirePushLockExclusiveEx(v32, v9, (ULONG_PTR)v32);
      if ( v10 )
        v10[26] |= 1u;
      CurrentThread = v29;
    }
    v33 = a3 & 2;
    if ( (a3 & 2) == 0 )
    {
      --CurrentThread->SpecialApcDisable;
      v11 = (_BYTE *)KeAbPreAcquire(v28 + 40, 0LL, 0);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v28 + 40), v11, v28 + 40);
      if ( v12 )
        v12[26] |= 1u;
    }
    v13 = v30;
    v14 = (_QWORD *)*v30;
    if ( *v30 )
    {
      do
      {
        v15 = v14[3];
        if ( a2 < v15 )
        {
          v14 = (_QWORD *)*v14;
        }
        else
        {
          if ( a2 <= v15 )
            break;
          v14 = (_QWORD *)v14[1];
        }
      }
      while ( v14 );
      v13 = v30;
    }
    v16 = v14[4]-- == 1LL;
    if ( v16 )
    {
      RtlAvlRemoveNode(v13, (__int64)v14);
      v23 = -*(_QWORD *)(v28 + 16);
      if ( v27 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 1904), v23);
        v24 = v14[5];
        v25 = (_QWORD *)v14[6];
        if ( *(_QWORD **)(v24 + 8) != v14 + 5 || (_QWORD *)*v25 != v14 + 5 )
          __fastfail(3u);
        *v25 = v24;
        v16 = (a3 & 4) == 0;
        v17 = v27;
        *(_QWORD *)(v24 + 8) = v25;
        if ( v16 && (*(_DWORD *)(v27 + 1740) & 0x20) != 0 )
          MiRemoveSharedCommitNode(a1, *(_QWORD *)(v27 + 944) | 1LL, 3LL);
        goto LABEL_26;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 1320), v23);
    }
    else
    {
      v14 = 0LL;
    }
    v17 = v27;
LABEL_26:
    if ( v33 )
    {
      v19 = v29;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 40));
      KeAbPostRelease(v28 + 40);
      v19 = v29;
      v20 = v29->SpecialApcDisable + 1;
      v29->SpecialApcDisable = v20;
      if ( !v20 && ($2B8565053CDC740D4E4887693DD8AC9E *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
        KiCheckForKernelApcDelivery(v18);
    }
    if ( !v34 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 1912), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 1912));
      KeAbPostRelease(v17 + 1912);
      v22 = v19->SpecialApcDisable + 1;
      v19->SpecialApcDisable = v22;
      if ( !v22 && ($2B8565053CDC740D4E4887693DD8AC9E *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
        KiCheckForKernelApcDelivery(v21);
    }
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    return;
  }
  v27 = a2;
  if ( MiIncludeSharedCommit(a1) )
  {
    if ( (a3 & 2) == 0 )
    {
      MiReleaseControlAreaPartition(v7, v6);
      v6 = a2;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 && (*(_DWORD *)(a2 + 1740) & 0x40) == 0 )
    {
      v31 = 0LL;
      goto LABEL_8;
    }
  }
}
