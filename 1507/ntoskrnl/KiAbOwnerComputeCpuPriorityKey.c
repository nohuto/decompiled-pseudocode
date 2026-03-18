/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x14012041C
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400F4C38 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0 (KiAbEntryUpdateOwnerTreePosition.c)
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
