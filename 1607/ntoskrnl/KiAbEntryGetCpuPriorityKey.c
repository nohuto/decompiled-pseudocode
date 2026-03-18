/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x14006C3D8
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006BBA8 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006C0E4 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1)
{
  char result; // al

  if ( (a1[27] & 1) == 0 )
    return a1[48];
  if ( (a1[25] & 1) == 0 )
    return KiAbOwnerComputeCpuPriorityKey(a1);
  result = a1[-(unsigned __int16)(16 * a1[24]) + 195];
  if ( result > 15 )
    return 15;
  return result;
}
