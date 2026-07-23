/*
 * XREFs of ResCDirectoryCreateAndPopulate @ 0x1800FB30C
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x180048988 (ResCKeDirectoryOpenMapping.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCDirectoryPopulate @ 0x1800FB3FC (ResCDirectoryPopulate.c)
 */

_QWORD *__fastcall ResCDirectoryCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *result; // rax
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx

  if ( !a1 )
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x48uLL);
  v8 = Heap;
  if ( !Heap )
    return 0LL;
  if ( !(unsigned int)ResCDirectoryPopulate(Heap, a1, a2) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  result = v8;
  v8[2] = -1LL;
  *(_DWORD *)v8 = a3 & 0xFFFFFFFB;
  return result;
}
