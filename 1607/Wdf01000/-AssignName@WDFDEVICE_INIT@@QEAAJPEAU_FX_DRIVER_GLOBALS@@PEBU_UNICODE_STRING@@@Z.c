/*
 * XREFs of ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002009C
 * Callers:
 *     imp_WdfDeviceInitAssignName @ 0x1C0037370 (imp_WdfDeviceInitAssignName.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017018 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00170D0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall WDFDEVICE_INIT::AssignName(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Name)
{
  FxString *v6; // rax
  FxString *v7; // rax

  if ( this->DeviceName )
    return FxDuplicateUnicodeString(this->DeviceName->m_Globals, Name, &this->DeviceName->m_UnicodeString);
  v6 = (FxString *)FxObjectHandleAlloc(
                     FxDriverGlobals,
                     ExDefaultNonPagedPoolType,
                     0x78uLL,
                     0,
                     0LL,
                     0,
                     FxObjectTypeExternal);
  if ( v6 )
    FxString::FxString(v6, FxDriverGlobals);
  else
    v7 = 0LL;
  this->DeviceName = v7;
  if ( v7 )
  {
    this->Characteristics &= ~0x80u;
    return FxDuplicateUnicodeString(this->DeviceName->m_Globals, Name, &this->DeviceName->m_UnicodeString);
  }
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInit_cpp_Traceguids, -1073741670);
  return 3221225626LL;
}
