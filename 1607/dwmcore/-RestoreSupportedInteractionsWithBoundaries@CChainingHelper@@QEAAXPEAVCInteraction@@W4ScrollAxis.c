/*
 * XREFs of ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180168A94
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z @ 0x18015E958 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z.c)
 *     _lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator() @ 0x1801687F0 (_lambda_aa746e2ed241174a5cc881b0a8c3db18_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6)
{
  __int64 v7; // rcx

  if ( a4 && a5 )
  {
    CChainingHelper::ChainToParent(a1, a1, a3, a4, a6);
  }
  else
  {
    v7 = 3LL * a3;
    *(_BYTE *)(a1 + 4 * v7) &= ~2u;
    *(_DWORD *)(a1 + 4 * v7 + 4) = 0;
    *(_BYTE *)(a1 + 36) |= 1u;
  }
}
