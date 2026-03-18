/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00170D0
 * Callers:
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00163D0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0016880 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0016960 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0016B60 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0016C80 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0016D30 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0017008 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001FDFC (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002009C (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002D058 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0033E10 (imp_WdfDeviceCreateDeviceInterface.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     memmove @ 0x1C003C440 (memmove.c)
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
