/*
 * XREFs of ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C008C9B0
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008BEA8 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008C120 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C008C7B0 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C001553C (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

char __fastcall FxUsbDevice::IsObjectDisposedOnRemove(FxUsbDevice *this, FxDeviceBase *Object)
{
  FxDeviceBase *v3; // rdi
  char v5; // bp
  unsigned int RefCount; // edx
  FxTagTracker *m_CallbackLockPtr; // rcx
  FxObject *ParentObjectReferenced; // rbx
  char *v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-30h]
  char v12; // [rsp+78h] [rbp+10h] BYREF

  v3 = Object;
  v5 = 0;
  RefCount = _InterlockedIncrement(&Object->m_Refcnt);
  if ( SLOBYTE(v3->m_ObjectFlags) >= 0 )
    m_CallbackLockPtr = 0LL;
  else
    m_CallbackLockPtr = (FxTagTracker *)v3[-1].m_CallbackLockPtr;
  if ( m_CallbackLockPtr )
    FxTagTracker::UpdateTagHistory(
      m_CallbackLockPtr,
      Object,
      2390,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp",
      TagAddRef,
      RefCount);
  while ( v3 != this->m_DeviceBase )
  {
    v11 = 4104;
    v10 = &v12;
    if ( (v3->m_Type == 4104 || v3->QueryInterface(v3, (FxQueryInterfaceParams *)&v10) >= 0) && !BYTE1(v3[1].m_Refcnt) )
      break;
    ParentObjectReferenced = FxObject::GetParentObjectReferenced(v3, Object);
    v3->Release(v3, Object, 2416, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
    v3 = (FxDeviceBase *)ParentObjectReferenced;
    if ( !ParentObjectReferenced )
      return v5;
  }
  v5 = 1;
  if ( v3 )
    v3->Release(v3, Object, 2426, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
  return v5;
}
