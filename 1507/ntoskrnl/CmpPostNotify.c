/*
 * XREFs of CmpPostNotify @ 0x1404ECFFC
 * Callers:
 *     CmpReportNotifyHelper @ 0x14042A100 (CmpReportNotifyHelper.c)
 *     CmpNotifyChangeKey @ 0x14042C358 (CmpNotifyChangeKey.c)
 *     CmpCloseKeyObject @ 0x14042C8B0 (CmpCloseKeyObject.c)
 *     CmpFlushNotify @ 0x1404ECD18 (CmpFlushNotify.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpDelayedDerefKeys @ 0x14042A334 (CmpDelayedDerefKeys.c)
 *     CmpFreePostBlock @ 0x1404ECFB0 (CmpFreePostBlock.c)
 *     CmpAddToDelayedDeref @ 0x1404ED2C4 (CmpAddToDelayedDeref.c)
 *     CmpCancelSubordinatePost @ 0x1404ED2F0 (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x1404ED32C (CmpFreeSubordinatePost.c)
 */

void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, void **a6, _QWORD *a7)
{
  void **v8; // rbp
  _QWORD *v9; // rsi
  unsigned __int64 v10; // r10
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rdi
  signed __int32 v15; // eax
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  signed __int32 v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned __int8 CurrentIrql; // r8
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD v33[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v34[5]; // [rsp+30h] [rbp-28h] BYREF
  int v35; // [rsp+78h] [rbp+20h]

  v35 = a4;
  if ( a6 )
  {
    v8 = a6;
  }
  else
  {
    v33[1] = v33;
    v8 = (void **)v33;
    v33[0] = v33;
  }
  if ( a7 )
  {
    v9 = a7;
  }
  else
  {
    v34[1] = v34;
    v9 = v34;
    v34[0] = v34;
  }
  v10 = 1LL;
  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = KeAbPreAcquire((ULONG_PTR)&CmpPostLock, 0LL, 0LL, a4);
    v13 = v12;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpPostLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpPostLock, v12);
    v10 = 1LL;
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    LODWORD(a4) = v35;
    qword_14034DB68 = (__int64)CurrentThread;
  }
  v14 = (__int64 *)(a1 + 16);
  if ( (__int64 *)*v14 != v14 )
  {
    *(_DWORD *)(a1 + 48) &= ~0x80000000;
    while ( 1 )
    {
      if ( (__int64 *)*v14 == v14 )
      {
        if ( !a5 )
        {
          qword_14034DB68 = 0LL;
          v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, v10, 0);
          if ( v15 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v15);
          KeAbPostRelease((ULONG_PTR)&CmpPostLock);
        }
        if ( !a6 )
          CmpDelayedDerefKeys(v8);
        if ( !a7 )
          CmpSignalDeferredPosts((_QWORD **)v9);
        return;
      }
      v16 = *v14;
      v17 = *(_QWORD **)*v14;
      if ( *(__int64 **)(*v14 + 8) != v14 || v17[1] != v16 )
        __fastfail(3u);
      *v14 = (__int64)v17;
      v17[1] = v14;
      if ( (_DWORD)a4 == 267 )
      {
        if ( (*(_DWORD *)(v16 + 56) & 0x10000) != 0 )
          goto LABEL_26;
        v27 = *(_QWORD *)(v16 + 32);
        v28 = *(_QWORD **)(v16 + 40);
        if ( *(_QWORD *)(v27 + 8) != v16 + 32 || *v28 != v16 + 32 )
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v10);
        v30 = *(_QWORD *)(v16 + 16);
        v31 = *(_QWORD **)(v16 + 24);
        if ( *(_QWORD *)(v30 + 8) != v16 + 16 || *v31 != v16 + 16 )
          __fastfail(3u);
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        __writecr8(CurrentIrql);
        if ( *(_DWORD *)(v16 + 56) != (_DWORD)v10 )
        {
          CmpAddToDelayedDeref(v16, v8);
          CmpFreePostBlock(v16);
          goto LABEL_35;
        }
      }
      else
      {
        if ( (*(_DWORD *)(v16 + 56) & 0x10000) == 0 )
        {
          v25 = v16;
          do
          {
            v26 = *(_QWORD *)(v25 + 32);
            *(_DWORD *)(v26 + 24) &= ~0x10000u;
            v25 = v26 - 32;
          }
          while ( v25 != v16 );
          *(_DWORD *)(v16 + 56) |= 0x10000u;
        }
LABEL_26:
        if ( (unsigned __int16)*(_DWORD *)(v16 + 56) != (_DWORD)v10 )
        {
          CmpCancelSubordinatePost(v16, v8);
          CmpAddToDelayedDeref(v16, v18);
        }
        v19 = (unsigned __int16)*(_DWORD *)(v16 + 56);
        if ( v19 == (_DWORD)v10 )
        {
          v32 = *(_QWORD *)(v16 + 64);
          *(_QWORD *)v16 = 0LL;
          *(_DWORD *)(v32 + 24) = a4;
          KeSetEvent(*(PRKEVENT *)(v16 + 64), 0, 0);
          goto LABEL_35;
        }
        if ( v19 == 2 )
        {
          KeInsertQueueApc(*(_QWORD *)(v16 + 64) + 16LL, (unsigned int)a4, v16, 0);
          goto LABEL_35;
        }
        if ( v19 - 3 <= (unsigned int)v10 )
        {
          CmpFreeSubordinatePost(v16);
          v20 = *(_QWORD **)(v16 + 24);
          v21 = (_QWORD *)(v16 + 16);
          v22 = *v21;
          if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v20 != v21 )
            __fastfail(3u);
          *v20 = v22;
          *(_QWORD *)(v22 + 8) = v20;
          v23 = (_QWORD *)v9[1];
          *v21 = v9;
          v21[1] = v23;
          if ( (_QWORD *)*v23 != v9 )
            __fastfail(3u);
          *v23 = v21;
          v9[1] = v21;
LABEL_35:
          LODWORD(a4) = v35;
          v10 = 1LL;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 48) |= 0x80000000;
  if ( !a5 )
  {
    qword_14034DB68 = 0LL;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, 1, 0);
    if ( v24 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v24);
    KeAbPostRelease((ULONG_PTR)&CmpPostLock);
  }
}
