/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x140019478
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14043B3D4 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x14043B544 (_PnpDispatchDevice.c)
 *     _PnpDispatchInterfaceClass @ 0x140458418 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x14057E91C (_PnpDispatchInstallerClass.c)
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
