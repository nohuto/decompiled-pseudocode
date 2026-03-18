/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0018BD0 (imp_WdfRegistryQueryMultiString.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002066C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002ECB4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C002FE90 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C002FFD0 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0030110 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0030280 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0030330 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0030EDC (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfStringCreate @ 0x1C0030FE0 (imp_WdfStringCreate.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C0031120 (imp_WdfDeviceInitAssignSDDLString.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0031294 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C0031470 (imp_WdfRegistryQueryString.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0031C20 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0037B00 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0076890 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C0077BB0 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x1C007A7F0 (imp_WdfDriverRetrieveVersionString.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  unsigned __int16 Length; // si
  unsigned __int16 v7; // di
  wchar_t *v8; // rcx
  wchar_t *v9; // rax
  wchar_t *Buffer; // rax
  void *Caller; // [rsp+38h] [rbp+0h]

  Length = Source->Length;
  v7 = Source->Length + 2;
  if ( (unsigned __int16)(Length + 2) < Length )
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 2u, 0xAu, WPP_stringutil_cpp_Traceguids, -1073741675);
    return 3221225621LL;
  }
  else
  {
    if ( Destination->MaximumLength >= v7 )
    {
LABEL_7:
      memmove(Destination->Buffer, Source->Buffer, Length);
      Buffer = Destination->Buffer;
      Destination->Length = Length;
      Buffer[(unsigned __int64)Length >> 1] = 0;
      return 0LL;
    }
    v8 = Destination->Buffer;
    if ( v8 )
    {
      FxPoolFree(v8);
      *(_QWORD *)&Destination->Length = 0LL;
      Destination->Buffer = 0LL;
    }
    v9 = (wchar_t *)FxPoolAllocator(
                      FxDriverGlobals,
                      &FxDriverGlobals->FxPoolFrameworks,
                      1u,
                      (unsigned __int16)(Length + 2),
                      FxDriverGlobals->Tag,
                      Caller);
    Destination->Buffer = v9;
    if ( v9 )
    {
      Destination->MaximumLength = v7;
      goto LABEL_7;
    }
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 2u, 0xBu, WPP_stringutil_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
