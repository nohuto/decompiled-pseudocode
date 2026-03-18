/*
 * XREFs of ExInitSystemPhase2 @ 0x140768610
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExpMicrocodeInitialization_0 @ 0x1400012B8 (ExpMicrocodeInitialization_0.c)
 *     BootApplicationPersistentDataProcess @ 0x140768658 (BootApplicationPersistentDataProcess.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 */

__int64 ExInitSystemPhase2()
{
  __int64 result; // rax

  sub_14076925C();
  MEMORY[0xFFFFF780000002E0] = -1;
  BootApplicationPersistentDataProcess(0LL);
  ExpMicrocodeInitialization_0();
  result = (unsigned int)KeNumberProcessors_0;
  if ( dword_1406FB03C >= (unsigned int)KeNumberProcessors_0 )
  {
    result = (unsigned int)KeNumberProcessors_0;
    dword_1406FB03C = KeNumberProcessors_0;
  }
  return result;
}
