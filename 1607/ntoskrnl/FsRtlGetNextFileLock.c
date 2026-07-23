/*
 * XREFs of FsRtlGetNextFileLock @ 0x1401B8A04
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x1400A9A08 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1400C33DC (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1400C3DE8 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

PFILE_LOCK_INFO __stdcall FsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  _QWORD *LockInformation; // rbx
  PFILE_LOCK_INFO result; // rax
  __int128 v5; // xmm0
  PRTL_SPLAY_LINKS LastReturnedLock; // rdi
  __int128 v7; // xmm1
  char v8; // si
  __int128 v9; // xmm0
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rax
  _RTL_SPLAY_LINKS *v11; // rcx
  _RTL_SPLAY_LINKS *v12; // r15
  _RTL_SPLAY_LINKS *v13; // r12
  int v14; // r13d
  _RTL_SPLAY_LINKS *v15; // r14
  __int64 v16; // rcx
  __int64 j; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _RTL_SPLAY_LINKS *FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *Parent; // rbx
  bool v22; // cf
  PRTL_SPLAY_LINKS v23; // rax
  _RTL_SPLAY_LINKS *v24; // rax
  __int64 v25; // rax
  __int64 i; // rcx
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
  v5 = *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart;
  LastReturnedLock = (PRTL_SPLAY_LINKS)FileLock->LastReturnedLock;
  v7 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock;
  v8 = 0;
  SpinLock = LockInformation + 3;
  v33 = v5;
  v35 = v5;
  v9 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId;
  v32 = v7;
  v34 = v9;
  *(_OWORD *)&v36[16] = v9;
  *(_OWORD *)v36 = v7;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( Restart )
  {
    v24 = (_RTL_SPLAY_LINKS *)LockInformation[5];
    if ( v24 )
    {
      do
      {
        LastReturnedLock = v24;
        v24 = v24->LeftChild;
      }
      while ( v24 );
      v18 = *(_OWORD *)&LastReturnedLock[1].RightChild;
      v33 = *(_OWORD *)&LastReturnedLock[1].Parent;
      v19 = *(_OWORD *)&LastReturnedLock[2].LeftChild;
      goto LABEL_62;
    }
    v25 = LockInformation[4];
    if ( !v25 )
      goto LABEL_63;
    for ( i = *(_QWORD *)(v25 + 8); i; i = *(_QWORD *)(i + 8) )
      v25 = i;
    LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v25 - 24);
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
      v12 = *(_RTL_SPLAY_LINKS **)&v36[16];
      v13 = *(_RTL_SPLAY_LINKS **)&v36[8];
      v14 = *(_DWORD *)&v36[4];
      v15 = (_RTL_SPLAY_LINKS *)*((_QWORD *)&v35 + 1);
      while ( LastReturnedLock != FirstOverlappingExclusiveNode
           || (_RTL_SPLAY_LINKS *)v35 != FirstOverlappingExclusiveNode[1].Parent
           || v15 != FirstOverlappingExclusiveNode[1].LeftChild
           || v14 != HIDWORD(FirstOverlappingExclusiveNode[1].RightChild)
           || v13 != FirstOverlappingExclusiveNode[2].Parent
           || v12 != FirstOverlappingExclusiveNode[2].LeftChild )
      {
        if ( FirstOverlappingExclusiveNode[1].LeftChild || v15 )
          goto LABEL_23;
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        if ( !FirstOverlappingExclusiveNode )
          goto LABEL_24;
      }
      v11 = FirstOverlappingExclusiveNode;
    }
    else
    {
      if ( v38 )
      {
        FirstOverlappingExclusiveNode = Links;
        goto LABEL_23;
      }
      v11 = Links;
      if ( !Links )
      {
LABEL_24:
        v16 = LockInformation[4];
        if ( !v16 )
          goto LABEL_63;
        for ( j = *(_QWORD *)(v16 + 8); j; j = *(_QWORD *)(j + 8) )
          v16 = j;
        LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v16 - 24);
LABEL_61:
        v18 = *(_OWORD *)&LastReturnedLock[1].Parent;
        v33 = *(_OWORD *)&LastReturnedLock->LeftChild;
        v19 = *(_OWORD *)&LastReturnedLock[1].RightChild;
        goto LABEL_62;
      }
    }
    FirstOverlappingExclusiveNode = RtlRealSuccessor(v11);
LABEL_23:
    if ( FirstOverlappingExclusiveNode )
    {
      LastReturnedLock = FirstOverlappingExclusiveNode;
      v18 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].RightChild;
      v33 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].Parent;
      v19 = *(_OWORD *)&FirstOverlappingExclusiveNode[2].LeftChild;
      goto LABEL_62;
    }
    goto LABEL_24;
  }
  FirstOverlappingSharedNode = (_RTL_SPLAY_LINKS *)FsRtlFindFirstOverlappingSharedNode(
                                                     LockInformation[4],
                                                     (unsigned __int64 *)&v35,
                                                     (unsigned __int64 *)&v36[24],
                                                     &Links,
                                                     &v38);
  if ( FirstOverlappingSharedNode )
    goto LABEL_36;
  if ( v38 )
  {
    FirstOverlappingSharedNode = Links;
  }
  else
  {
    if ( !Links )
      goto LABEL_63;
    FirstOverlappingSharedNode = RtlRealSuccessor(Links);
  }
  if ( FirstOverlappingSharedNode )
  {
LABEL_36:
    if ( FirstOverlappingSharedNode != (_RTL_SPLAY_LINKS *)24 )
    {
      Parent = FirstOverlappingSharedNode[-1].Parent;
      if ( !Parent )
        goto LABEL_49;
      while ( 1 )
      {
        if ( LastReturnedLock == Parent )
        {
          v22 = (_RTL_SPLAY_LINKS *)v35 < Parent->LeftChild;
          if ( (_RTL_SPLAY_LINKS *)v35 != Parent->LeftChild )
            goto LABEL_45;
          if ( (_RTL_SPLAY_LINKS *)*((_QWORD *)&v35 + 1) == Parent->RightChild
            && *(_DWORD *)&v36[4] == HIDWORD(Parent[1].Parent)
            && *(_OWORD *)&v36[8] == *(_OWORD *)&Parent[1].LeftChild )
          {
            Parent = Parent->Parent;
LABEL_48:
            if ( !Parent )
            {
LABEL_49:
              v23 = RtlRealSuccessor(FirstOverlappingSharedNode);
              if ( v23 )
                Parent = v23[-1].Parent;
              if ( Parent )
                goto LABEL_52;
              break;
            }
LABEL_52:
            LastReturnedLock = Parent;
            v18 = *(_OWORD *)&Parent[1].Parent;
            v33 = *(_OWORD *)&Parent->LeftChild;
            v19 = *(_OWORD *)&Parent[1].RightChild;
LABEL_62:
            v32 = v18;
            v8 = 1;
            v34 = v19;
            break;
          }
        }
        v22 = (_RTL_SPLAY_LINKS *)v35 < Parent->LeftChild;
LABEL_45:
        if ( v22 )
          goto LABEL_48;
        Parent = Parent->Parent;
        if ( !Parent )
          goto LABEL_49;
      }
    }
  }
LABEL_63:
  KeReleaseSpinLock(SpinLock, NewIrql);
  if ( !v8 )
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
