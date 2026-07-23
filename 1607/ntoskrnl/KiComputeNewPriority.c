/*
 * XREFs of KiComputeNewPriority @ 0x1400D02B0
 * Callers:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KeSetBasePriorityThread @ 0x14007EE14 (KeSetBasePriorityThread.c)
 *     NtYieldExecution @ 0x140091250 (NtYieldExecution.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeNewPriority(__int64 a1, char a2)
{
  char v2; // r9
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // dl
  unsigned int v5; // eax
  int v7; // ecx

  v2 = *(_BYTE *)(a1 + 195);
  if ( v2 >= 16 )
    return (unsigned __int8)v2;
  v3 = *(_BYTE *)(a1 + 564);
  v4 = v2 - (a2 + (v3 & 0xF) + (v3 >> 4));
  if ( v4 < *(_BYTE *)(a1 + 563) )
    v4 = *(_BYTE *)(a1 + 563);
  if ( v3 )
  {
    if ( (v3 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  v5 = *(_DWORD *)(a1 + 1408);
  if ( v5 )
  {
    _BitScanReverse((unsigned int *)&v7, v5);
    if ( (char)v4 < v7 )
      return (unsigned __int8)v7;
  }
  return v4;
}
