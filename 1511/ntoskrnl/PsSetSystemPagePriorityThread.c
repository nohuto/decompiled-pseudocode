/*
 * XREFs of PsSetSystemPagePriorityThread @ 0x140007330
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x14010F95C (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsSetSystemPagePriorityThread(__int64 a1, int a2)
{
  unsigned __int8 v2; // r8
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v6; // eax

  --*(_WORD *)(a1 + 486);
  v2 = *(_BYTE *)(a1 + 1733);
  v3 = *(_DWORD *)(a1 + 1732);
  v4 = a2 << 9;
  if ( (v2 & 1) != 0 )
  {
    v5 = (v2 >> 1) & 7;
    v6 = v3 & 0xFFFFF1FF;
  }
  else
  {
    v5 = -1;
    v6 = v3 | 0x100;
  }
  *(_DWORD *)(a1 + 1732) = v4 | v6;
  KiLeaveGuardedRegionUnsafe(a1);
  return v5;
}
