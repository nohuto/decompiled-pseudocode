/*
 * XREFs of imp_WdfPdoInitAddCompatibleID @ 0x1C0010330
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00105B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddCompatibleID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *CompatibleID)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  unsigned __int16 Length; // dx
  int _a2; // eax
  _POOL_TYPE v8; // ebx
  ULONG Tag; // edi
  _LIST_ENTRY *Caller; // rax
  _QWORD *v11; // rax
  _FX_DRIVER_GLOBALS *v12; // rdx
  _QWORD *v13; // rbx
  __int64 v14; // rax
  int v15; // edi
  _QWORD *v16; // rax
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v18; // rcx
  unsigned int v19; // r12d
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v22; // r9
  FxTagTracker *v23; // rcx
  _LIST_ENTRY *retaddr; // [rsp+88h] [rbp+0h]
  int v25; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 Size; // [rsp+A8h] [rbp+20h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v5 = DeviceInit->DriverGlobals;
  if ( !CompatibleID )
    FxVerifierNullBugCheck(v5, retaddr);
  if ( v5->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v5, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v25 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v5->Public.DriverName,
        (const char *)&v25,
        v5->Public.DriverName,
        (const char *)&v25);
      if ( v5->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  Length = CompatibleID->Length;
  if ( (CompatibleID->Length & 1) != 0 )
  {
    _a2 = Length;
    v22 = 13;
LABEL_34:
    WPP_IFR_SF_qdd(v5, 2u, 6u, v22, WPP_FxValidateFunctions_hpp_Traceguids_0, CompatibleID, _a2, -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = CompatibleID->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v22 = 14;
    goto LABEL_34;
  }
  if ( (_WORD)_a2 && !CompatibleID->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v22 = 15;
    goto LABEL_34;
  }
  if ( Length > (unsigned __int16)_a2 )
  {
    WPP_IFR_SF_qddd(
      v5,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      CompatibleID,
      Length,
      (unsigned __int16)_a2,
      -1073741811);
    return 3221225485LL;
  }
  if ( DeviceInit->InitType == FxDeviceInitTypePdo )
  {
    v8 = ExDefaultNonPagedPoolType;
    Tag = v5->Tag;
    if ( FxCalculateObjectTotalSize2(v5, 0x78u, 0, 0LL, &Size) < 0 )
      goto LABEL_44;
    if ( v5->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v11 = FxPoolAllocator(v5, (_LIST_ENTRY *)&v5->FxPoolFrameworks, v8, Size, Tag, Caller);
    v13 = v11;
    if ( v11 )
    {
      if ( v5->FxVerifierHandle )
      {
        memset(v11, 0, 0x20uLL);
        *((_DWORD *)v13 + 7) = 1146058822;
        v13 += 4;
      }
      memset(v13 + 16, 0, 0x30uLL);
      v13[16] = v13;
    }
    if ( v13 )
    {
      v13[2] = v5;
      *v13 = &FxObject::`vftable';
      *((_DWORD *)v13 + 2) = 8392711;
      v13[7] = 0LL;
      *((_BYTE *)v13 + 48) = 1;
      *((_DWORD *)v13 + 6) = 0x10000;
      v13[8] = 0LL;
      *((_DWORD *)v13 + 3) = 1;
      v13[5] = v13 + 4;
      v13[4] = v13 + 4;
      v13[10] = v13 + 9;
      v13[9] = v13 + 9;
      v14 = v13[2];
      v13[11] = 0LL;
      v13[12] = 0LL;
      if ( *(_BYTE *)(v14 + 316) )
        FxObject::Vf_VerifyConstruct((FxObject *)v13, v12, 0);
      *v13 = &FxString::`vftable';
      RtlInitUnicodeString((PUNICODE_STRING)(v13 + 13), 0LL);
      *((_WORD *)v13 + 12) |= 0x10u;
      v15 = FxDuplicateUnicodeString((_FX_DRIVER_GLOBALS *)v13[2], CompatibleID, (_UNICODE_STRING *)(v13 + 13));
      if ( v15 >= 0 )
      {
        v16 = FxPoolAllocator(
                v5,
                (_LIST_ENTRY *)&v5->FxPoolFrameworks,
                ExDefaultNonPagedPoolType,
                0x18uLL,
                v5->Tag,
                retaddr);
        if ( v16 )
        {
          Blink = DeviceInit->Pdo.CompatibleIDs.m_ListHead.Blink;
          v18 = (_LIST_ENTRY *)(v16 + 1);
          v16[1] = &DeviceInit->Pdo.CompatibleIDs.m_ListHead;
          v16[2] = Blink;
          if ( Blink->Flink != &DeviceInit->Pdo.CompatibleIDs.m_ListHead )
            __fastfail(3u);
          Blink->Flink = v18;
          DeviceInit->Pdo.CompatibleIDs.m_ListHead.Blink = v18;
          *v16 = v13;
          v19 = _InterlockedIncrement((volatile signed __int32 *)v13 + 3);
          if ( *((char *)v13 + 24) < 0 )
          {
            v23 = (FxTagTracker *)*(v13 - 4);
            if ( v23 )
              FxTagTracker::UpdateTagHistory(
                v23,
                &DeviceInit->Pdo.CompatibleIDs,
                185,
                "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
                TagAddRef,
                v19);
          }
          ++DeviceInit->Pdo.CompatibleIDs.m_Count;
          v15 = 0;
        }
        else
        {
          v15 = -1073741823;
        }
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*v13 + 16LL))(v13, 0LL, 0LL, 0LL);
      return (unsigned int)v15;
    }
    else
    {
LABEL_44:
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
