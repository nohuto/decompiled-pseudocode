/*
 * XREFs of ResCCultureMapCreateAndPopulate @ 0x1800FAE20
 * Callers:
 *     _ResCLoadFixedSize @ 0x1800F8F74 (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCCultureMapPopulate @ 0x1800FAEC0 (ResCCultureMapPopulate.c)
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
