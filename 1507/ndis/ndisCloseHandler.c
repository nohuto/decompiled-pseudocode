/*
 * XREFs of ndisCloseHandler @ 0x1C00575C4
 * Callers:
 *     NdisWdfCloseIrpHandler @ 0x1C005BA40 (NdisWdfCloseIrpHandler.c)
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

int __fastcall ndisCloseHandler(const struct _DEVICE_OBJECT *a1, __int64 a2, _IRP *a3)
{
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *v7; // rcx
  struct _IRP *v8; // r8
  char v10; // al
  _FILE_OBJECT *FileObject; // rcx
  _BYTE *FsContext; // rbx
  KIRQL v13; // al
  KIRQL v14; // al
  __int64 v15; // rcx

  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDeviceCreateIrp(v7, v8);
  v10 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(0x19u, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v6, v8);
    v10 = byte_1C0085312;
  }
  if ( *(_BYTE *)a2 == 17 )
  {
    FileObject = a3->Tail.Overlay.CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
    if ( FsContext[24] )
      --*(_DWORD *)(a2 + 3808);
    else
      --*(_DWORD *)(a2 + 3724);
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v13);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage(&ndisPkgs);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    --*(_DWORD *)(a2 + 1800);
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v14);
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
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qq(0x1Bu, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a2, a3);
    return 0;
  }
  else
  {
    if ( (unsigned __int8)v10 >= 4u )
      WPP_SF_qq(0x1Au, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a2, a3);
    return ndisDummyHandler(a1, a2, a3);
  }
}
