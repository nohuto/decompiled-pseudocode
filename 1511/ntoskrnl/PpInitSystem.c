/*
 * XREFs of PpInitSystem @ 0x1407713DC
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

int PpInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return PnpInitPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 2uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return 1;
}
