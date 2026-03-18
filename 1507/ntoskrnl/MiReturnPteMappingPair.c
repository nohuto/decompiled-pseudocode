/*
 * XREFs of MiReturnPteMappingPair @ 0x1402314D0
 * Callers:
 *     MiSlowRotateCopy @ 0x140219888 (MiSlowRotateCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReturnPteMappingPair(__int64 a1)
{
  __int64 result; // rax

  LOBYTE(result) = *(_BYTE *)(a1 + 8);
  if ( (_BYTE)result == 17 )
    return MiReleasePtes((__int64)&qword_14034FC70, *(_QWORD **)(a1 + 16), 2u);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
