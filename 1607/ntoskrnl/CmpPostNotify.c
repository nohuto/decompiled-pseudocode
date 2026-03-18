/*
 * XREFs of CmpPostNotify @ 0x14049A9D4
 * Callers:
 *     CmpNotifyChangeKey @ 0x140401234 (CmpNotifyChangeKey.c)
 *     CmpFlushNotify @ 0x14049A0FC (CmpFlushNotify.c)
 *     CmpCloseKeyObject @ 0x14049A770 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x140514960 (CmpReportNotifyHelper.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeInsertQueueApc @ 0x1400C9FD0 (KeInsertQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     CmpSignalDeferredPosts @ 0x14049A8F0 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x14049A988 (CmpFreePostBlock.c)
 *     CmpAddToDelayedDeref @ 0x14049AC1C (CmpAddToDelayedDeref.c)
 *     CmpCancelSubordinatePost @ 0x14049AC48 (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x14049AC84 (CmpFreeSubordinatePost.c)
 *     CmpDelayedDerefKeys @ 0x140514B2C (CmpDelayedDerefKeys.c)
 */

void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, _QWORD *a6, _QWORD *a7)
{
  __int64 v8; // r13
  _QWORD *v9; // rbp
  _QWORD *v10; // rsi
  __int64 *v11; // rdi
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int8 CurrentIrql; // r8
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD v29[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v30[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = a4;
  if ( a6 )
  {
    v9 = a6;
  }
  else
  {
    v29[1] = v29;
    v9 = v29;
    v29[0] = v29;
  }
  if ( a7 )
  {
    v10 = a7;
  }
  else
  {
    v30[1] = v30;
    v10 = v30;
    v30[0] = v30;
  }
  if ( !a5 )
    ExAcquireFastMutexUnsafe(&CmpPostLock);
  v11 = (__int64 *)(a1 + 16);
  if ( (__int64 *)*v11 != v11 )
  {
    *(_DWORD *)(a1 + 48) &= ~0x80000000;
LABEL_9:
    v12 = 1LL;
    while ( 1 )
    {
      if ( (__int64 *)*v11 == v11 )
      {
        if ( !a5 )
          ExReleaseFastMutexUnsafe(&CmpPostLock);
        if ( !a6 )
          CmpDelayedDerefKeys(v9);
        if ( !a7 )
          CmpSignalDeferredPosts((_QWORD **)v10);
        return;
      }
      v13 = *v11;
      v14 = *(_QWORD **)*v11;
      if ( *(__int64 **)(*v11 + 8) != v11 || v14[1] != v13 )
        __fastfail(3u);
      *v11 = (__int64)v14;
      v14[1] = v11;
      if ( (_DWORD)v8 != 267 )
        break;
      if ( (*(_DWORD *)(v13 + 56) & 0x10000) != 0 )
      {
LABEL_15:
        if ( (unsigned __int16)*(_DWORD *)(v13 + 56) != (_DWORD)v12 )
        {
          CmpCancelSubordinatePost(v13, v9);
          CmpAddToDelayedDeref(v13, v15);
        }
        v16 = (unsigned __int16)*(_DWORD *)(v13 + 56);
        if ( v16 == (_DWORD)v12 )
        {
          v28 = *(_QWORD *)(v13 + 64);
          *(_QWORD *)v13 = 0LL;
          *(_DWORD *)(v28 + 24) = v8;
          KeSetEvent(*(PRKEVENT *)(v13 + 64), 0, 0);
          goto LABEL_9;
        }
        if ( v16 == 2 )
        {
          KeInsertQueueApc(*(_QWORD *)(v13 + 64) + 16LL, v8, v13, 0);
          goto LABEL_9;
        }
        if ( v16 - 3 <= (unsigned int)v12 )
        {
          CmpFreeSubordinatePost(v13);
          v17 = *(_QWORD **)(v13 + 24);
          v18 = (_QWORD *)(v13 + 16);
          v19 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v17 != v18 )
            __fastfail(3u);
          *v17 = v19;
          *(_QWORD *)(v19 + 8) = v17;
          v20 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v20 != v10 )
            __fastfail(3u);
          *v18 = v10;
          v18[1] = v20;
          *v20 = v18;
          v10[1] = v18;
          goto LABEL_9;
        }
      }
      else
      {
        v23 = *(_QWORD *)(v13 + 32);
        v24 = *(_QWORD **)(v13 + 40);
        if ( *(_QWORD *)(v23 + 8) != v13 + 32 || *v24 != v13 + 32 )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v12);
        v26 = *(_QWORD *)(v13 + 16);
        v27 = *(_QWORD **)(v13 + 24);
        if ( *(_QWORD *)(v26 + 8) != v13 + 16 || *v27 != v13 + 16 )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        __writecr8(CurrentIrql);
        if ( *(_DWORD *)(v13 + 56) != (_DWORD)v12 )
        {
          CmpAddToDelayedDeref(v13, v9);
          CmpFreePostBlock(v13);
          goto LABEL_9;
        }
      }
    }
    if ( (*(_DWORD *)(v13 + 56) & 0x10000) == 0 )
    {
      v21 = v13;
      do
      {
        v22 = *(_QWORD *)(v21 + 32);
        *(_DWORD *)(v22 + 24) &= ~0x10000u;
        v21 = v22 - 32;
      }
      while ( v21 != v13 );
      *(_DWORD *)(v13 + 56) |= 0x10000u;
    }
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 48) |= 0x80000000;
  if ( !a5 )
    ExReleaseFastMutexUnsafe(&CmpPostLock);
}
