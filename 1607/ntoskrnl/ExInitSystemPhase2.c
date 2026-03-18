/*
 * XREFs of ExInitSystemPhase2 @ 0x1407A916C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExpMicrocodeInitialization_0 @ 0x140001300 (ExpMicrocodeInitialization_0.c)
 *     BootApplicationPersistentDataProcess @ 0x1407A92C0 (BootApplicationPersistentDataProcess.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 */

__int64 ExInitSystemPhase2()
{
  __int64 result; // rax
  int v1; // ecx

  ExpWatchProductTypeInitialization();
  MEMORY[0xFFFFF780000002E0] = -1;
  BootApplicationPersistentDataProcess(0LL);
  result = ExpMicrocodeInitialization_0();
  v1 = dword_140757700;
  if ( dword_140757700 > (unsigned int)KeMaximumProcessors )
    v1 = KeMaximumProcessors;
  dword_140757700 = v1;
  return result;
}
