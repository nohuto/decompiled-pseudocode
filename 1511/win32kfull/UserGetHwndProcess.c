/*
 * XREFs of UserGetHwndProcess @ 0x1C010A298
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C003C1DC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00D2428 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetHwndProcess(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = ValidateHwnd(a1);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 16)) != 0 )
    return **(_QWORD **)(v2 + 376);
  else
    return 0LL;
}
