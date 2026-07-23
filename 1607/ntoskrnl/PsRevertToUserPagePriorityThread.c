/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x1400FBC40
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x14011D544 (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // eax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    v2 = *(_DWORD *)(a1 + 1736) & 0xFFFFF0FF;
  else
    v2 = (a2 << 9) | *(_DWORD *)(a1 + 1736) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1736) = v2;
  return KiLeaveGuardedRegionUnsafe(a1);
}
