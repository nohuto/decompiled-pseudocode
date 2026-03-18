/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140155F14
 * Callers:
 *     KeDisconnectInterrupt @ 0x14014AF94 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14014B230 (KeMaskInterrupt.c)
 *     KeUnmaskInterrupt @ 0x14014BD7C (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140155538 (KeConnectInterrupt.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return off_140321940();
  else
    return 0;
}
