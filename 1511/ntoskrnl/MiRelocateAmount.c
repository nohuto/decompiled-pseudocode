/*
 * XREFs of MiRelocateAmount @ 0x14054B548
 * Callers:
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MmGetSectionInformation @ 0x14044F1E4 (MmGetSectionInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRelocateAmount(__int64 a1)
{
  __int64 result; // rax

  result = **(_QWORD **)(a1 + 96);
  if ( result )
    return *(_QWORD *)(result + 40);
  return result;
}
