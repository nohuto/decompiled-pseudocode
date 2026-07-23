/*
 * XREFs of KiAbTryIncrementIoWaiterCounts @ 0x14006BE50
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCounts(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v3; // r9
  _BYTE *v4; // r11
  unsigned int v6; // r10d
  unsigned __int8 *v7; // r8

  if ( (a1[25] & 1) == 0 )
    return 0LL;
  v3 = a1[27];
  v4 = a1 + 27;
  if ( (v3 & 6) == 6 )
    return 0LL;
  v6 = 0;
  v7 = &a1[-(unsigned __int16)(16 * a1[24])];
  if ( (v3 & 2) == 0 && ((int)PsGetIoPriorityThread(v7, a2, v7) >= 2 || *((_DWORD *)v7 + 446) != v6) )
  {
    *(_WORD *)(a2 + 90) ^= (*(_WORD *)(a2 + 90) ^ ((*(_WORD *)(a2 + 90) & 0xFFFE) + 2)) & 0x1FE;
    *v4 |= 2u;
    if ( (*(_WORD *)(a2 + 90) & 0x1FE) == 2 )
      v6 = 1;
  }
  if ( (*v4 & 4) == 0 && (!*((_DWORD *)v7 + 448) || *((_DWORD *)v7 + 447)) )
  {
    *(_WORD *)(a2 + 90) = *(_WORD *)(a2 + 90) & 0x1FF ^ ((*(_WORD *)(a2 + 90) & 0xFE00) + 512);
    *v4 |= 4u;
    if ( (*(_WORD *)(a2 + 90) & 0xFE00) == 0x200 )
      v6 |= 2u;
  }
  return v6;
}
