/*
 * XREFs of _ResCDupString @ 0x1800F9568
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18000ED34 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F7138 (ResCKeCreateRuntimeView.c)
 *     ResCSegmentCreateMapping @ 0x1800F8574 (ResCSegmentCreateMapping.c)
 *     ResCCreateCultureMap @ 0x1800FB7C4 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1800FBBFC (ResCLoadCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

char *__fastcall ResCDupString(_WORD *Src)
{
  char *result; // rax
  _WORD *v3; // rax
  int i; // ebx
  char *Heap; // rsi
  size_t v6; // rbx

  if ( !Src )
    return 0LL;
  v3 = Src;
  for ( i = 0; i < 260; ++i )
  {
    if ( !*v3 )
      break;
    ++v3;
  }
  if ( i >= 260 )
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * (i + 1));
  if ( !Heap )
    return 0LL;
  v6 = 2LL * i;
  memmove(Heap, Src, v6);
  result = Heap;
  *(_WORD *)&Heap[v6] = 0;
  return result;
}
