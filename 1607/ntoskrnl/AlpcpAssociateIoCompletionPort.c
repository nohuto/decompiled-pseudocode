/*
 * XREFs of AlpcpAssociateIoCompletionPort @ 0x1404719FC
 * Callers:
 *     NtAlpcSetInformation @ 0x140471BA8 (NtAlpcSetInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400A39E8 (AlpcpQueueIoCompletionPort.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400F59F4 (AlpcpFreeCompletionPacketLookaside.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140470730 (AlpcpAllocateCompletionPacketLookaside.c)
 */

__int64 __fastcall AlpcpAssociateIoCompletionPort(_QWORD *a1, void *a2, __int64 a3)
{
  unsigned __int64 *v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  NTSTATUS v9; // eax
  PVOID v10; // rdx
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rax
  char *CompletionPacketLookaside; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // r14
  _QWORD *i; // r14
  void *v19; // rcx
  __int64 v20; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v6 = a1 + 44;
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(a1 + 44), 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    v8[26] |= 1u;
  if ( a1[4] )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225544LL;
  }
  else
  {
    if ( !a1[45] )
    {
      v9 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
      v10 = Object;
      a1[4] = Object;
      v11 = v9;
      if ( v9 >= 0 )
      {
        v12 = a1[45];
        a1[5] = a3;
        if ( v12 )
          v13 = *(_QWORD *)(v12 + 96) >> 3;
        else
          LODWORD(v13) = 1;
        CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v13, (__int64)v10, a3);
        a1[6] = CompletionPacketLookaside;
        if ( CompletionPacketLookaside )
        {
          v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(a1 + 17), 0LL, 0);
          v16 = v15;
          if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 34, 0LL) )
            ExfAcquirePushLockExclusiveEx(a1 + 17, v15, (ULONG_PTR)(a1 + 17));
          if ( v16 )
            v16[26] |= 1u;
          for ( i = (_QWORD *)a1[18]; i != a1 + 18; i = (_QWORD *)*i )
            AlpcpQueueIoCompletionPort((__int64)a1, 0, 0, 0);
          if ( (_InterlockedExchangeAdd64(a1 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(a1 + 17);
          KeAbPostRelease((ULONG_PTR)(a1 + 17));
          v11 = 0;
LABEL_21:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v6);
          KeAbPostRelease((ULONG_PTR)v6);
          return v11;
        }
        v11 = -1073741670;
      }
      v19 = (void *)a1[4];
      if ( v19 )
      {
        ObfDereferenceObject(v19);
        a1[4] = 0LL;
      }
      v20 = a1[6];
      if ( v20 )
      {
        AlpcpFreeCompletionPacketLookaside(v20);
        a1[6] = 0LL;
      }
      goto LABEL_21;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225659LL;
  }
}
