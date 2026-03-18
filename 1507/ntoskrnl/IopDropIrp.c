/*
 * XREFs of IopDropIrp @ 0x140112D18
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x140042DE0 (IopCompleteIrpInFileObjectList.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     IopFreeCompletionListPackets @ 0x14052B640 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IopDequeueIrpFromFileObject @ 0x140112DF4 (IopDequeueIrpFromFileObject.c)
 *     sub_140125D7C @ 0x140125D7C (sub_140125D7C.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDropIrp(__int64 a1, ULONG_PTR a2)
{
  struct _MDL *v4; // rcx
  struct _MDL *Next; // rbx
  void *v6; // rcx
  signed __int64 v7; // rax
  bool v8; // cc
  ULONG_PTR BugCheckParameter4; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 16) & 0x20) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  v4 = *(struct _MDL **)(a1 + 8);
  if ( v4 )
  {
    do
    {
      Next = v4->Next;
      IoFreeMdl(v4);
      v4 = Next;
    }
    while ( Next );
  }
  v6 = *(void **)(a1 + 80);
  if ( v6 && a2 && (*(_DWORD *)(a1 + 16) & 4) == 0 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( (*(_DWORD *)(a1 + 16) & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(a1, a2);
  if ( a2 && (*(_DWORD *)(a1 + 16) & 0x80u) == 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(a2 - 48);
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v8 = v7 <= 1;
    BugCheckParameter4 = v7 - 1;
    if ( v8 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, a2, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(a2 - 48);
    }
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x8000) == 0 )
    return pIoFreeIrp(a1);
  result = sub_140125D7C(a1 + 88, 0xFFFFFFFFLL);
  if ( !(_DWORD)result )
    return pIoFreeIrp(a1);
  return result;
}
