/*
 * XREFs of MiRelocateAmount @ 0x1405C28DC
 * Callers:
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
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
