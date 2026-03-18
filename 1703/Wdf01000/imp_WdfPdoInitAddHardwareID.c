/*
 * XREFs of imp_WdfPdoInitAddHardwareID @ 0x1C0030110
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
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0030A90 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddHardwareID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *HardwareID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 result; // rax
  _POOL_TYPE v8; // edi
  ULONG Tag; // ebp
  unsigned __int64 ContextSize; // rax
  __int16 v11; // cx
  void *Caller; // rax
  _QWORD *v13; // rax
  FxString *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  signed int v17; // esi
  unsigned int v18; // edi
  unsigned __int16 v19; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 Size; // [rsp+58h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !HardwareID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v5, HardwareID);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
      {
        v8 = ExDefaultNonPagedPoolType;
        Tag = v5->Tag;
        ContextSize = FxGetContextSize(0LL);
        if ( (int)FxCalculateObjectTotalSize2(v5, v11 + 120, 0, ContextSize, &Size) >= 0
          && (v5->FxPoolTrackingOn ? (Caller = retaddr) : (Caller = 0LL),
              (v13 = FxPoolAllocator(v5, &v5->FxPoolFrameworks, v8, Size, Tag, Caller)) != 0LL
           && (v14 = (FxString *)FxObjectAndHandleHeaderInit(v5, v13, 0x80u, 0LL, FxObjectTypeExternal)) != 0LL) )
        {
          FxString::FxString(v14, v5);
          v16 = v15;
        }
        else
        {
          v16 = 0LL;
        }
        if ( v16 )
        {
          v17 = FxDuplicateUnicodeString(*(_FX_DRIVER_GLOBALS **)(v16 + 16), HardwareID, (_UNICODE_STRING *)(v16 + 104));
          if ( v17 >= 0 )
            v17 = FxCollectionInternal::Add(&DeviceInit->Pdo.HardwareIDs, v5, (FxObject *)v16) == 0 ? 0xC0000001 : 0;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 16LL))(v16, 0LL, 0LL, 0LL);
          return (unsigned int)v17;
        }
        v18 = -1073741670;
        v19 = 60;
      }
      else
      {
        v18 = -1073741808;
        v19 = 59;
      }
      WPP_IFR_SF_d(v5, 2u, 0x12u, v19, WPP_FxDeviceInitApi_cpp_Traceguids, v18);
      return v18;
    }
  }
  return result;
}
