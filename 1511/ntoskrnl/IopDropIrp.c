/*
 * XREFs of IopDropIrp @ 0x1400DF7D8
 * Callers:
 *     IoRemoveIoCompletion @ 0x140080540 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopFreeCompletionListPackets @ 0x1404A3290 (IopFreeCompletionListPackets.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IopDequeueIrpFromFileObject @ 0x1400DF8B4 (IopDequeueIrpFromFileObject.c)
 *     sub_1400EB8E0 @ 0x1400EB8E0 (sub_1400EB8E0.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  result = sub_1400EB8E0(a1 + 88, 0xFFFFFFFFLL);
  if ( !(_DWORD)result )
    return pIoFreeIrp(a1);
  return result;
}
