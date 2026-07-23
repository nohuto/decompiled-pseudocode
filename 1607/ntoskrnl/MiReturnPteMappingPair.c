/*
 * XREFs of MiReturnPteMappingPair @ 0x1401FCA94
 * Callers:
 *     MiSlowRotateCopy @ 0x1401E8874 (MiSlowRotateCopy.c)
 *     MiCopyDirectMapHeader @ 0x14065A9C4 (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReturnPteMappingPair(__int64 a1)
{
  __int64 result; // rax

  LOBYTE(result) = *(_BYTE *)(a1 + 8);
  if ( (_BYTE)result == 17 )
    return MiReleasePtes((__int64)&qword_1403278B0, *(_QWORD *)(a1 + 16), 2u);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
