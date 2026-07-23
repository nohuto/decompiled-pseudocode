/*
 * XREFs of EtwpCreateUmReplyObject @ 0x1404D182C
 * Callers:
 *     EtwpNotifyGuid @ 0x14048E9C8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeInitializeQueue @ 0x14007DEC4 (KeInitializeQueue.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x14040D460 (EtwpReferenceGuidEntry.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, PHANDLE Handle, _QWORD *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PVOID v9; // rsi
  _BYTE *v10; // rax
  signed __int8 v11; // cf
  _BYTE *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  PVOID v16; // rdi
  PVOID NewObject; // [rsp+50h] [rbp-9h] BYREF
  int v19; // [rsp+58h] [rbp-1h] BYREF
  __int64 v20; // [rsp+60h] [rbp+7h]
  __int64 v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+70h] [rbp+17h]
  __int128 v23; // [rsp+78h] [rbp+1Fh]
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v19 = 48;
  v22 = 64;
  v23 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    inserted = ObCreateObject(0, EtwpRegistrationObjectType, (__int64)&v19, 1, 0, 112, 0, 0, &Object);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = Object;
      memset(Object, 0, 0x70uLL);
      *((_WORD *)v9 + 49) = 4;
      *((_QWORD *)v9 + 6) = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *((_QWORD *)v9 + 4) = BugCheckParameter2;
      v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EtwpReplyListLock, 0LL, 0);
      v11 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpReplyListLock, 0LL);
      v12 = v10;
      if ( v11 )
        ExfAcquirePushLockExclusiveEx(&EtwpReplyListLock, v10, (ULONG_PTR)&EtwpReplyListLock);
      if ( v12 )
        v12[26] |= 1u;
      v13 = EtwpReplyListHead;
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      v14 = Object;
      *(_QWORD *)Object = EtwpReplyListHead;
      v14[1] = &EtwpReplyListHead;
      *(_QWORD *)(v13 + 8) = v14;
      EtwpReplyListHead = (__int64)v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      v15 = (char *)Object + 16;
      *((_QWORD *)Object + 3) = (char *)Object + 16;
      *v15 = v15;
      _InterlockedOr16((volatile signed __int16 *)v9 + 49, 0x80u);
      v16 = Object;
      inserted = ObInsertObject(Object, 0LL, 0x804u, 1u, &NewObject, Handle);
      if ( inserted >= 0 )
        *a3 = v16;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
