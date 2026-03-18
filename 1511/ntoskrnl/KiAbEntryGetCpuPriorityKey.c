/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x1400356AC
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1)
{
  char result; // al

  if ( (a1[27] & 1) == 0 )
    return a1[48];
  if ( (a1[25] & 1) == 0 )
    return KiAbOwnerComputeCpuPriorityKey((__int64)a1);
  result = a1[-(unsigned __int16)(16 * a1[24]) + 195];
  if ( result > 15 )
    return 15;
  return result;
}
