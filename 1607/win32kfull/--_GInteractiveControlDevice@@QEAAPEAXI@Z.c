/*
 * XREFs of ??_GInteractiveControlDevice@@QEAAPEAXI@Z @ 0x1C023A944
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C023BA48 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 * Callees:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023CD74 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 */

InteractiveControlDevice *__fastcall InteractiveControlDevice::`scalar deleting destructor'(
        InteractiveControlDevice *this)
{
  InteractiveControlDevice::Deinitialize(this);
  HMAssignmentUnlock((char *)this + 360);
  return this;
}
