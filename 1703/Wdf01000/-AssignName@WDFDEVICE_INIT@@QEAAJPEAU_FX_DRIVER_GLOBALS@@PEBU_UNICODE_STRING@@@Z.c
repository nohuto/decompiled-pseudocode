/*
 * XREFs of ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0030EDC
 * Callers:
 *     imp_WdfDeviceInitAssignName @ 0x1C002FE30 (imp_WdfDeviceInitAssignName.c)
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0001D80 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0001DA8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030620 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall WDFDEVICE_INIT::AssignName(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Name)
{
  _POOL_TYPE v6; // ebp
  ULONG Tag; // r14d
  unsigned __int64 ContextSize; // rax
  __int16 v9; // cx
  void *Caller; // rax
  _QWORD *v11; // rax
  FxString *v12; // rax
  FxString *v13; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 Size; // [rsp+50h] [rbp+8h] BYREF

  if ( this->DeviceName )
    return FxDuplicateUnicodeString(this->DeviceName->m_Globals, Name, &this->DeviceName->m_UnicodeString);
  v6 = ExDefaultNonPagedPoolType;
  Tag = FxDriverGlobals->Tag;
  ContextSize = FxGetContextSize(0LL);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, v9 + 120, 0, ContextSize, &Size) >= 0
    && (FxDriverGlobals->FxPoolTrackingOn ? (Caller = retaddr) : (Caller = 0LL),
        (v11 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v6, Size, Tag, Caller)) != 0LL
     && (v12 = (FxString *)FxObjectAndHandleHeaderInit(FxDriverGlobals, v11, 0x80u, 0LL, FxObjectTypeExternal)) != 0LL) )
  {
    FxString::FxString(v12, FxDriverGlobals);
  }
  else
  {
    v13 = 0LL;
  }
  this->DeviceName = v13;
  if ( v13 )
  {
    this->Characteristics &= ~0x80u;
    return FxDuplicateUnicodeString(this->DeviceName->m_Globals, Name, &this->DeviceName->m_UnicodeString);
  }
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInit_cpp_Traceguids, -1073741670);
  return 3221225626LL;
}
