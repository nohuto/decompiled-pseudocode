/*
 * XREFs of NtGdiDdDDINetDispStartMiracastDisplayDevice @ 0x1C00C4200
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00C3858 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStartMiracastDisplayDevice(__int64 a1)
{
  if ( IsAllowedToCallMiracast() )
    return ((__int64 (__fastcall *)(__int64))qword_1C011B6B0)(a1);
  else
    return 2147483656LL;
}
