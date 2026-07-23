/*
 * XREFs of SepComputeSidSignature @ 0x140475C20
 * Callers:
 *     SepFindMatchingLowBoxHandlesEntry @ 0x14007FAD8 (SepFindMatchingLowBoxHandlesEntry.c)
 *     SepRmReferenceFindCap @ 0x14021B49C (SepRmReferenceFindCap.c)
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
