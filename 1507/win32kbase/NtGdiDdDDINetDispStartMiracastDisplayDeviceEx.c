/*
 * XREFs of NtGdiDdDDINetDispStartMiracastDisplayDeviceEx @ 0x1C00B6700
 * Callers:
 *     <none>
 * Callees:
 *     GreIsInLowBox @ 0x1C00B3C90 (GreIsInLowBox.c)
 *     ?IsAllowedToCall@@YA_NXZ @ 0x1C00B5CD8 (-IsAllowedToCall@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStartMiracastDisplayDeviceEx(__int64 a1)
{
  __int64 v2; // rdx

  if ( (unsigned int)GreIsInLowBox() && !IsAllowedToCall() )
    return 2147483656LL;
  LOBYTE(v2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0101550)(a1, v2);
}
