/*
 * XREFs of EtwpCreateUmReplyObject @ 0x14055B78C
 * Callers:
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 * Callees:
 *     KeInitializeQueue @ 0x14002E384 (KeInitializeQueue.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     EtwpReferenceGuidEntry @ 0x1404CE3DC (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, PHANDLE Handle, _QWORD *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rsi
  int v8; // r9d
  int inserted; // edi
  __int64 v10; // rax
  PVOID NewObject; // [rsp+50h] [rbp-58h] BYREF
  int v13; // [rsp+58h] [rbp-50h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+70h] [rbp-38h]
  __int128 v17; // [rsp+78h] [rbp-30h]
  _QWORD *Object; // [rsp+C8h] [rbp+20h]

  v14 = 0LL;
  v15 = 0LL;
  v13 = 48;
  v16 = 64;
  v17 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    LOBYTE(v8) = 1;
    inserted = ObCreateObject(0, (int)EtwpRegistrationObjectType, (int)&v13, v8);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      memset(Object, 0, 0x70uLL);
      *((_BYTE *)Object + 98) = 4;
      Object[6] = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      Object[4] = BugCheckParameter2;
      v10 = EtwpReplyListHead;
      *Object = EtwpReplyListHead;
      Object[1] = &EtwpReplyListHead;
      if ( *(__int64 **)(v10 + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      *(_QWORD *)(v10 + 8) = Object;
      EtwpReplyListHead = (__int64)Object;
      Object[3] = Object + 2;
      Object[2] = Object + 2;
      *((_BYTE *)Object + 98) |= 0x80u;
      inserted = ObInsertObject(Object, 0LL, 0x804u, 1u, &NewObject, Handle);
      if ( inserted >= 0 )
        *a3 = Object;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
