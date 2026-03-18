/*
 * XREFs of ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C001F484
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001F96C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

void __fastcall FxDevice::InstallPackage(FxDevice *this, FxPackage *Package)
{
  FxObject::AddRef(Package, 0LL, 0, 0LL);
  FxObject::AssignParentObject(Package, this);
}
