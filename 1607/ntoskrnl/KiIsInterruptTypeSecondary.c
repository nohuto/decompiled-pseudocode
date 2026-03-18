/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x14012D8E0
 * Callers:
 *     KeDisconnectInterrupt @ 0x140123E5C (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x1401240A0 (KeMaskInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1401255DC (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14012CFC4 (KeConnectInterrupt.c)
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
