/*
 * XREFs of ResCDirectoryCreateAndPopulate @ 0x180105C14
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18005A110 (ResCKeDirectoryOpenMapping.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     ResCDirectoryPopulate @ 0x180105D04 (ResCDirectoryPopulate.c)
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
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x48uLL);
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
