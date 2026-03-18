/*
 * XREFs of ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C000E414
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E9B8 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxDevice::InstallPackage(FxDevice *this, FxPackage *Package)
{
  unsigned int RefCount; // edx
  _SINGLE_LIST_ENTRY *Next; // rcx

  RefCount = _InterlockedIncrement(&Package->m_Refcnt);
  if ( SLOBYTE(Package->m_ObjectFlags) < 0 )
    Next = Package[-1].m_DisposeSingleEntry.Next;
  else
    Next = 0LL;
  if ( Next )
    FxTagTracker::UpdateTagHistory((FxTagTracker *)Next, 0LL, 0, 0LL, TagAddRef, RefCount);
  FxObject::AssignParentObject(Package, this);
}
