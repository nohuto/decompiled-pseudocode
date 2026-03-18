/*
 * XREFs of KeInitializeGate @ 0x14012F290
 * Callers:
 *     KiInitializeProcessor @ 0x1403F8C60 (KiInitializeProcessor.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     MiInitializePartition @ 0x140596C34 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x1406AACD4 (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  result = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  return result;
}
