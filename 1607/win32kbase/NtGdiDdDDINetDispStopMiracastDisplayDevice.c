/*
 * XREFs of NtGdiDdDDINetDispStopMiracastDisplayDevice @ 0x1C00C4240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00C3858 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 */

__int64 __fastcall NtGdiDdDDINetDispStopMiracastDisplayDevice(__int64 a1, __int64 a2)
{
  if ( IsAllowedToCallMiracast() )
    return ((__int64 (__fastcall *)(__int64, __int64))qword_1C011B6B8)(a1, a2);
  else
    return 2147483656LL;
}
