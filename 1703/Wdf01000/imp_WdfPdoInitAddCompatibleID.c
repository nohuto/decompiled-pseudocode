/*
 * XREFs of imp_WdfPdoInitAddCompatibleID @ 0x1C0030330
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000307C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddCompatibleID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *CompatibleID)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  __int64 result; // rax
  _POOL_TYPE v7; // ebx
  ULONG Tag; // edi
  void *Caller; // rax
  _QWORD *v10; // rax
  _FX_DRIVER_GLOBALS *v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // edi
  _QWORD *v15; // rax
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v17; // rcx
  unsigned int v18; // r15d
  unsigned __int8 CurrentIrql; // al
  FxTagTracker *v20; // rcx
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 Size; // [rsp+78h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceInit->DriverGlobals;
  if ( !CompatibleID )
    FxVerifierNullBugCheck(v5, retaddr);
  if ( v5->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(v5, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    FxVerifierDbgBreakPoint(v5);
    return 3221225488LL;
  }
  else
  {
    result = FxValidateUnicodeString(v5, CompatibleID);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
      {
        v7 = ExDefaultNonPagedPoolType;
        Tag = v5->Tag;
        if ( (int)FxCalculateObjectTotalSize2(v5, 0x78u, 0, 0LL, &Size) < 0 )
          goto LABEL_33;
        if ( v5->FxPoolTrackingOn )
          Caller = retaddr;
        else
          Caller = 0LL;
        v10 = FxPoolAllocator(v5, &v5->FxPoolFrameworks, v7, Size, Tag, Caller);
        v12 = v10;
        if ( v10 )
        {
          if ( v5->FxVerifierHandle )
          {
            memset(v10, 0, 0x30uLL);
            *((_DWORD *)v12 + 8) = 1146058822;
            v12 += 6;
          }
          memset(v12 + 16, 0, 0x30uLL);
          v12[16] = v12;
        }
        if ( v12 )
        {
          v12[2] = v5;
          *v12 = &FxObject::`vftable';
          *((_DWORD *)v12 + 2) = 8392711;
          v12[7] = 0LL;
          *((_BYTE *)v12 + 48) = 1;
          *((_DWORD *)v12 + 6) = 0x10000;
          v12[8] = 0LL;
          *((_DWORD *)v12 + 3) = 1;
          v12[5] = v12 + 4;
          v12[4] = v12 + 4;
          v12[10] = v12 + 9;
          v12[9] = v12 + 9;
          v13 = v12[2];
          v12[11] = 0LL;
          v12[12] = 0LL;
          if ( *(_BYTE *)(v13 + 316) )
            FxObject::Vf_VerifyConstruct((FxObject *)v12, v11, 0);
          *v12 = FxString::`vftable';
          RtlInitUnicodeString((PUNICODE_STRING)(v12 + 13), 0LL);
          *((_WORD *)v12 + 12) |= 0x10u;
          v14 = FxDuplicateUnicodeString((_FX_DRIVER_GLOBALS *)v12[2], CompatibleID, (_UNICODE_STRING *)(v12 + 13));
          if ( v14 >= 0 )
          {
            v15 = FxPoolAllocator(v5, &v5->FxPoolFrameworks, ExDefaultNonPagedPoolType, 0x18uLL, v5->Tag, retaddr);
            if ( v15 )
            {
              Blink = DeviceInit->Pdo.CompatibleIDs.m_ListHead.Blink;
              v17 = (_LIST_ENTRY *)(v15 + 1);
              if ( Blink->Flink != &DeviceInit->Pdo.CompatibleIDs.m_ListHead )
                __fastfail(3u);
              v17->Flink = &DeviceInit->Pdo.CompatibleIDs.m_ListHead;
              v15[2] = Blink;
              Blink->Flink = v17;
              DeviceInit->Pdo.CompatibleIDs.m_ListHead.Blink = v17;
              *v15 = v12;
              v18 = _InterlockedIncrement((volatile signed __int32 *)v12 + 3);
              if ( *((char *)v12 + 24) < 0 )
              {
                v20 = (FxTagTracker *)*(v12 - 6);
                if ( v20 )
                  FxTagTracker::UpdateTagHistory(
                    v20,
                    &DeviceInit->Pdo.CompatibleIDs,
                    185,
                    "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
                    TagAddRef,
                    v18);
              }
              ++DeviceInit->Pdo.CompatibleIDs.m_Count;
              v14 = 0;
            }
            else
            {
              v14 = -1073741823;
            }
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*v12 + 16LL))(v12, 0LL, 0LL, 0LL);
          return (unsigned int)v14;
        }
        else
        {
LABEL_33:
          WPP_IFR_SF_(v5, 2u, 0x12u, 0x3Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
          return 3221225626LL;
        }
      }
      else
      {
        WPP_IFR_SF_d(v5, 2u, 0x12u, 0x3Du, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
        return 3221225488LL;
      }
    }
  }
  return result;
}
