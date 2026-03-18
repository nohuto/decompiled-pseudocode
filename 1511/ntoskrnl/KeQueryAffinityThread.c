/*
 * XREFs of KeQueryAffinityThread @ 0x14012B9A4
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeQueryAffinityThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v7, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 560);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
