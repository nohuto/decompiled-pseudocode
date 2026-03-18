/*
 * XREFs of ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C0081D18
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C008197C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIrpDynamicDispatchInfo::Mj2Index(unsigned __int8 MajorFunction)
{
  __int64 result; // rax

  result = 3LL;
  switch ( MajorFunction )
  {
    case 3u:
      return 0LL;
    case 4u:
      return 1LL;
    case 0xEu:
      return 2LL;
  }
  if ( MajorFunction != 15 )
    return 4LL;
  return result;
}
