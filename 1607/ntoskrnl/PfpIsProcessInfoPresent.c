/*
 * XREFs of PfpIsProcessInfoPresent @ 0x1400069C4
 * Callers:
 *     PfpCopyEvent @ 0x1403E9400 (PfpCopyEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 744) && *(_QWORD *)(a1 + 776);
}
