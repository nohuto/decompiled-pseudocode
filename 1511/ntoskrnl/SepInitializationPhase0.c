/*
 * XREFs of SepInitializationPhase0 @ 0x14075B9D8
 * Callers:
 *     SeInitSystem @ 0x14077228C (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x14044F95C (ObInitializeFastReference.c)
 *     SepTokenInitialization @ 0x14075B748 (SepTokenInitialization.c)
 *     SeMakeSystemToken @ 0x14075BF7C (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x14075CD38 (SepInitializeWorkList.c)
 *     SepVariableInitialization @ 0x14075CDE0 (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x14076E6F0 (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax

  if ( !(unsigned __int8)SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *(_QWORD *)&KeGetCurrentThread()[1].SystemCallNumber = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 3, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
