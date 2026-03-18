/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x1401230BC
 * Callers:
 *     KeDisconnectInterrupt @ 0x140115AA4 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140115CE8 (KeMaskInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1401168C4 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140122784 (KeConnectInterrupt.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return off_1402D27F0();
  else
    return 0;
}
