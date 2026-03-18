/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0033E38
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  if ( a2 )
    v2 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0) & a2;
  GreAcquireHmgrSemaphore();
  HmgPentryFromPobj(this);
  *((_QWORD *)this + 73) = v2;
  GreReleaseHmgrSemaphore();
}
