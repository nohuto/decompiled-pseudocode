/*
 * XREFs of sub_140007698 @ 0x140007698
 * Callers:
 *     sub_140007640 @ 0x140007640 (sub_140007640.c)
 * Callees:
 *     <none>
 */

__int64 sub_140007698()
{
  __int64 v0; // rbx
  _OWORD *Heap; // rax
  _OWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  v0 = (unsigned int)dword_14001F028;
  memset(v3, 0, 24);
  Heap = RtlAllocateHeap(
           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
           Flags,
           40LL * (unsigned int)dword_14001F028);
  qword_14001FCC8 = (__int64)Heap;
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
