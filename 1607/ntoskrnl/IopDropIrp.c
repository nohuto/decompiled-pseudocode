/*
 * XREFs of IopDropIrp @ 0x1400F56CC
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x140069C60 (IoRemoveIoCompletion.c)
 *     IopFreeCompletionListPackets @ 0x1404FEDD0 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     IopInterlockedAdd @ 0x1400AA794 (IopInterlockedAdd.c)
 *     IopDequeueIrpFromFileObject @ 0x1400F57B0 (IopDequeueIrpFromFileObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDropIrp(__int64 a1, ULONG_PTR a2)
{
  struct _MDL *v4; // rcx
  void *v5; // rcx
  signed __int64 v6; // rax
  bool v7; // cc
  ULONG_PTR BugCheckParameter4; // rax
  __int64 result; // rax
  struct _MDL *Next; // rbx

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
  v5 = *(void **)(a1 + 80);
  if ( v5 && a2 && (*(_DWORD *)(a1 + 16) & 4) == 0 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( (*(_DWORD *)(a1 + 16) & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(a1, a2);
  if ( a2 && (*(_DWORD *)(a1 + 16) & 0x80u) == 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(a2 - 48);
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    BugCheckParameter4 = v6 - 1;
    if ( v7 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, a2, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(a2 - 48);
    }
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x8000) == 0 )
    return pIoFreeIrp(a1);
  result = IopInterlockedAdd((volatile signed __int64 *)(a1 + 88), -1);
  if ( !(_DWORD)result )
    return pIoFreeIrp(a1);
  return result;
}
