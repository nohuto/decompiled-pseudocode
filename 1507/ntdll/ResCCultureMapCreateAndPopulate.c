/*
 * XREFs of ResCCultureMapCreateAndPopulate @ 0x1800FB940
 * Callers:
 *     _ResCLoadFixedSize @ 0x1800F965C (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     ResCCultureMapPopulate @ 0x1800FB9E0 (ResCCultureMapPopulate.c)
 */

unsigned int *__fastcall ResCCultureMapCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  unsigned int *result; // rax
  unsigned int *Heap; // rax
  unsigned int *v8; // rbx

  if ( !a1 )
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  v8 = Heap;
  if ( !Heap )
    return 0LL;
  if ( !(unsigned int)ResCCultureMapPopulate(Heap, a1, a2) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  result = v8;
  *v8 = a3 & 0xFFFFFFFB;
  return result;
}
