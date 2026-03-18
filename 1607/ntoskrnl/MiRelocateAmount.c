/*
 * XREFs of MiRelocateAmount @ 0x14052762C
 * Callers:
 *     MmGetSectionInformation @ 0x140471C08 (MmGetSectionInformation.c)
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRelocateAmount(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = **(_QWORD **)(a1 + 96);
  if ( !v2 )
    return 0LL;
  result = *(_QWORD *)(v2 + 40);
  if ( (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 )
  {
    if ( a2 )
      return *(_QWORD *)(v2 + 48);
  }
  return result;
}
