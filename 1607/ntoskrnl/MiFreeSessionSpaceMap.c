/*
 * XREFs of MiFreeSessionSpaceMap @ 0x140123208
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140531AD0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

unsigned __int64 MiFreeSessionSpaceMap()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( *(_QWORD *)(result + 2896) )
    KeBugCheckEx(0xBAu, *(unsigned int *)(result + 8), *(unsigned int *)(result + 2904), 0LL, 0LL);
  return result;
}
