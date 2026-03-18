/*
 * XREFs of Phase1Initialization @ 0x14052FD40
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x140136BB8 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140763E54 (IoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
