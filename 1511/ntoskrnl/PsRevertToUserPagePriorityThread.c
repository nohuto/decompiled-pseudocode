/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x140007300
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x14010F95C (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // eax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    v2 = *(_DWORD *)(a1 + 1732) & 0xFFFFF0FF;
  else
    v2 = (a2 << 9) | *(_DWORD *)(a1 + 1732) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1732) = v2;
  return KiLeaveGuardedRegionUnsafe(a1);
}
