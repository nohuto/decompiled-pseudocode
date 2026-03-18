/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0028170
 * Callers:
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001B9DC (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001C738 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002592C (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0027A30 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0027B10 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0027BF0 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0027D10 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027DC0 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0028010 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C0028240 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C002E540 (imp_WdfDeviceCreateDeviceInterface.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  unsigned __int16 Length; // si
  unsigned __int16 v7; // di
  unsigned __int16 *v8; // rcx
  unsigned __int16 *v9; // rax
  unsigned __int16 *Buffer; // rax
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
    v9 = (unsigned __int16 *)FxPoolAllocator(
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
