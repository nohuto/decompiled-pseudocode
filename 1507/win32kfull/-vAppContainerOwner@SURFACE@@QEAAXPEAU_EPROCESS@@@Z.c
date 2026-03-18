/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C009CE48
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00111E4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx

  v4 = (unsigned __int64)a2;
  if ( a2 )
  {
    a3 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0);
    v4 &= a3;
  }
  GreAcquireHmgrSemaphore(this, a2, a3, a4);
  *((_QWORD *)this + 72) = v4;
  GreReleaseHmgrSemaphore();
}
