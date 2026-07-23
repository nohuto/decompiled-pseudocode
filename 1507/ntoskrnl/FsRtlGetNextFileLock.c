/*
 * XREFs of FsRtlGetNextFileLock @ 0x140131104
 * Callers:
 *     VerifierFsRtlGetNextFileLock @ 0x140741D04 (VerifierFsRtlGetNextFileLock.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRealSuccessor @ 0x140104898 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140105568 (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x14010605C (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

PFILE_LOCK_INFO __stdcall FsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  char *LockInformation; // rbx
  __int128 v4; // xmm0
  PRTL_SPLAY_LINKS LastReturnedLock; // rdi
  char v6; // r14
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  volatile signed __int32 *v9; // rcx
  _RTL_SPLAY_LINKS *v10; // rax
  __int64 v11; // rax
  PFILE_LOCK_INFO result; // rax
  __int64 i; // rcx
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rax
  _RTL_SPLAY_LINKS *v15; // rcx
  __int64 j; // rcx
  __int64 v17; // r14
  __int64 v18; // r15
  __int32 v19; // r12d
  _RTL_SPLAY_LINKS *v20; // rsi
  _RTL_SPLAY_LINKS *v21; // r13
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  _RTL_SPLAY_LINKS *FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *Parent; // rbx
  bool v26; // cf
  PRTL_SPLAY_LINKS v27; // rax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  PRTL_SPLAY_LINKS Links; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int64 *v32; // [rsp+38h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+40h] [rbp-40h]
  __int128 v34; // [rsp+48h] [rbp-38h] BYREF
  __m256i v35; // [rsp+58h] [rbp-28h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]
  char v38; // [rsp+D0h] [rbp+50h] BYREF
  char v39; // [rsp+D8h] [rbp+58h]

  LockInformation = (char *)FileLock->LockInformation;
  if ( !LockInformation )
    return 0LL;
  v4 = *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart;
  LastReturnedLock = (PRTL_SPLAY_LINKS)FileLock->LastReturnedLock;
  v6 = 0;
  v7 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock;
  v39 = 0;
  v34 = v4;
  v8 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId;
  v9 = (volatile signed __int32 *)(LockInformation + 24);
  *(_OWORD *)v35.m256i_i8 = v7;
  v32 = (volatile signed __int64 *)(LockInformation + 24);
  *(_OWORD *)&v35.m256i_u64[2] = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v9);
  }
  else if ( _interlockedbittestandset64(v9, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v9);
  }
  if ( Restart )
  {
    v10 = (_RTL_SPLAY_LINKS *)*((_QWORD *)LockInformation + 5);
    if ( v10 )
    {
      do
      {
        LastReturnedLock = v10;
        v10 = v10->LeftChild;
      }
      while ( v10 );
      v22 = *(_OWORD *)&LastReturnedLock[1].RightChild;
      v34 = *(_OWORD *)&LastReturnedLock[1].Parent;
      v23 = *(_OWORD *)&LastReturnedLock[2].LeftChild;
      goto LABEL_64;
    }
    v11 = *((_QWORD *)LockInformation + 4);
    if ( !v11 )
      goto LABEL_8;
    for ( i = *(_QWORD *)(v11 + 8); i; i = *(_QWORD *)(i + 8) )
      v11 = i;
    goto LABEL_38;
  }
  if ( v35.m256i_i8[0] )
  {
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        *((_QWORD **)LockInformation + 5),
                                                        (unsigned __int64 *)&v34,
                                                        &v35.m256i_u64[3],
                                                        &Links,
                                                        &v38);
    if ( FirstOverlappingExclusiveNode )
    {
      v17 = v35.m256i_i64[2];
      v18 = v35.m256i_i64[1];
      v19 = v35.m256i_i32[1];
      v20 = (_RTL_SPLAY_LINKS *)*((_QWORD *)&v34 + 1);
      v21 = (_RTL_SPLAY_LINKS *)v34;
      while ( LastReturnedLock != FirstOverlappingExclusiveNode
           || v21 != FirstOverlappingExclusiveNode[1].Parent
           || v20 != FirstOverlappingExclusiveNode[1].LeftChild
           || v19 != HIDWORD(FirstOverlappingExclusiveNode[1].RightChild)
           || (_RTL_SPLAY_LINKS *)v18 != FirstOverlappingExclusiveNode[2].Parent
           || (_RTL_SPLAY_LINKS *)v17 != FirstOverlappingExclusiveNode[2].LeftChild )
      {
        if ( FirstOverlappingExclusiveNode[1].LeftChild || v20 )
          goto LABEL_30;
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        if ( !FirstOverlappingExclusiveNode )
          goto LABEL_19;
      }
      v15 = FirstOverlappingExclusiveNode;
    }
    else
    {
      if ( v38 )
      {
        FirstOverlappingExclusiveNode = Links;
        goto LABEL_30;
      }
      v15 = Links;
      if ( !Links )
      {
LABEL_19:
        v11 = *((_QWORD *)LockInformation + 4);
        if ( !v11 )
        {
          v6 = v39;
          goto LABEL_8;
        }
        for ( j = *(_QWORD *)(v11 + 8); j; j = *(_QWORD *)(j + 8) )
          v11 = j;
LABEL_38:
        LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v11 - 24);
        v22 = *(_OWORD *)&LastReturnedLock[1].Parent;
        v34 = *(_OWORD *)&LastReturnedLock->LeftChild;
        v23 = *(_OWORD *)&LastReturnedLock[1].RightChild;
        goto LABEL_64;
      }
    }
    FirstOverlappingExclusiveNode = RtlRealSuccessor(v15);
LABEL_30:
    if ( FirstOverlappingExclusiveNode )
    {
      LastReturnedLock = FirstOverlappingExclusiveNode;
      v22 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].RightChild;
      v34 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].Parent;
      v23 = *(_OWORD *)&FirstOverlappingExclusiveNode[2].LeftChild;
      goto LABEL_64;
    }
    goto LABEL_19;
  }
  FirstOverlappingSharedNode = (_RTL_SPLAY_LINKS *)FsRtlFindFirstOverlappingSharedNode(
                                                     *((_QWORD *)LockInformation + 4),
                                                     (unsigned __int64 *)&v34,
                                                     &v35.m256i_u64[3],
                                                     &Links,
                                                     &v38);
  if ( FirstOverlappingSharedNode )
    goto LABEL_45;
  if ( v38 )
  {
    FirstOverlappingSharedNode = Links;
  }
  else
  {
    if ( !Links )
      goto LABEL_8;
    FirstOverlappingSharedNode = RtlRealSuccessor(Links);
  }
  if ( FirstOverlappingSharedNode )
  {
LABEL_45:
    if ( FirstOverlappingSharedNode != (_RTL_SPLAY_LINKS *)24 )
    {
      Parent = FirstOverlappingSharedNode[-1].Parent;
      if ( !Parent )
        goto LABEL_54;
      while ( 1 )
      {
        if ( LastReturnedLock == Parent )
        {
          v26 = (_RTL_SPLAY_LINKS *)v34 < Parent->LeftChild;
          if ( (_RTL_SPLAY_LINKS *)v34 != Parent->LeftChild )
            goto LABEL_59;
          if ( (_RTL_SPLAY_LINKS *)*((_QWORD *)&v34 + 1) == Parent->RightChild
            && v35.m256i_i32[1] == HIDWORD(Parent[1].Parent)
            && *(_OWORD *)&v35.m256i_u64[1] == *(_OWORD *)&Parent[1].LeftChild )
          {
            Parent = Parent->Parent;
LABEL_53:
            if ( !Parent )
            {
LABEL_54:
              v27 = RtlRealSuccessor(FirstOverlappingSharedNode);
              if ( v27 )
                Parent = v27[-1].Parent;
              if ( Parent )
                goto LABEL_57;
              break;
            }
LABEL_57:
            LastReturnedLock = Parent;
            v22 = *(_OWORD *)&Parent[1].Parent;
            v34 = *(_OWORD *)&Parent->LeftChild;
            v23 = *(_OWORD *)&Parent[1].RightChild;
LABEL_64:
            *(_OWORD *)v35.m256i_i8 = v22;
            v6 = 1;
            *(_OWORD *)&v35.m256i_u64[2] = v23;
            break;
          }
        }
        v26 = (_RTL_SPLAY_LINKS *)v34 < Parent->LeftChild;
LABEL_59:
        if ( v26 )
          goto LABEL_53;
        Parent = Parent->Parent;
        if ( !Parent )
          goto LABEL_54;
      }
    }
  }
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v32, retaddr);
  else
    _InterlockedAnd64(v32, 0LL);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( !v6 )
    return 0LL;
  v28 = v34;
  v29 = *(_OWORD *)v35.m256i_i8;
  result = &FileLock->LastReturnedLockInfo;
  FileLock->LastReturnedLock = LastReturnedLock;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart = v28;
  v30 = *(_OWORD *)&v35.m256i_u64[2];
  *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock = v29;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId = v30;
  return result;
}
