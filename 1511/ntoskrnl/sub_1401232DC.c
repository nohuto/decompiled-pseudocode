/*
 * XREFs of sub_1401232DC @ 0x1401232DC
 * Callers:
 *     RtlTimeToTimeFields @ 0x140123118 (RtlTimeToTimeFields.c)
 *     RtlTimeToElapsedTimeFields @ 0x140648200 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     RtlExtendedMagicDivide @ 0x140123324 (RtlExtendedMagicDivide.c)
 */

LARGE_INTEGER __fastcall sub_1401232DC(LARGE_INTEGER *a1, __int64 a2, _DWORD *a3)
{
  LARGE_INTEGER v4; // rax
  LARGE_INTEGER result; // rax
  ULONG *v6; // r11
  int v7; // r10d

  v4 = RtlExtendedMagicDivide(*a1, Magic10000, 13);
  result = RtlExtendedMagicDivide(v4, Magic86400000, 26);
  *v6 = result.LowPart;
  *a3 = v7 - 86400000 * result.LowPart;
  return result;
}
