/*
 * XREFs of MNSetupAnimationDC @ 0x1C01387E8
 * Callers:
 *     MNAllocMenuState @ 0x1C0107674 (MNAllocMenuState.c)
 *     FinalUserInit @ 0x1C0138628 (FinalUserInit.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GetDPIMetrics(v5, v4, v6);
    GreSelectFontInternal(*(HDC *)(a1 + 136));
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 1LL);
    return 1LL;
  }
  return result;
}
