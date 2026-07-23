/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x1400C1B38
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1404BB7AC (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchInterfaceClass @ 0x1404D95D4 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchDevice @ 0x1404E3594 (_PnpDispatchDevice.c)
 *     _PnpDispatchDeviceInterface @ 0x1404E4070 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMapCmStatusToDispatchStatus(unsigned int a1)
{
  if ( a1 != -1073741810 )
  {
    if ( a1 == -1073741767 )
      return 3221225523LL;
    if ( a1 != -1073741766 )
    {
      if ( a1 == -1073741637 )
        return 3221226021LL;
      if ( a1 != -1073741632 )
        return a1;
    }
  }
  return 3221225524LL;
}
