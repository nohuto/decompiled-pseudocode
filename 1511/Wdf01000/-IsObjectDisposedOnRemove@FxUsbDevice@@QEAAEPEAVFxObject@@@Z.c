/*
 * XREFs of ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C007BD70
 * Callers:
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0056574 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007B404 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007B624 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 * Callees:
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C002308C (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

char __fastcall FxUsbDevice::IsObjectDisposedOnRemove(FxUsbDevice *this, FxDeviceBase *Object)
{
  char v3; // si
  FxDeviceBase *v5; // rdi
  FxObject *ParentObjectReferenced; // rbx
  char *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  char v10; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v5 = Object;
  FxObject::AddRef(Object, Object, 2391, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
  if ( v5 )
  {
    while ( v5 != this->m_DeviceBase )
    {
      v9 = 4104;
      v8 = &v10;
      if ( (v5->m_Type == 4104 || v5->QueryInterface(v5, (FxQueryInterfaceParams *)&v8) >= 0) && !BYTE1(v5[1].m_Refcnt) )
        break;
      ParentObjectReferenced = FxObject::GetParentObjectReferenced(v5, Object);
      v5->Release(v5, Object, 2417, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
      v5 = (FxDeviceBase *)ParentObjectReferenced;
      if ( !ParentObjectReferenced )
        return v3;
    }
    v3 = 1;
    if ( v5 )
      v5->Release(v5, Object, 2427, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
  }
  return v3;
}
