/*
 * XREFs of CsrAllocateCaptureBuffer @ 0x180075C10
 * Callers:
 *     CsrpClientConnectToServer @ 0x18007571C (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x1800759F0 (CsrCaptureMessageMultiUnicodeStringsInPlace.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

_DWORD *__fastcall CsrAllocateCaptureBuffer(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  _DWORD *Heap; // rax
  _DWORD *v5; // rdi

  v2 = a1;
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( a2 >= 0x7FFFFFDC )
    return 0LL;
  if ( a1 > 0xFFFFFFF )
    return 0LL;
  if ( 8 * a1 >= 2147483612 - a2 )
    return 0LL;
  if ( a1 + 1 >= (2147483612 - a2 - 8 * a1) / 3 )
    return 0LL;
  v3 = (11 * a1 + a2 + 35) & 0xFFFFFFFC;
  Heap = RtlAllocateHeap(CsrPortHeap, CsrPortBaseTag, v3);
  v5 = Heap;
  if ( !Heap )
    return 0LL;
  Heap[4] = 0;
  *Heap = v3;
  memset(Heap + 8, 0, 8LL * (unsigned int)v2);
  *((_QWORD *)v5 + 3) = &v5[2 * v2 + 8];
  return v5;
}
