/*
 * XREFs of EtwpCreateUmReplyObject @ 0x1404C4A00
 * Callers:
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeInitializeQueue @ 0x1400931DC (KeInitializeQueue.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x140435FC0 (EtwpReferenceGuidEntry.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, PHANDLE Handle, _QWORD *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  _BYTE *v9; // rsi
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  PVOID v15; // rdi
  PVOID v16; // rcx
  _QWORD *v17; // rax
  PVOID NewObject; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+58h] [rbp-50h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+68h] [rbp-40h]
  int v23; // [rsp+70h] [rbp-38h]
  __int128 v24; // [rsp+78h] [rbp-30h]
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v20 = 48;
  v23 = 64;
  v24 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    inserted = ObCreateObject(0, EtwpRegistrationObjectType, (__int64)&v20, 1, 0, 112, 0, 0, &Object);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = Object;
      memset(Object, 0, 0x70uLL);
      v9[98] = 4;
      *((_QWORD *)v9 + 6) = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *((_QWORD *)v9 + 4) = BugCheckParameter2;
      v10 = KeAbPreAcquire((ULONG_PTR)&EtwpReplyListLock, 0LL, 0LL);
      v11 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpReplyListLock, 0LL);
      v12 = v10;
      if ( v11 )
        ExfAcquirePushLockExclusiveEx(&EtwpReplyListLock, v10, (ULONG_PTR)&EtwpReplyListLock);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      v13 = EtwpReplyListHead;
      v14 = Object;
      *(_QWORD *)Object = EtwpReplyListHead;
      v14[1] = &EtwpReplyListHead;
      if ( *(__int64 **)(v13 + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v14;
      EtwpReplyListHead = (__int64)v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      v15 = Object;
      v16 = Object;
      v17 = (char *)Object + 16;
      *((_QWORD *)Object + 3) = (char *)Object + 16;
      *v17 = v17;
      v9[98] |= 0x80u;
      inserted = ObInsertObject(v16, 0LL, 0x804u, 1u, &NewObject, Handle);
      if ( inserted >= 0 )
        *a3 = v15;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
