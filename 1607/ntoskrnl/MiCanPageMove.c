/*
 * XREFs of MiCanPageMove @ 0x1401051DC
 * Callers:
 *     MiReferenceInPageFile @ 0x1400249D0 (MiReferenceInPageFile.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiObtainTransitionPage @ 0x140104F94 (MiObtainTransitionPage.c)
 *     MiReplaceLockedPage @ 0x1401EAFB8 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *PrototypePteDirect; // rax
  __int64 v4; // rdx

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    return 1LL;
  if ( (unsigned int)MiIsPfnFileOnly(a1) == 1 )
    return 0LL;
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v2 + 16));
  v4 = *PrototypePteDirect;
  if ( PrototypePteDirect == (_QWORD *)(*PrototypePteDirect + 128LL) || (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
    return 1LL;
  return (*(_DWORD *)(v4 + 92) & 0x10000000) == 0;
}
