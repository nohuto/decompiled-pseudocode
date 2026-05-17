/*
 * XREFs of ResCCultureMapCreateAndPopulate @ 0x1801057C0
 * Callers:
 *     _ResCLoadFixedSize @ 0x180103908 (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     ResCCultureMapPopulate @ 0x180105860 (ResCCultureMapPopulate.c)
 */

_DWORD *__fastcall ResCCultureMapCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *result; // rax
  __int64 Heap; // rax
  _DWORD *v8; // rbx

  if ( !a1 )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  v8 = (_DWORD *)Heap;
  if ( !Heap )
    return 0LL;
  if ( !(unsigned int)ResCCultureMapPopulate(Heap, a1, a2) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v8);
    return 0LL;
  }
  result = v8;
  *v8 = a3 & 0xFFFFFFFB;
  return result;
}
