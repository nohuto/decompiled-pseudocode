/*
 * XREFs of ResCDirectoryCreateAndPopulate @ 0x1800FBEF4
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18000EE38 (ResCKeDirectoryOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     ResCDirectoryPopulate @ 0x1800FBFE4 (ResCDirectoryPopulate.c)
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
