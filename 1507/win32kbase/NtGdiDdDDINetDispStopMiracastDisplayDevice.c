/*
 * XREFs of NtGdiDdDDINetDispStopMiracastDisplayDevice @ 0x1C00B6740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     GreIsInLowBox @ 0x1C00B3C90 (GreIsInLowBox.c)
 *     ?IsAllowedToCall@@YA_NXZ @ 0x1C00B5CD8 (-IsAllowedToCall@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStopMiracastDisplayDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  if ( (unsigned int)GreIsInLowBox() && !IsAllowedToCall() )
    return 2147483656LL;
  LOBYTE(v4) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C0101558)(a1, a2, v4);
}
