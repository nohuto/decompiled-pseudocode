/*
 * XREFs of ndisDeviceInternalDispatch @ 0x1C0062AD8
 * Callers:
 *     NdisWdfDeviceInternalControlIrpHandler @ 0x1C005F630 (NdisWdfDeviceInternalControlIrpHandler.c)
 *     ndisDeviceInternalIrpDispatch @ 0x1C0062BC0 (ndisDeviceInternalIrpDispatch.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C009B98C (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisDummyHandler @ 0x1C009C11C (ndisDummyHandler.c)
 *     ?ndisSetupDeviceInternalIoControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E25A4 (-ndisSetupDeviceInternalIoControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisDeviceInternalDispatch(struct _DEVICE_OBJECT *a1, __int64 a2, struct _IRP *a3)
{
  NTSTATUS v6; // edi
  struct _DEVICE_OBJECT *v7; // rcx
  NTSTATUS v9; // eax
  _DEVICE_OBJECT *v10; // rcx

  v6 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x37u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a1, a3);
  ndisReferencePackage(&ndisPkgs);
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDeviceInternalIoControl(v7, a3);
  if ( *(_BYTE *)a2 != 17 )
  {
    v9 = ndisDummyHandler(a1, a2, a3);
LABEL_9:
    v6 = v9;
    goto LABEL_10;
  }
  v10 = *(_DEVICE_OBJECT **)(a2 + 3896);
  if ( v10 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver(v10, a3);
    goto LABEL_9;
  }
LABEL_10:
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x38u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a1, a3);
  return v6;
}
