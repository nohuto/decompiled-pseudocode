/*
 * XREFs of SepComputeSidSignature @ 0x1403BF0A0
 * Callers:
 *     SepFindMatchingLowBoxHandlesEntry @ 0x140003798 (SepFindMatchingLowBoxHandlesEntry.c)
 *     SepRmReferenceFindCap @ 0x140201B24 (SepRmReferenceFindCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepComputeSidSignature(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4LL * ((unsigned int)*(unsigned __int8 *)(a1 + 1) - 1) + 8);
  if ( !*(_DWORD *)(a1 + 4LL * ((unsigned int)*(unsigned __int8 *)(a1 + 1) - 1) + 8) )
    return 1LL;
  return result;
}
