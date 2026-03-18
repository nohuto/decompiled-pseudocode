/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x140031E44
 * Callers:
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140031DCC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400356AC (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbOwnerComputeCpuPriorityKey(__int64 a1)
{
  unsigned __int16 v1; // ax
  char v2; // dl
  char v3; // cl
  char v4; // al
  unsigned int v6; // edx

  v1 = *(_WORD *)(a1 + 88);
  if ( (v1 & 0xFFFE) != 0 )
  {
    _BitScanReverse(&v6, v1 >> 1);
    v2 = v6 + 1;
  }
  else
  {
    v2 = 0;
  }
  v3 = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 563);
  if ( v3 > v2 )
  {
    v4 = v3;
    if ( v3 > 15 )
      return 15;
    return v4;
  }
  return v2;
}
