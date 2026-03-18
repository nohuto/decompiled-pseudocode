/*
 * XREFs of ?Invoke@FxPnpDeviceFilterResourceRequirements@@QEAAJPEAUWDFDEVICE__@@PEAUWDFIORESREQLIST__@@@Z @ 0x1C003C1A0
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002914C (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

int (__fastcall *__fastcall FxPnpDeviceFilterResourceRequirements::Invoke(
        FxPnpDeviceFilterResourceRequirements *this,
        WDFDEVICE__ *Device,
        WDFIORESREQLIST__ *Collection))(WDFDEVICE__ *, WDFIORESREQLIST__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax

  result = this->m_Method;
  if ( this->m_Method )
    return (int (__fastcall *)(WDFDEVICE__ *, WDFIORESREQLIST__ *))((__int64 (__fastcall *)(WDFDEVICE__ *, WDFIORESREQLIST__ *))result)(
                                                                     Device,
                                                                     Collection);
  return result;
}
