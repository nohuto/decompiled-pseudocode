/*
 * XREFs of SmpStopCsr @ 0x140001110
 * Callers:
 *     SmpStartCsr @ 0x140005CC0 (SmpStartCsr.c)
 *     SmpApiCallback @ 0x140006090 (SmpApiCallback.c)
 * Callees:
 *     SmpTerminateCSR @ 0x140001008 (SmpTerminateCSR.c)
 *     SmpLookupControlBlock @ 0x14000763C (SmpLookupControlBlock.c)
 *     SmpDestroyControlBlock @ 0x140007C5C (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140007CEC (SmpReleaseControlBlock.c)
 */

__int64 __fastcall SmpStopCsr(__int64 a1)
{
  unsigned int v1; // ebx
  void *v2; // rax
  void *v3; // rdi
  unsigned int v4; // ebx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (void *)SmpLookupControlBlock(v1);
  v3 = v2;
  if ( v2 )
  {
    v4 = SmpDestroyControlBlock(v2);
    SmpReleaseControlBlock(v3);
  }
  else
  {
    return (unsigned int)SmpTerminateCSR(v1);
  }
  return v4;
}
