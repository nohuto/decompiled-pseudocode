/*
 * XREFs of imp_WdfDmaEnablerCreate @ 0x1C0008B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00094C4 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0009624 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDmaEnablerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DMA_ENABLER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMAENABLER__ **DmaEnablerHandle)
{
  FxDeviceBase *v8; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  unsigned int v12; // edx
  unsigned __int64 ParentObject; // r8
  unsigned __int8 IsVersionGreaterThanOrEqualTo; // al
  unsigned __int8 v15; // dl
  int v16; // r8d
  size_t Size; // rsi
  int v18; // ecx
  unsigned int v19; // r13d
  _WDF_DMA_PROFILE Profile; // ecx
  FxDmaEnabler *v21; // rax
  FxDmaEnabler *v22; // rax
  FxDmaEnabler *v23; // rsi
  int v24; // ebx
  unsigned __int8 CurrentIrql; // al
  FxObject *v26; // r10
  __int64 v27; // rcx
  FxDeviceBase *v28; // r10
  FxDeviceBase *v29; // rax
  int v30; // esi
  const void *v31; // rax
  unsigned __int16 v32; // r9
  FxDeviceBase *pDevice; // [rsp+50h] [rbp-31h] BYREF
  FxObject *pParent; // [rsp+58h] [rbp-29h] BYREF
  _WDF_DMA_ENABLER_CONFIG dmaConfig; // [rsp+60h] [rbp-21h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+57h]
  WDFDMAENABLER__ *handle; // [rsp+E8h] [rbp+67h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1030uLL);
  v8 = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v8->FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDeviceBase *)((char *)v8 - Offset);
  }
  if ( v8->m_Type == 4144 )
  {
    pDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, (void *)Device, 0x1030u, Offset);
    v8 = pDevice;
  }
  m_Globals = v8->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      LODWORD(handle) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&handle,
        m_Globals->Public.DriverName,
        (const char *)&handle);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741808;
    }
  }
  if ( !DmaEnablerHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DmaEnablerHandle = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( result >= 0 )
  {
    if ( Attributes )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        v26 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v27) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          v27 = LOWORD(v26->__vftable);
          v26 = (FxObject *)((char *)v26 - v27);
        }
        if ( v26->m_Type == 4096 )
          pParent = v26;
        else
          FxObjectHandleGetPtrQI(v26, (void **)&pParent, (void *)ParentObject, 0x1000u, v27);
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu) )
        {
          v29 = FxDeviceBase::_SearchForDevice(v28, 0LL);
          if ( !v29 )
          {
            v30 = -1071644151;
            WPP_IFR_SF_qd(
              m_Globals,
              2u,
              0xFu,
              0xAu,
              WPP_FxDmaEnablerAPI_cpp_Traceguids,
              Attributes->ParentObject,
              -1071644151);
            return v30;
          }
          if ( v29 != pDevice )
          {
            if ( v29->m_ObjectSize )
              v31 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v31 = 0LL;
            v30 = -1071644151;
            WPP_IFR_SF_qqqd(
              m_Globals,
              2u,
              0xFu,
              0xBu,
              WPP_FxDmaEnablerAPI_cpp_Traceguids,
              Attributes->ParentObject,
              v31,
              (const void *)Device,
              -1071644151);
            return v30;
          }
LABEL_13:
          IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu);
          Size = Config->Size;
          v18 = IsVersionGreaterThanOrEqualTo != 0 ? 80 : 64;
          if ( (_DWORD)Size != v18 )
          {
            WPP_IFR_SF_DDd(m_Globals, v15, 0xFu, 0xDu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Size, v18, -1073741820);
            return -1073741820;
          }
          v19 = v16 + 69;
          if ( (unsigned int)Size < v16 + 69 )
          {
            memset(&dmaConfig, 0, (unsigned int)(v16 + 69));
            dmaConfig.Profile = Config->Profile;
            dmaConfig.MaximumLength = Config->MaximumLength;
            memmove(&dmaConfig, Config, Size);
            dmaConfig.Size = v19;
            Config = &dmaConfig;
          }
          Profile = Config->Profile;
          if ( (unsigned int)(Profile - 1) > 7 )
          {
            v30 = -1073741811;
            WPP_IFR_SF_dd(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Profile, -1073741811);
          }
          else
          {
            if ( Config->MaximumLength )
            {
              v21 = (FxDmaEnabler *)FxObjectHandleAlloc(
                                      m_Globals,
                                      ExDefaultNonPagedPoolType,
                                      0x2C0uLL,
                                      0,
                                      Attributes,
                                      0,
                                      FxObjectTypeExternal);
              if ( v21 )
              {
                FxDmaEnabler::FxDmaEnabler(v21, m_Globals);
                v23 = v22;
              }
              else
              {
                v23 = 0LL;
              }
              if ( v23 )
              {
                v24 = FxObject::Commit(v23, Attributes, (void **)&handle, pParent, 1u);
                if ( v24 < 0 || (v24 = FxDmaEnabler::Initialize(v23, Config, pDevice), v24 < 0) )
                  FxObject::DeleteFromFailedCreate(v23);
                else
                  *DmaEnablerHandle = handle;
                return v24;
              }
              v32 = 16;
              v30 = -1073741670;
            }
            else
            {
              v32 = 15;
              v30 = -1073741811;
            }
            WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v32, WPP_FxDmaEnablerAPI_cpp_Traceguids, v30);
          }
          return v30;
        }
        if ( v28 != pDevice )
        {
          WPP_IFR_SF_qq(
            m_Globals,
            3u,
            0xFu,
            0xCu,
            WPP_FxDmaEnablerAPI_cpp_Traceguids,
            Attributes->ParentObject,
            (const void *)Device);
          if ( m_Globals->FxVerifyDownlevel )
          {
            LODWORD(handle) = 7567731;
            Mx::MxDbgPrint(
              "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
              m_Globals->Public.DriverName,
              (const char *)&handle,
              m_Globals->Public.DriverName,
              (const char *)&handle);
            if ( m_Globals->FxVerifierDbgBreakOnError )
              DbgBreakPoint();
          }
        }
      }
    }
    pParent = pDevice;
    goto LABEL_13;
  }
  return result;
}
