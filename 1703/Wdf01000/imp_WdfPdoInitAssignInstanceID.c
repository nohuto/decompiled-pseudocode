/*
 * XREFs of imp_WdfPdoInitAssignInstanceID @ 0x1C002FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0001D80 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0001DA8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000307C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030620 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfPdoInitAssignInstanceID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *InstanceID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  int result; // eax
  _POOL_TYPE v8; // ebp
  ULONG Tag; // r14d
  unsigned __int64 ContextSize; // rax
  __int16 v11; // cx
  void *Caller; // rax
  _QWORD *v13; // rax
  FxString *v14; // rax
  FxString *v15; // rax
  int v16; // edi
  unsigned __int16 v17; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 Size; // [rsp+58h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !InstanceID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(v5, InstanceID);
    if ( result >= 0 )
    {
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
      {
        if ( DeviceInit->Pdo.InstanceID )
          return FxDuplicateUnicodeString(
                   DeviceInit->Pdo.InstanceID->m_Globals,
                   InstanceID,
                   &DeviceInit->Pdo.InstanceID->m_UnicodeString);
        v8 = ExDefaultNonPagedPoolType;
        Tag = v5->Tag;
        ContextSize = FxGetContextSize(0LL);
        if ( (int)FxCalculateObjectTotalSize2(v5, v11 + 120, 0, ContextSize, &Size) >= 0
          && (v5->FxPoolTrackingOn ? (Caller = retaddr) : (Caller = 0LL),
              (v13 = FxPoolAllocator(v5, &v5->FxPoolFrameworks, v8, Size, Tag, Caller)) != 0LL
           && (v14 = (FxString *)FxObjectAndHandleHeaderInit(v5, v13, 0x80u, 0LL, FxObjectTypeExternal)) != 0LL) )
        {
          FxString::FxString(v14, v5);
        }
        else
        {
          v15 = 0LL;
        }
        DeviceInit->Pdo.InstanceID = v15;
        if ( v15 )
          return FxDuplicateUnicodeString(
                   DeviceInit->Pdo.InstanceID->m_Globals,
                   InstanceID,
                   &DeviceInit->Pdo.InstanceID->m_UnicodeString);
        v16 = -1073741670;
        v17 = 58;
      }
      else
      {
        v16 = -1073741808;
        v17 = 57;
      }
      WPP_IFR_SF_d(v5, 2u, 0x12u, v17, WPP_FxDeviceInitApi_cpp_Traceguids, v16);
      return v16;
    }
  }
  return result;
}
