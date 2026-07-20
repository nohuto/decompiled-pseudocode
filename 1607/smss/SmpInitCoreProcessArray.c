/*
 * XREFs of SmpInitCoreProcessArray @ 0x140007B4C
 * Callers:
 *     SmpInitializeSessionManagement @ 0x140007AF4 (SmpInitializeSessionManagement.c)
 * Callees:
 *     <none>
 */

__int64 SmpInitCoreProcessArray()
{
  __int64 v0; // rbx
  _OWORD *Heap; // rax
  _OWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  v0 = (unsigned int)SmpNumberInitialSessions;
  memset(v3, 0, 24);
  Heap = RtlAllocateHeap(
           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
           SmBaseTag,
           40LL * (unsigned int)SmpNumberInitialSessions);
  SmpCoreProcessIds = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( (_DWORD)v0 )
  {
    *Heap = 0xFFFFFFFFuLL;
    Heap[1] = v3[0];
    *((_QWORD *)Heap + 4) = *(_QWORD *)&v3[1];
    qmemcpy((char *)Heap + 40, Heap, 8 * ((unsigned __int64)(40 * v0 - 40) >> 3));
  }
  return 0LL;
}
