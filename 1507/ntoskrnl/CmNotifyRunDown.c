/*
 * XREFs of CmNotifyRunDown @ 0x140420ED0
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeRemoveQueueApc @ 0x140128588 (KeRemoveQueueApc.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpFreePostBlock @ 0x1404ECFB0 (CmpFreePostBlock.c)
 *     CmpCancelSubordinatePost @ 0x1404ED2F0 (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x1404ED32C (CmpFreeSubordinatePost.c)
 */

void __fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // si
  _QWORD **v8; // rax
  _QWORD **v9; // rbx
  _QWORD *v10; // rcx
  _QWORD **v11; // rbx
  int v12; // ecx
  _QWORD *v13; // rdx
  bool v14; // zf
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  struct _KEVENT *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  signed __int32 v20; // eax
  _QWORD *v21; // rbx
  _QWORD *v22; // rcx

  v2 = (_QWORD *)(a1 + 1528);
  if ( *(_QWORD *)(a1 + 1528) && (_QWORD *)*v2 != v2 )
  {
    CmpLockRegistry();
    CurrentThread = KeGetCurrentThread();
    v5 = KeAbPreAcquire((ULONG_PTR)&CmpPostLock, 0LL, 0LL, v4);
    v6 = v5;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpPostLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpPostLock, v5);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    qword_14034DB68 = (__int64)CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *v2 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = (_QWORD **)(a1 + 1528);
          if ( *v8 == v8 )
            goto LABEL_33;
          v9 = (_QWORD **)*v8;
          v10 = (_QWORD *)**v8;
          if ( (_QWORD **)(*v8)[1] != v8 || (_QWORD **)v10[1] != v9 )
            __fastfail(3u);
          *v8 = v10;
          v10[1] = v8;
          v11 = v9 - 2;
          v12 = *((_DWORD *)v11 + 14);
          if ( (v12 & 0x10000) != 0 )
            break;
          v21 = v11 + 2;
          v22 = *(_QWORD **)(a1 + 1536);
          *v21 = v8;
          v21[1] = v22;
          if ( (_QWORD **)*v22 != v8 )
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(a1 + 1536) = v21;
        }
        if ( (_WORD)v12 != 2 )
          break;
        v13 = v11[8];
        if ( (_QWORD *)v13[13] == v13 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v13);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] == 0;
        *(_DWORD *)v11[8][13] = 267;
        v15 = v11[8][13];
        if ( v14 )
          *(_QWORD *)(v15 + 8) = 0LL;
        else
          *(_DWORD *)(v15 + 4) = 0;
        v16 = v11[8];
        if ( (_QWORD *)v16[13] == v16 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v16);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v17 = (struct _KEVENT *)v11[8][1];
        if ( v17 )
        {
          KeSetEvent(v17, 0, 0);
          ObfDereferenceObject((PVOID)v11[8][1]);
        }
        if ( !(unsigned __int8)KeRemoveQueueApc((__int64)(v11[8] + 2)) )
        {
          v18 = (__int64)*v11;
          v19 = v11[1];
          if ( (_QWORD **)(*v11)[1] != v11 || (_QWORD **)*v19 != v11 )
            __fastfail(3u);
LABEL_31:
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          CmpCancelSubordinatePost(v11, 0LL);
        }
        CmpFreeSubordinatePost(v11);
        CmpFreePostBlock(v11);
      }
      v18 = (__int64)*v11;
      v19 = v11[1];
      if ( (_QWORD **)(*v11)[1] != v11 || (_QWORD **)*v19 != v11 )
        __fastfail(3u);
      goto LABEL_31;
    }
LABEL_33:
    __writecr8(CurrentIrql);
    qword_14034DB68 = 0LL;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpPostLock, 1, 0);
    if ( v20 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpPostLock, v20);
    KeAbPostRelease((ULONG_PTR)&CmpPostLock);
    CmpUnlockRegistry();
  }
}
