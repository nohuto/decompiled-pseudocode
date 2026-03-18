/*
 * XREFs of MNSetupAnimationDC @ 0x1C00BC588
 * Callers:
 *     FinalUserInit @ 0x1C00BC3C8 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C013B658 (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GetDPIMetrics();
    GreSelectFontInternal(*(HDC *)(a1 + 136));
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 1LL);
    return 1LL;
  }
  return result;
}
