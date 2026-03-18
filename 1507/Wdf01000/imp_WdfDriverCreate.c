/*
 * XREFs of imp_WdfDriverCreate @ 0x1C0021640
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     GetImageName @ 0x1C00059B4 (GetImageName.c)
 *     _TlgWrite @ 0x1C0006E7C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0006F1C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C0006FE4 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x1C00071F0 (_TlgCreateSz.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00106A0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001088C (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     FxInitialize @ 0x1C0021AE0 (FxInitialize.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0022E60 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x1C0022F18 (-_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z.c)
 *     FxDestroy @ 0x1C00257A8 (FxDestroy.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_dddd @ 0x1C00727A0 (WPP_IFR_SF_dddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes,
        _WDF_DRIVER_CONFIG *DriverConfig,
        WDFDRIVER__ **Driver)
{
  char *v6; // rbx
  unsigned int DriverInitFlags; // ecx
  unsigned __int16 Length; // cx
  int _a2; // eax
  _WDF_DRIVER_CONFIG *v13; // rdx
  unsigned __int16 v14; // r9
  unsigned int DriverPoolTag; // eax
  __int64 result; // rax
  _WDF_DRIVER_CONFIG *v17; // r9
  _POOL_TYPE v18; // esi
  unsigned __int64 ContextSizeOverride; // r9
  ULONG v20; // r12d
  _LIST_ENTRY *Caller; // rax
  FxDriver *v22; // rax
  FxDriver *v23; // rsi
  FxDriver *v24; // rax
  FxObject *v25; // r12
  int v26; // esi
  WDFDRIVER__ *v27; // rcx
  const _TlgProvider_t *v28; // rcx
  unsigned __int16 *Buffer; // rdi
  __int64 v30; // rcx
  int v31; // eax
  const _TlgProvider_t *v32; // rcx
  const _GUID *v33; // r8
  const _GUID *v34; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v36; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v39; // r9
  bool v40; // [rsp+50h] [rbp-B0h] BYREF
  char v41; // [rsp+51h] [rbp-AFh] BYREF
  _DRIVER_OBJECT *ArgDriverObject; // [rsp+58h] [rbp-A8h] BYREF
  FxAutoString imageName; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 Size[2]; // [rsp+70h] [rbp-90h] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[12]; // [rsp+80h] [rbp-80h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+198h] [rbp+98h]

  v6 = &DriverGlobals[-8].DriverName[16];
  ArgDriverObject = DriverObject;
  *(_QWORD *)&imageName.m_UnicodeString.Length = 0LL;
  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( !RegistryPath )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( !DriverConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( DriverConfig->Size != 32 )
  {
    WPP_IFR_SF_dddd(
      (_FX_DRIVER_GLOBALS *)v6,
      2u,
      0x11u,
      0xAu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverConfig->Size,
      32,
      32,
      -1073741820);
    return 3221225476LL;
  }
  DriverInitFlags = DriverConfig->DriverInitFlags;
  if ( (DriverInitFlags & 0xFFFFFFFC) != 0 )
  {
    WPP_IFR_SF_DDd(
      (_FX_DRIVER_GLOBALS *)v6,
      0,
      0x11u,
      0xBu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverInitFlags,
      3,
      -1073741811);
    return 3221225485LL;
  }
  if ( v6[316] )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd((_FX_DRIVER_GLOBALS *)v6, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      LODWORD(ArgDriverObject) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v6 + 432,
        (const char *)&ArgDriverObject,
        v6 + 432,
        (const char *)&ArgDriverObject);
      if ( v6[318] )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  Length = RegistryPath->Length;
  if ( (RegistryPath->Length & 1) != 0 )
  {
    _a2 = Length;
    v39 = 13;
LABEL_68:
    WPP_IFR_SF_qdd(
      (_FX_DRIVER_GLOBALS *)v6,
      2u,
      6u,
      v39,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      RegistryPath,
      _a2,
      -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = RegistryPath->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v39 = 14;
    goto LABEL_68;
  }
  if ( (_WORD)_a2 && !RegistryPath->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v39 = 15;
    goto LABEL_68;
  }
  if ( Length > (unsigned __int16)_a2 )
  {
    WPP_IFR_SF_qddd(
      (_FX_DRIVER_GLOBALS *)v6,
      0,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      RegistryPath,
      Length,
      (unsigned __int16)_a2,
      -1073741811);
    return 3221225485LL;
  }
  if ( *((_QWORD *)v6 + 9) || *((_QWORD *)v6 + 52) )
  {
    WPP_IFR_SF_qd((_FX_DRIVER_GLOBALS *)v6, 2u, 0x11u, 0xCu, WPP_FxDriverApi_cpp_Traceguids, DriverObject, -1073741437);
    return 3221225859LL;
  }
  if ( Driver )
    *Driver = 0LL;
  FxDriver::_InitializeDriverName((_FX_DRIVER_GLOBALS *)v6, RegistryPath);
  if ( DriverConfig->Size == 32 && (DriverPoolTag = DriverConfig->DriverPoolTag) != 0 && DriverPoolTag != 543908932 )
  {
    *((_DWORD *)v6 + 17) = DriverPoolTag;
    *((_DWORD *)v6 + 107) = DriverConfig->DriverPoolTag;
  }
  else
  {
    FxDriver::_InitializeTag((_FX_DRIVER_GLOBALS *)v6, v13);
  }
  if ( (DriverConfig->DriverInitFlags & 3) == 1 && DriverConfig->EvtDriverDeviceAdd )
  {
    WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)v6, 2u, 0x11u, 0xDu, WPP_FxDriverApi_cpp_Traceguids);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)v6, DriverAttributes, 7, v14);
  if ( (int)result >= 0 )
  {
    FxInitialize((_FX_DRIVER_GLOBALS *)v6, DriverObject, RegistryPath, v17);
    v18 = ExDefaultNonPagedPoolType;
    ContextSizeOverride = 0LL;
    v20 = *((_DWORD *)v6 + 17);
    if ( DriverAttributes )
    {
      ContextTypeInfo = DriverAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = DriverAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    if ( (int)FxCalculateObjectTotalSize2((_FX_DRIVER_GLOBALS *)v6, 0x168u, 0, ContextSizeOverride, Size) < 0 )
      goto LABEL_75;
    if ( v6[264] )
      Caller = retaddr;
    else
      Caller = 0LL;
    v22 = (FxDriver *)FxPoolAllocator((_FX_DRIVER_GLOBALS *)v6, (_LIST_ENTRY *)(v6 + 104), v18, Size[0], v20, Caller);
    v23 = v22;
    if ( v22 )
    {
      if ( v6[320] )
      {
        memset(v22, 0, 0x20uLL);
        *(_DWORD *)(&v23->m_ObjectState + 1) = 1146058822;
        v23 = (FxDriver *)((char *)v23 + 32);
      }
      memset(&v23[1].m_Type, 0, 0x30uLL);
      *(_QWORD *)&v23[1].m_Type = v23;
      if ( DriverAttributes )
      {
        v36 = DriverAttributes->ContextTypeInfo;
        if ( v36 )
        {
          ContextSize = DriverAttributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v36->ContextSize;
          memset(&v23[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v23[1].m_ChildListHead.Blink = (_LIST_ENTRY *)DriverAttributes->ContextTypeInfo;
      }
    }
    if ( v23
      && (FxDriver::FxDriver(v23, (_FX_DRIVER_GLOBALS *)ArgDriverObject, DriverConfig, (_FX_DRIVER_GLOBALS *)v6),
          (v25 = v24) != 0LL) )
    {
      v26 = FxDriver::Initialize(v24, RegistryPath, DriverConfig, DriverAttributes);
      if ( v26 >= 0 )
      {
        v26 = FxObject::Commit(v25, DriverAttributes, (void **)&imageName, 0LL, 1u);
        if ( v26 >= 0 )
        {
          v27 = *(WDFDRIVER__ **)&imageName.m_UnicodeString.Length;
          *((_QWORD *)v6 + 52) = *(_QWORD *)&imageName.m_UnicodeString.Length;
          *((_QWORD *)v6 + 9) = v25;
          *((_DWORD *)v6 + 106) |= DriverConfig->DriverInitFlags;
          v6[464] = (DriverConfig->DriverInitFlags & 3) == 0 || DriverConfig->EvtDriverUnload != 0LL;
          if ( Driver )
            *Driver = v27;
          if ( *((_QWORD *)v6 + 51) )
          {
            *(_QWORD *)&imageName.m_UnicodeString.Length = 0LL;
            imageName.m_UnicodeString.Buffer = 0LL;
            GetImageName((_FX_DRIVER_GLOBALS *)v6, &imageName.m_UnicodeString);
            Buffer = imageName.m_UnicodeString.Buffer;
            if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && TlgKeywordOn(v28, 0x200000000000uLL) )
            {
              _TlgData[2].Ptr = *((_QWORD *)v6 + 51);
              *(_QWORD *)&_TlgData[2].Size = 16LL;
              TlgCreateSz(&_TlgData[3], v6 + 432);
              TlgCreateWsz(&_TlgData[4], Buffer);
              TlgCreateWsz(&_TlgData[5], (wchar_t *)L"01.015.0");
              v30 = *((_QWORD *)v6 + 37);
              LODWORD(ArgDriverObject) = *(_DWORD *)(v30 + 16);
              _TlgData[6].Ptr = (unsigned __int64)&ArgDriverObject;
              *(_QWORD *)&_TlgData[6].Size = 4LL;
              v31 = *(_DWORD *)(v30 + 20);
              v32 = (const _TlgProvider_t *)*((unsigned int *)v6 + 106);
              LODWORD(Size[0]) = v31;
              _TlgData[7].Ptr = (unsigned __int64)Size;
              _TlgData[8].Ptr = (unsigned __int64)(v6 + 316);
              *(_QWORD *)&_TlgData[7].Size = 4LL;
              v41 = (unsigned __int8)v32 & 1;
              _TlgData[9].Ptr = (unsigned __int64)&v41;
              *(_QWORD *)&_TlgData[8].Size = 1LL;
              *(_QWORD *)&_TlgData[9].Size = 1LL;
              v40 = ((unsigned __int8)v32 & 2) != 0;
              *(_QWORD *)&_TlgData[10].Size = 1LL;
              _TlgData[10].Ptr = (unsigned __int64)&v40;
              *(_DWORD *)&imageName.m_UnicodeString.Length = *((_DWORD *)v6 + 98);
              _TlgData[11].Ptr = (unsigned __int64)&imageName;
              *(_QWORD *)&_TlgData[11].Size = 4LL;
              TlgWrite(v32, (char *)&TlgEvent_0._TlgChannel, v33, v34, 0xCu, _TlgData);
            }
            if ( Buffer )
              FxPoolFree(Buffer);
          }
          return (unsigned int)v26;
        }
      }
      FxObject::DeleteFromFailedCreate(v25);
    }
    else
    {
LABEL_75:
      v26 = -1073741670;
    }
    FxDestroy((_FX_DRIVER_GLOBALS *)v6);
    return (unsigned int)v26;
  }
  return result;
}
