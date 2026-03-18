/*
 * XREFs of MNSetupAnimationDC @ 0x1C00D75E4
 * Callers:
 *     FinalUserInit @ 0x1C00D744C (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C0134728 (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 DPIMetrics; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GreSetDCOwnerEx(result, 0LL, 0LL, 1LL);
    DPIMetrics = GetDPIMetrics();
    GreSelectFont(*(_QWORD *)(a1 + 136), *(_QWORD *)(DPIMetrics + 8));
    return 1LL;
  }
  return result;
}
