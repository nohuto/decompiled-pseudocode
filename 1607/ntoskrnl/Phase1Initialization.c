/*
 * XREFs of Phase1Initialization @ 0x14054EDB4
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x140139F48 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x1407936BC (IoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_1407605D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
