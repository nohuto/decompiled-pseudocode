/*
 * XREFs of CmNotifyRunDown @ 0x1404F86A8
 * Callers:
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     KeRemoveQueueApc @ 0x1400AD8E4 (KeRemoveQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
 *     CmpCancelSubordinatePost @ 0x1403E3B68 (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x1403E3BA4 (CmpFreeSubordinatePost.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 */

void __fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD **v4; // rax
  _QWORD **v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  int v8; // ecx
  _QWORD *v9; // rdx
  bool v10; // zf
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  struct _KEVENT *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx

  v2 = (_QWORD *)(a1 + 1536);
  if ( *(_QWORD *)(a1 + 1536) && (_QWORD *)*v2 != v2 )
  {
    CmpLockRegistry();
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *v2 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = (_QWORD **)(a1 + 1536);
          if ( *v4 == v4 )
            goto LABEL_29;
          v5 = (_QWORD **)*v4;
          v6 = (_QWORD *)**v4;
          if ( (_QWORD **)(*v4)[1] != v4 || (_QWORD **)v6[1] != v5 )
            __fastfail(3u);
          *v4 = v6;
          v6[1] = v4;
          v7 = (__int64)(v5 - 2);
          v8 = *(_DWORD *)(v7 + 56);
          if ( (v8 & 0x10000) != 0 )
            break;
          v16 = (_QWORD *)(v7 + 16);
          v17 = *(_QWORD **)(a1 + 1544);
          if ( (_QWORD **)*v17 != v4 )
            __fastfail(3u);
          *v16 = v4;
          v16[1] = v17;
          *v17 = v16;
          *(_QWORD *)(a1 + 1544) = v16;
        }
        if ( (_WORD)v8 != 2 )
          break;
        v9 = *(_QWORD **)(v7 + 64);
        if ( (_QWORD *)v9[13] == v9 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v9);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] == 0;
        **(_DWORD **)(*(_QWORD *)(v7 + 64) + 104LL) = 267;
        v11 = *(_QWORD *)(*(_QWORD *)(v7 + 64) + 104LL);
        if ( v10 )
          *(_QWORD *)(v11 + 8) = 0LL;
        else
          *(_DWORD *)(v11 + 4) = 0;
        v12 = *(_QWORD **)(v7 + 64);
        if ( (_QWORD *)v12[13] == v12 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v13 = *(struct _KEVENT **)(*(_QWORD *)(v7 + 64) + 8LL);
        if ( v13 )
        {
          KeSetEvent(v13, 0, 0);
          ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v7 + 64) + 8LL));
        }
        if ( !(unsigned __int8)KeRemoveQueueApc(*(_QWORD *)(v7 + 64) + 16LL) )
        {
          v14 = *(_QWORD *)v7;
          v15 = *(_QWORD **)(v7 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v15 != v7 )
            __fastfail(3u);
LABEL_27:
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          CmpCancelSubordinatePost(v7, 0LL);
        }
        CmpFreeSubordinatePost(v7);
        CmpFreePostBlock(v7);
      }
      v14 = *(_QWORD *)v7;
      v15 = *(_QWORD **)(v7 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v15 != v7 )
        __fastfail(3u);
      goto LABEL_27;
    }
LABEL_29:
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    CmpUnlockRegistry();
  }
}
