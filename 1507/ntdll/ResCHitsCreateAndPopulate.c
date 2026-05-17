/*
 * XREFs of ResCHitsCreateAndPopulate @ 0x1800FC2AC
 * Callers:
 *     ResCKeHitsOpenMapping @ 0x1800F84A0 (ResCKeHitsOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     ResCHitsPopulate @ 0x1800FC34C (ResCHitsPopulate.c)
 */

unsigned __int64 __fastcall ResCHitsCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *Heap; // rax
  unsigned __int64 v8; // rbx

  if ( !a1 )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 40LL);
  v8 = (unsigned __int64)Heap;
  if ( !Heap )
    return 0LL;
  *Heap = a3 & 0xFFFFFFFB;
  if ( !(unsigned int)ResCHitsPopulate(Heap, a1, a2) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  return v8;
}
