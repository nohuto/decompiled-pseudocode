/*
 * XREFs of _ResCDupString @ 0x180103814
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18005A014 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800FF07C (ResCKeCreateRuntimeView.c)
 *     ResCSegmentCreateMapping @ 0x180100284 (ResCSegmentCreateMapping.c)
 *     ResCCreateCultureMap @ 0x180105644 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x180105A7C (ResCLoadCultureMap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     memmove @ 0x1800AC980 (memmove.c)
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
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 2LL * (i + 1));
  if ( !Heap )
    return 0LL;
  v6 = 2LL * i;
  memmove(Heap, Src, v6);
  result = Heap;
  *(_WORD *)&Heap[v6] = 0;
  return result;
}
