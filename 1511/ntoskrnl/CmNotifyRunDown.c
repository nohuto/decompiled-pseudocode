/*
 * XREFs of CmNotifyRunDown @ 0x1403F1B90
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     KeRemoveQueueApc @ 0x1400ED8E4 (KeRemoveQueueApc.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpFreePostBlock @ 0x14049A918 (CmpFreePostBlock.c)
 *     CmpCancelSubordinatePost @ 0x14049AD68 (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x14049ADA4 (CmpFreeSubordinatePost.c)
 */

void __fastcall CmNotifyRunDown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD **v7; // rax
  _QWORD **v8; // rbx
  _QWORD *v9; // rcx
  _QWORD **v10; // rbx
  int v11; // ecx
  _QWORD *v12; // rdx
  bool v13; // zf
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  struct _KEVENT *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rcx

  v5 = (_QWORD *)(a1 + 1528);
  if ( *(_QWORD *)(a1 + 1528) && (_QWORD *)*v5 != v5 )
  {
    CmpLockRegistry(a1, a2, a3, a4);
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *v5 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = (_QWORD **)(a1 + 1528);
          if ( *v7 == v7 )
            goto LABEL_29;
          v8 = (_QWORD **)*v7;
          v9 = (_QWORD *)**v7;
          if ( (_QWORD **)(*v7)[1] != v7 || (_QWORD **)v9[1] != v8 )
            __fastfail(3u);
          *v7 = v9;
          v9[1] = v7;
          v10 = v8 - 2;
          v11 = *((_DWORD *)v10 + 14);
          if ( (v11 & 0x10000) != 0 )
            break;
          v19 = v10 + 2;
          v20 = *(_QWORD **)(a1 + 1536);
          *v19 = v7;
          v19[1] = v20;
          if ( (_QWORD **)*v20 != v7 )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(a1 + 1536) = v19;
        }
        if ( (_WORD)v11 != 2 )
          break;
        v12 = v10[8];
        if ( (_QWORD *)v12[13] == v12 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v13 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] == 0;
        *(_DWORD *)v10[8][13] = 267;
        v14 = v10[8][13];
        if ( v13 )
          *(_QWORD *)(v14 + 8) = 0LL;
        else
          *(_DWORD *)(v14 + 4) = 0;
        v15 = v10[8];
        if ( (_QWORD *)v15[13] == v15 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v15);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v16 = (struct _KEVENT *)v10[8][1];
        if ( v16 )
        {
          KeSetEvent(v16, 0, 0);
          ObfDereferenceObject((PVOID)v10[8][1]);
        }
        if ( !(unsigned __int8)KeRemoveQueueApc((__int64)(v10[8] + 2)) )
        {
          v17 = (__int64)*v10;
          v18 = v10[1];
          if ( (_QWORD **)(*v10)[1] != v10 || (_QWORD **)*v18 != v10 )
            __fastfail(3u);
LABEL_27:
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          CmpCancelSubordinatePost(v10, 0LL);
        }
        CmpFreeSubordinatePost(v10);
        CmpFreePostBlock(v10);
      }
      v17 = (__int64)*v10;
      v18 = v10[1];
      if ( (_QWORD **)(*v10)[1] != v10 || (_QWORD **)*v18 != v10 )
        __fastfail(3u);
      goto LABEL_27;
    }
LABEL_29:
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    CmpUnlockRegistry();
  }
}
