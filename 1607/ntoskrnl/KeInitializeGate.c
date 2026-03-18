/*
 * XREFs of KeInitializeGate @ 0x1400AF81C
 * Callers:
 *     KiInitializeProcessor @ 0x1403D34A8 (KiInitializeProcessor.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PspSetContextThreadInternal @ 0x140517374 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140517A04 (PspGetContextThreadInternal.c)
 *     MiInitializePartition @ 0x14054ECF0 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x14066528C (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406826F4 (PspRundownUmsThreadForApcDelivery.c)
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
