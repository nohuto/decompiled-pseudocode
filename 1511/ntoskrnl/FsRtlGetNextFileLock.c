/*
 * XREFs of FsRtlGetNextFileLock @ 0x1401434E4
 * Callers:
 *     VerifierFsRtlGetNextFileLock @ 0x1406C0510 (VerifierFsRtlGetNextFileLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRealSuccessor @ 0x1400CD450 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1400CE098 (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1400CEAA4 (FsRtlFindFirstOverlappingExclusiveNode.c)
 */

PFILE_LOCK_INFO __stdcall FsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  _QWORD *LockInformation; // rbx
  __int128 v4; // xmm0
  PRTL_SPLAY_LINKS LastReturnedLock; // rdi
  __int128 v6; // xmm1
  char v7; // si
  __int128 v8; // xmm0
  _RTL_SPLAY_LINKS *v9; // rax
  __int64 v10; // rax
  PFILE_LOCK_INFO result; // rax
  __int64 i; // rcx
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rax
  _RTL_SPLAY_LINKS *v14; // rcx
  __int64 v15; // rcx
  __int64 j; // rax
  _RTL_SPLAY_LINKS *v17; // r15
  _RTL_SPLAY_LINKS *v18; // r12
  int v19; // r13d
  _RTL_SPLAY_LINKS *v20; // r14
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _RTL_SPLAY_LINKS *FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *Parent; // rbx
  bool v25; // cf
  PRTL_SPLAY_LINKS v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  PRTL_SPLAY_LINKS Links; // [rsp+30h] [rbp-49h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-41h]
  __int128 v32; // [rsp+40h] [rbp-39h]
  __int128 v33; // [rsp+50h] [rbp-29h]
  __int128 v34; // [rsp+60h] [rbp-19h]
  __int128 v35; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v36[64]; // [rsp+80h] [rbp+7h] BYREF
  char v38; // [rsp+F0h] [rbp+77h] BYREF
  KIRQL NewIrql; // [rsp+F8h] [rbp+7Fh]

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return 0LL;
  v4 = *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart;
  LastReturnedLock = (PRTL_SPLAY_LINKS)FileLock->LastReturnedLock;
  v6 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock;
  v7 = 0;
  SpinLock = LockInformation + 3;
  v33 = v4;
  v35 = v4;
  v8 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId;
  v32 = v6;
  v34 = v8;
  *(_OWORD *)&v36[16] = v8;
  *(_OWORD *)v36 = v6;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( Restart )
  {
    v9 = (_RTL_SPLAY_LINKS *)LockInformation[5];
    if ( v9 )
    {
      do
      {
        LastReturnedLock = v9;
        v9 = v9->LeftChild;
      }
      while ( v9 );
      v21 = *(_OWORD *)&LastReturnedLock[1].RightChild;
      v33 = *(_OWORD *)&LastReturnedLock[1].Parent;
      v22 = *(_OWORD *)&LastReturnedLock[2].LeftChild;
      goto LABEL_62;
    }
    v10 = LockInformation[4];
    if ( !v10 )
      goto LABEL_5;
    for ( i = *(_QWORD *)(v10 + 8); i; i = *(_QWORD *)(i + 8) )
      v10 = i;
    LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v10 - 24);
    goto LABEL_61;
  }
  if ( (_BYTE)v32 )
  {
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        (_QWORD *)LockInformation[5],
                                                        (unsigned __int64 *)&v35,
                                                        (unsigned __int64 *)&v36[24],
                                                        &Links,
                                                        &v38);
    if ( FirstOverlappingExclusiveNode )
    {
      v17 = *(_RTL_SPLAY_LINKS **)&v36[16];
      v18 = *(_RTL_SPLAY_LINKS **)&v36[8];
      v19 = *(_DWORD *)&v36[4];
      v20 = (_RTL_SPLAY_LINKS *)*((_QWORD *)&v35 + 1);
      while ( LastReturnedLock != FirstOverlappingExclusiveNode
           || (_RTL_SPLAY_LINKS *)v35 != FirstOverlappingExclusiveNode[1].Parent
           || v20 != FirstOverlappingExclusiveNode[1].LeftChild
           || v19 != HIDWORD(FirstOverlappingExclusiveNode[1].RightChild)
           || v18 != FirstOverlappingExclusiveNode[2].Parent
           || v17 != FirstOverlappingExclusiveNode[2].LeftChild )
      {
        if ( FirstOverlappingExclusiveNode[1].LeftChild || v20 )
          goto LABEL_24;
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        if ( !FirstOverlappingExclusiveNode )
          goto LABEL_13;
      }
      v14 = FirstOverlappingExclusiveNode;
    }
    else
    {
      if ( v38 )
      {
        FirstOverlappingExclusiveNode = Links;
        goto LABEL_24;
      }
      v14 = Links;
      if ( !Links )
      {
LABEL_13:
        v15 = LockInformation[4];
        if ( !v15 )
          goto LABEL_5;
        for ( j = *(_QWORD *)(v15 + 8); j; j = *(_QWORD *)(j + 8) )
          v15 = j;
        LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v15 - 24);
LABEL_61:
        v21 = *(_OWORD *)&LastReturnedLock[1].Parent;
        v33 = *(_OWORD *)&LastReturnedLock->LeftChild;
        v22 = *(_OWORD *)&LastReturnedLock[1].RightChild;
        goto LABEL_62;
      }
    }
    FirstOverlappingExclusiveNode = RtlRealSuccessor(v14);
LABEL_24:
    if ( FirstOverlappingExclusiveNode )
    {
      LastReturnedLock = FirstOverlappingExclusiveNode;
      v21 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].RightChild;
      v33 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].Parent;
      v22 = *(_OWORD *)&FirstOverlappingExclusiveNode[2].LeftChild;
      goto LABEL_62;
    }
    goto LABEL_13;
  }
  FirstOverlappingSharedNode = (_RTL_SPLAY_LINKS *)FsRtlFindFirstOverlappingSharedNode(
                                                     LockInformation[4],
                                                     (unsigned __int64 *)&v35,
                                                     (unsigned __int64 *)&v36[24],
                                                     &Links,
                                                     &v38);
  if ( FirstOverlappingSharedNode )
    goto LABEL_39;
  if ( v38 )
  {
    FirstOverlappingSharedNode = Links;
  }
  else
  {
    if ( !Links )
      goto LABEL_5;
    FirstOverlappingSharedNode = RtlRealSuccessor(Links);
  }
  if ( FirstOverlappingSharedNode )
  {
LABEL_39:
    if ( FirstOverlappingSharedNode != (_RTL_SPLAY_LINKS *)24 )
    {
      Parent = FirstOverlappingSharedNode[-1].Parent;
      if ( !Parent )
        goto LABEL_48;
      while ( 1 )
      {
        if ( LastReturnedLock == Parent )
        {
          v25 = (_RTL_SPLAY_LINKS *)v35 < Parent->LeftChild;
          if ( (_RTL_SPLAY_LINKS *)v35 != Parent->LeftChild )
            goto LABEL_53;
          if ( (_RTL_SPLAY_LINKS *)*((_QWORD *)&v35 + 1) == Parent->RightChild
            && *(_DWORD *)&v36[4] == HIDWORD(Parent[1].Parent)
            && *(_OWORD *)&v36[8] == *(_OWORD *)&Parent[1].LeftChild )
          {
            Parent = Parent->Parent;
LABEL_47:
            if ( !Parent )
            {
LABEL_48:
              v26 = RtlRealSuccessor(FirstOverlappingSharedNode);
              if ( v26 )
                Parent = v26[-1].Parent;
              if ( Parent )
                goto LABEL_51;
              break;
            }
LABEL_51:
            LastReturnedLock = Parent;
            v21 = *(_OWORD *)&Parent[1].Parent;
            v33 = *(_OWORD *)&Parent->LeftChild;
            v22 = *(_OWORD *)&Parent[1].RightChild;
LABEL_62:
            v32 = v21;
            v7 = 1;
            v34 = v22;
            break;
          }
        }
        v25 = (_RTL_SPLAY_LINKS *)v35 < Parent->LeftChild;
LABEL_53:
        if ( v25 )
          goto LABEL_47;
        Parent = Parent->Parent;
        if ( !Parent )
          goto LABEL_48;
      }
    }
  }
LABEL_5:
  KeReleaseSpinLock(SpinLock, NewIrql);
  if ( !v7 )
    return 0LL;
  v27 = v33;
  v28 = v32;
  result = &FileLock->LastReturnedLockInfo;
  FileLock->LastReturnedLock = LastReturnedLock;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart = v27;
  v29 = v34;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock = v28;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId = v29;
  return result;
}
