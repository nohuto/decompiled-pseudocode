/*
 * XREFs of MiReturnPteMappingPair @ 0x1401E4E3C
 * Callers:
 *     MiSlowRotateCopy @ 0x1401D6D90 (MiSlowRotateCopy.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnPteMappingPair(__int64 a1)
{
  unsigned __int64 result; // rax

  LOBYTE(result) = *(_BYTE *)(a1 + 8);
  if ( (_BYTE)result == 17 )
    return MiReleasePtes((__int64)&qword_1402FF7B0, *(_QWORD **)(a1 + 16), 2u);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
