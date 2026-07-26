/*
 * XREFs of ndisCloseHandler @ 0x1C000B2C0
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C000B3F0 (ndisCloseIrpHandler.c)
 *     NdisWdfCloseIrpHandler @ 0x1C005B7B0 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C0093CCC (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisDummyHandler @ 0x1C009762C (ndisDummyHandler.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00DC6F4 (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisCloseHandler(const struct _DEVICE_OBJECT *a1, __int64 a2, _IRP *a3)
{
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *v7; // rcx
  struct _IRP *v8; // r8
  char v9; // al
  _FILE_OBJECT *FileObject; // rcx
  _BYTE *FsContext; // rbx
  KIRQL v12; // al
  KIRQL v13; // al
  __int64 v15; // rcx

  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDeviceCreateIrp(v7, v8);
  v9 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(25LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v6, v8);
    v9 = byte_1C0083712;
  }
  if ( *(_BYTE *)a2 == 17 )
  {
    FileObject = a3->Tail.Overlay.CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
    if ( FsContext[24] )
      --*(_DWORD *)(a2 + 3808);
    else
      --*(_DWORD *)(a2 + 3724);
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v12);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage(&ndisPkgs);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    --*(_DWORD *)(a2 + 1800);
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v13);
    ndisDereferencePackage(&ndisPkgs);
    ndisDereferenceMiniport(a2, 0x53u);
    if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
    {
      v15 = *(_QWORD *)(a2 + 4040);
      if ( v15 )
        (*(void (__fastcall **)(_QWORD))(v15 + 40))(*(_QWORD *)(v15 + 8));
    }
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_qq(27LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a2, a3);
    return 0;
  }
  else
  {
    if ( (unsigned __int8)v9 >= 4u )
      WPP_SF_qq(26LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a2, a3);
    return ndisDummyHandler(a1, a2, a3);
  }
}
