/*
 * XREFs of Phase1Initialization @ 0x14059A0DC
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x140163120 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x1407D0850 (IoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 */

void __fastcall Phase1Initialization(PVOID StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  v2 = Phase1InitializationDiscard();
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
