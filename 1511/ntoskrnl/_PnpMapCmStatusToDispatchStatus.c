/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x14008FE50
 * Callers:
 *     _PnpDispatchDevice @ 0x14043E1C8 (_PnpDispatchDevice.c)
 *     _PnpDispatchDeviceInterface @ 0x14043FD2C (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchInstallerClass @ 0x1404604F8 (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchInterfaceClass @ 0x1404DE594 (_PnpDispatchInterfaceClass.c)
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
