/*
 * XREFs of ndisCloseIrpHandler @ 0x1C0003150
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C0096504 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ndisDummyHandler @ 0x1C00D09F8 (ndisDummyHandler.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E29A4 (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisCloseIrpHandler(const struct _DEVICE_OBJECT *a1, _IRP *a2)
{
  KSPIN_LOCK *DeviceExtension; // rdi
  struct _IRP *v5; // rdx
  struct _DEVICE_OBJECT *v6; // rcx
  unsigned int v7; // esi
  char v8; // al
  _FILE_OBJECT *FileObject; // rcx
  _BYTE *FsContext; // rbx
  KIRQL v11; // al
  KIRQL v12; // al
  __int64 v13; // rdx
  KSPIN_LOCK v16; // rcx

  DeviceExtension = (KSPIN_LOCK *)a1->DeviceExtension;
  v7 = 0;
  if ( ndisIsSetupDevice(a1) )
    return (unsigned int)ndisSetupDeviceCreateIrp(v6, v5);
  v8 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(25LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, DeviceExtension, v5);
    v8 = byte_1C0085312;
  }
  if ( *(_BYTE *)DeviceExtension != 17 )
  {
    if ( (unsigned __int8)v8 >= 4u )
      WPP_SF_qq(26LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, DeviceExtension, a2);
    return (unsigned int)ndisDummyHandler(a1, DeviceExtension, a2);
  }
  FileObject = a2->Tail.Overlay.CurrentStackLocation->FileObject;
  FsContext = FileObject->FsContext;
  FileObject->FsContext = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc(DeviceExtension + 562);
  if ( FsContext[24] )
    --*((_DWORD *)DeviceExtension + 952);
  else
    --*((_DWORD *)DeviceExtension + 931);
  KeReleaseSpinLock(DeviceExtension + 562, v11);
  ExFreePoolWithTag(FsContext, 0);
  ndisReferencePackage(&ndisPkgs);
  v12 = KeAcquireSpinLockRaiseToDpc(DeviceExtension + 12);
  --*((_DWORD *)DeviceExtension + 450);
  DeviceExtension[65] = 0LL;
  *((_DWORD *)DeviceExtension + 464) = 0;
  KeReleaseSpinLock(DeviceExtension + 12, v12);
  ndisDereferencePackage(&ndisPkgs);
  LOBYTE(v13) = 83;
  ndisDereferenceMiniport(DeviceExtension, v13);
  if ( (*((_DWORD *)DeviceExtension + 31) & 0x2000) != 0 )
  {
    v16 = DeviceExtension[505];
    if ( v16 )
      (*(void (__fastcall **)(_QWORD))(v16 + 40))(*(_QWORD *)(v16 + 8));
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 2);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(27LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, DeviceExtension, a2);
  return v7;
}
