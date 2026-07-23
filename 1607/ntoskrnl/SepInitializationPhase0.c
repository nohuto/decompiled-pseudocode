/*
 * XREFs of SepInitializationPhase0 @ 0x1407A24C4
 * Callers:
 *     SeInitSystem @ 0x1407A39CC (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x14047137C (ObInitializeFastReference.c)
 *     SepVariableInitialization @ 0x14078FC70 (SepVariableInitialization.c)
 *     SepTokenInitialization @ 0x1407A240C (SepTokenInitialization.c)
 *     SeMakeSystemToken @ 0x1407A2B10 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x1407A3924 (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x1407B868C (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax

  if ( !SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *(_QWORD *)&KeGetCurrentThread()[1].SystemCallNumber = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
