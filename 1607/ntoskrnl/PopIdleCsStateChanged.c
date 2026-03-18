/*
 * XREFs of PopIdleCsStateChanged @ 0x140674FAC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14066F9BC (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1401121A4 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14020D4E4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(char a1)
{
  PopAcquirePolicyLock();
  byte_1403033D1 = a1;
  if ( a1 )
  {
    qword_1403033D8 = qword_140328848;
    if ( !qword_140328848 )
      qword_1403033D8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( PopPdcLastCsExitReason != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_1403033B0 = 0;
    qword_1403033D8 = 0LL;
  }
  return PopReleasePolicyLock();
}
