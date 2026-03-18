/*
 * XREFs of KeGetNextKernelStackSegment @ 0x14002BFA4
 * Callers:
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400284B8 (RtlpIsFrameInBoundsEx.c)
 *     KeEnumerateKernelStackSegments @ 0x14002BF20 (KeEnumerateKernelStackSegments.c)
 *     KeSwapProcessOrStack @ 0x140136234 (KeSwapProcessOrStack.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetNextKernelStackSegment(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    *a2 = a1[7];
    a2[1] = a1[6];
    a2[2] = a1[11];
    a2[3] = a1[5];
  }
  else
  {
    v3 = a2[3];
    if ( !*(_QWORD *)(v3 + 16) )
      return 0;
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v3 + 32);
  }
  return 1;
}
