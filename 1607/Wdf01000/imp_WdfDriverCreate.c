/*
 * XREFs of imp_WdfDriverCreate @ 0x1C00173E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0002388 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0002960 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     GetImageName @ 0x1C0017740 (GetImageName.c)
 *     FxInitialize @ 0x1C0017CE8 (FxInitialize.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00190C8 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x1C0019180 (-_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00210C0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00212D0 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxDestroy @ 0x1C0037890 (FxDestroy.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     _TlgWrite @ 0x1C0071990 (_TlgWrite.c)
 *     WPP_IFR_SF_dddd @ 0x1C0076550 (WPP_IFR_SF_dddd.c)
 *     _TlgCreateSz @ 0x1C00766B8 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1C00766E4 (_TlgCreateWsz.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
  __int64 result; // rax
  _WDF_DRIVER_CONFIG *v12; // rdx
  unsigned __int16 v13; // r9
  unsigned int DriverPoolTag; // eax
  _WDF_DRIVER_CONFIG *v15; // r9
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v17; // esi
  void *Caller; // rax
  FxDriver *v19; // rax
  FxDriver *v20; // rsi
  FxDriver *v21; // rax
  FxObject *v22; // r15
  int v23; // esi
  WDFDRIVER__ *v24; // rcx
  wchar_t *Buffer; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v27; // rax
  unsigned __int64 ContextSize; // r8
  __int64 v29; // rcx
  int v30; // eax
  const _TlgProvider_t *v31; // rcx
  const _GUID *v32; // r8
  const _GUID *v33; // r9
  char v34; // [rsp+50h] [rbp-B0h] BYREF
  char v35; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int Tag; // [rsp+54h] [rbp-ACh] BYREF
  WDFDRIVER__ *hDriver; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 Size; // [rsp+60h] [rbp-A0h] BYREF
  FxAutoString imageName; // [rsp+68h] [rbp-98h] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[12]; // [rsp+80h] [rbp-80h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v6 = &DriverGlobals[-8].DriverName[16];
  hDriver = 0LL;
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
      (unsigned __int8)DriverObject,
      0x11u,
      0xBu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverInitFlags,
      3,
      -1073741811);
    return 3221225485LL;
  }
  result = FxVerifierCheckIrqlLevel((_FX_DRIVER_GLOBALS *)v6, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString((_FX_DRIVER_GLOBALS *)v6, RegistryPath);
    if ( (int)result >= 0 )
    {
      if ( *((_QWORD *)v6 + 9) || *((_QWORD *)v6 + 52) )
      {
        WPP_IFR_SF_qd(
          (_FX_DRIVER_GLOBALS *)v6,
          2u,
          0x11u,
          0xCu,
          WPP_FxDriverApi_cpp_Traceguids,
          DriverObject,
          -1073741437);
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
        FxDriver::_InitializeTag((_FX_DRIVER_GLOBALS *)v6, v12);
      }
      if ( (DriverConfig->DriverInitFlags & 3) == 1 && DriverConfig->EvtDriverDeviceAdd )
      {
        WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)v6, 2u, 0x11u, 0xDu, WPP_FxDriverApi_cpp_Traceguids);
        return 3221225485LL;
      }
      result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)v6, DriverAttributes, 7, v13);
      if ( (int)result >= 0 )
      {
        FxInitialize((_FX_DRIVER_GLOBALS *)v6, DriverObject, RegistryPath, v15);
        ContextSizeOverride = 0LL;
        v17 = ExDefaultNonPagedPoolType;
        Tag = *((_DWORD *)v6 + 17);
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
        if ( (int)FxCalculateObjectTotalSize2((_FX_DRIVER_GLOBALS *)v6, 0x168u, 0, ContextSizeOverride, &Size) < 0 )
          goto LABEL_63;
        if ( v6[264] )
          Caller = retaddr;
        else
          Caller = 0LL;
        v19 = (FxDriver *)FxPoolAllocator((_FX_DRIVER_GLOBALS *)v6, (FX_POOL *)(v6 + 104), v17, Size, Tag, Caller);
        v20 = v19;
        if ( v19 )
        {
          if ( v6[320] )
          {
            memset(v19, 0, 0x20uLL);
            *(_DWORD *)(&v20->m_ObjectState + 1) = 1146058822;
            v20 = (FxDriver *)((char *)v20 + 32);
          }
          memset(&v20[1].m_Type, 0, 0x30uLL);
          *(_QWORD *)&v20[1].m_Type = v20;
          if ( DriverAttributes )
          {
            v27 = DriverAttributes->ContextTypeInfo;
            if ( v27 )
            {
              ContextSize = DriverAttributes->ContextSizeOverride;
              if ( !ContextSize )
                ContextSize = v27->ContextSize;
              memset(&v20[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            }
            v20[1].m_ChildListHead.Blink = (_LIST_ENTRY *)DriverAttributes->ContextTypeInfo;
          }
        }
        if ( v20 && (FxDriver::FxDriver(v20, DriverObject, DriverConfig, (_FX_DRIVER_GLOBALS *)v6), (v22 = v21) != 0LL) )
        {
          v23 = FxDriver::Initialize(v21, RegistryPath, DriverConfig, DriverAttributes);
          if ( v23 >= 0 )
          {
            v23 = FxObject::Commit(v22, DriverAttributes, (void **)&hDriver, 0LL, 1u);
            if ( v23 >= 0 )
            {
              v24 = hDriver;
              *((_QWORD *)v6 + 52) = hDriver;
              *((_QWORD *)v6 + 9) = v22;
              *((_DWORD *)v6 + 106) |= DriverConfig->DriverInitFlags;
              v6[464] = (DriverConfig->DriverInitFlags & 3) == 0 || DriverConfig->EvtDriverUnload;
              if ( Driver )
                *Driver = v24;
              if ( *((_QWORD *)v6 + 51) )
              {
                *(_QWORD *)&imageName.m_UnicodeString.Length = 0LL;
                imageName.m_UnicodeString.Buffer = 0LL;
                GetImageName((_FX_DRIVER_GLOBALS *)v6, &imageName.m_UnicodeString);
                Buffer = imageName.m_UnicodeString.Buffer;
                if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5
                  && (Tlgg_TelemetryProviderProv.KeywordAny & 0x200000000000LL) != 0
                  && (Tlgg_TelemetryProviderProv.KeywordAll & 0x200000000000LL) == Tlgg_TelemetryProviderProv.KeywordAll )
                {
                  _TlgData[2].Ptr = *((_QWORD *)v6 + 51);
                  *(_QWORD *)&_TlgData[2].Size = 16LL;
                  TlgCreateSz(&_TlgData[3], v6 + 432);
                  TlgCreateWsz(&_TlgData[4], Buffer);
                  TlgCreateWsz(&_TlgData[5], L"01.019.0");
                  v29 = *((_QWORD *)v6 + 37);
                  Tag = *(_DWORD *)(v29 + 16);
                  _TlgData[6].Ptr = (unsigned __int64)&Tag;
                  *(_QWORD *)&_TlgData[6].Size = 4LL;
                  v30 = *(_DWORD *)(v29 + 20);
                  v31 = (const _TlgProvider_t *)*((unsigned int *)v6 + 106);
                  LODWORD(Size) = v30;
                  _TlgData[7].Ptr = (unsigned __int64)&Size;
                  _TlgData[8].Ptr = (unsigned __int64)(v6 + 316);
                  v34 = (unsigned __int8)v31 & 1;
                  LOBYTE(v31) = ((unsigned __int8)v31 & 2) != 0;
                  *(_QWORD *)&_TlgData[7].Size = 4LL;
                  _TlgData[9].Ptr = (unsigned __int64)&v34;
                  _TlgData[10].Ptr = (unsigned __int64)&v35;
                  LODWORD(hDriver) = *((_DWORD *)v6 + 99);
                  _TlgData[11].Ptr = (unsigned __int64)&hDriver;
                  *(_QWORD *)&_TlgData[8].Size = 1LL;
                  *(_QWORD *)&_TlgData[9].Size = 1LL;
                  v35 = (char)v31;
                  *(_QWORD *)&_TlgData[10].Size = 1LL;
                  *(_QWORD *)&_TlgData[11].Size = 4LL;
                  TlgWrite(v31, &TlgEvent_0._TlgChannel, v32, v33, 0xCu, _TlgData);
                }
                if ( Buffer )
                  FxPoolFree(Buffer);
              }
              return (unsigned int)v23;
            }
          }
          FxObject::DeleteFromFailedCreate(v22);
        }
        else
        {
LABEL_63:
          v23 = -1073741670;
        }
        FxDestroy((_FX_DRIVER_GLOBALS *)v6);
        return (unsigned int)v23;
      }
    }
  }
  return result;
}
