/*
 * XREFs of MiRemoveSharedCommitNode @ 0x14041B910
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MmLinkJobProcess @ 0x1403E80C0 (MmLinkJobProcess.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 *     MiSectionClose @ 0x14041BEFC (MiSectionClose.c)
 *     MiDeletePartialCloneVad @ 0x14062CC30 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     MiIncludeSharedCommit @ 0x14006DBC0 (MiIncludeSharedCommit.c)
 *     MiReleaseControlAreaPartition @ 0x14006DC60 (MiReleaseControlAreaPartition.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 *v15; // rax
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // rsi
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rsi
  __int16 v23; // ax
  __int64 v24; // rcx
  __int16 v25; // ax
  __int64 v26; // r8
  _QWORD *v27; // rax
  unsigned __int64 v28; // r9
  struct _KTHREAD *v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v31; // [rsp+30h] [rbp-38h]
  unsigned __int64 v32; // [rsp+38h] [rbp-30h]
  unsigned __int64 *v33; // [rsp+40h] [rbp-28h]
  int v34; // [rsp+78h] [rbp+10h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v28 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = 0LL;
    v32 = v28;
    v30 = 0LL;
LABEL_8:
    CurrentThread = KeGetCurrentThread();
    v9 = *(_QWORD *)a1;
    v29 = CurrentThread;
    v35 = *(_QWORD *)a1;
    v31 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
    v34 = a3 & 1;
    if ( (a3 & 1) == 0 )
    {
      --CurrentThread->SpecialApcDisable;
      v33 = (unsigned __int64 *)(v6 + 1896);
      v10 = KeAbPreAcquire(v6 + 1896, 0LL, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
        ExfAcquirePushLockExclusiveEx(v33, v10, (ULONG_PTR)v33);
      v9 = v35;
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      CurrentThread = v29;
    }
    v12 = a3 & 2;
    if ( !v12 )
    {
      --CurrentThread->SpecialApcDisable;
      v13 = KeAbPreAcquire(v9 + 40, 0LL, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v35 + 40), v13, v35 + 40);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
    }
    v15 = v31;
    v16 = (_QWORD *)*v31;
    if ( *v31 )
    {
      do
      {
        v17 = v16[3];
        if ( a2 < v17 )
        {
          v16 = (_QWORD *)*v16;
        }
        else
        {
          if ( a2 <= v17 )
            break;
          v16 = (_QWORD *)v16[1];
        }
      }
      while ( v16 );
      v15 = v31;
    }
    if ( v16[4]-- == 1LL )
    {
      RtlAvlRemoveNode(v15, (__int64)v16);
      if ( !v30 )
      {
        v19 = v35;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 1312), -*(_QWORD *)(v35 + 16));
        goto LABEL_26;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 1888), -*(_QWORD *)(v35 + 16));
      v26 = v16[5];
      v27 = (_QWORD *)v16[6];
      if ( *(_QWORD **)(v26 + 8) != v16 + 5 || (_QWORD *)*v27 != v16 + 5 )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      if ( (*(_DWORD *)(v30 + 1724) & 0x20) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v30 + 944) | 1LL, 3LL);
    }
    else
    {
      v16 = 0LL;
    }
    v19 = v35;
LABEL_26:
    if ( v12 )
    {
      v22 = v29;
    }
    else
    {
      v20 = v19 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 40));
      KeAbPostRelease(v20);
      v22 = v29;
      v23 = v29->SpecialApcDisable + 1;
      v29->SpecialApcDisable = v23;
      if ( !v23 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
        KiCheckForKernelApcDelivery(v21);
    }
    if ( !v34 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 1896), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v30 + 1896));
      KeAbPostRelease(v30 + 1896);
      v25 = v22->SpecialApcDisable + 1;
      v22->SpecialApcDisable = v25;
      if ( !v25 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
        KiCheckForKernelApcDelivery(v24);
    }
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    return;
  }
  v30 = a2;
  if ( MiIncludeSharedCommit(a1) )
  {
    if ( (a3 & 2) == 0 )
    {
      MiReleaseControlAreaPartition(v7, v6);
      v6 = a2;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 && (*(_DWORD *)(a2 + 1724) & 0x40) == 0 )
    {
      v32 = 0LL;
      goto LABEL_8;
    }
  }
}
