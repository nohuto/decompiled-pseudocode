/*
 * XREFs of AlpcpAssociateIoCompletionPort @ 0x14052CB7C
 * Callers:
 *     NtAlpcSetInformation @ 0x14052C6F0 (NtAlpcSetInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14006BCD8 (AlpcpFreeCompletionPacketLookaside.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011311C (AlpcpQueueIoCompletionPort.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14042D0F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpAssociateIoCompletionPort(_QWORD *a1, void *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  PVOID v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  char *CompletionPacketLookaside; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r14
  _QWORD *i; // r14
  void *v23; // rcx
  __int64 v24; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v7 = a1 + 44;
  v8 = KeAbPreAcquire((ULONG_PTR)(a1 + 44), 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( a1[4] )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    return 3221225544LL;
  }
  else
  {
    if ( !a1[45] )
    {
      v11 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
      v12 = Object;
      a1[4] = Object;
      v13 = v11;
      if ( v11 >= 0 )
      {
        v14 = a1[45];
        a1[5] = a3;
        if ( v14 )
          v15 = *(_QWORD *)(v14 + 96) >> 3;
        else
          LODWORD(v15) = 1;
        CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v15, (__int64)v12, a3);
        a1[6] = CompletionPacketLookaside;
        if ( CompletionPacketLookaside )
        {
          v18 = KeAbPreAcquire((ULONG_PTR)(a1 + 17), 0LL, 0LL, v17);
          v20 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 34, 0LL) )
            ExfAcquirePushLockExclusiveEx(a1 + 17, v18, (ULONG_PTR)(a1 + 17), v19);
          if ( v20 )
            *(_BYTE *)(v20 + 26) |= 1u;
          for ( i = (_QWORD *)a1[18]; i != a1 + 18; i = (_QWORD *)*i )
            AlpcpQueueIoCompletionPort(a1, 0, 0, 0);
          if ( (_InterlockedExchangeAdd64(a1 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(a1 + 17);
          KeAbPostRelease((ULONG_PTR)(a1 + 17));
          v13 = 0;
LABEL_22:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v7);
          KeAbPostRelease((ULONG_PTR)v7);
          return v13;
        }
        v13 = -1073741670;
      }
      v23 = (void *)a1[4];
      if ( v23 )
      {
        ObfDereferenceObject(v23);
        a1[4] = 0LL;
      }
      v24 = a1[6];
      if ( v24 )
      {
        AlpcpFreeCompletionPacketLookaside(v24);
        a1[6] = 0LL;
      }
      goto LABEL_22;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    return 3221225659LL;
  }
}
