/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x1400C3CA8
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1404D81A8 (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchInterfaceClass @ 0x1404F6648 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchDevice @ 0x140500604 (_PnpDispatchDevice.c)
 *     _PnpDispatchDeviceInterface @ 0x1405010E0 (_PnpDispatchDeviceInterface.c)
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
