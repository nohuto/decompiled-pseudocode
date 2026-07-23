/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x14012DE50
 * Callers:
 *     KeDisconnectInterrupt @ 0x1401243CC (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 *     KeUnmaskInterrupt @ 0x140125B4C (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14012D534 (KeConnectInterrupt.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return off_1402F2490();
  else
    return 0;
}
