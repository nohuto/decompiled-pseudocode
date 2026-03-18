/*
 * XREFs of ExInitSystemPhase2 @ 0x1407DC92C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExpMicrocodeInitialization_0 @ 0x1400012B8 (ExpMicrocodeInitialization_0.c)
 *     BootApplicationPersistentDataProcess @ 0x1407DC974 (BootApplicationPersistentDataProcess.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 */

__int64 ExInitSystemPhase2()
{
  __int64 result; // rax

  sub_1407DD578();
  MEMORY[0xFFFFF780000002E0] = -1;
  BootApplicationPersistentDataProcess(0LL);
  ExpMicrocodeInitialization_0();
  result = (unsigned int)KeNumberProcessors_0;
  if ( dword_14077E03C >= (unsigned int)KeNumberProcessors_0 )
  {
    result = (unsigned int)KeNumberProcessors_0;
    dword_14077E03C = KeNumberProcessors_0;
  }
  return result;
}
