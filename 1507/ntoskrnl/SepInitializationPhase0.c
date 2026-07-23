/*
 * XREFs of SepInitializationPhase0 @ 0x1407BC43C
 * Callers:
 *     SeInitSystem @ 0x1407BC410 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x14046A3B8 (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x1407BC9E0 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x1407BD79C (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x1407BD844 (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x1407BD8FC (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x1407E38EC (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax

  if ( !(unsigned __int8)SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
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
  SepDefaultMandatorySid = (__int64)SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
