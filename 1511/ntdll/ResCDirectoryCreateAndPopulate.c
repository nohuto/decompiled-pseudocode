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

unsigned __int64 __fastcall ResCDirectoryCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 Heap; // rax
  unsigned __int64 v8; // rbx

  if ( !a1 )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 72LL);
  v8 = Heap;
  if ( !Heap )
    return 0LL;
  if ( !(unsigned int)ResCDirectoryPopulate(Heap, a1, a2) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  result = v8;
  *(_QWORD *)(v8 + 16) = -1LL;
  *(_DWORD *)v8 = a3 & 0xFFFFFFFB;
  return result;
}
