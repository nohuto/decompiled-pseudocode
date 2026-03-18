/*
 * XREFs of imp_WdfDmaEnablerCreate @ 0x1C0035700
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00135B4 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001C424 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00360D0 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0036234 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0067B74 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDmaEnablerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DMA_ENABLER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMAENABLER__ **DmaEnablerHandle)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int16 v10; // r9
  WDFDMAENABLER__ **v11; // r12
  void *ParentObject; // rdx
  bool IsVersionGreaterThanOrEqualTo; // al
  __int64 ExtraSize; // rdx
  size_t Size; // rsi
  int v16; // ecx
  _WDF_DMA_PROFILE Profile; // ecx
  FxDmaEnabler *v18; // rax
  FxDmaEnabler *v19; // rax
  FxDmaEnabler *v20; // rsi
  int v21; // ebx
  unsigned int v22; // edx
  FxDeviceBase *v23; // rax
  unsigned int v24; // esi
  const void *v25; // rcx
  unsigned __int16 v26; // r9
  FxObject *pParent; // [rsp+50h] [rbp-41h] BYREF
  WDFDMAENABLER__ *handle; // [rsp+58h] [rbp-39h] BYREF
  _WDF_DMA_ENABLER_CONFIG dmaConfig; // [rsp+60h] [rbp-31h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+57h]
  FxDeviceBase *pDevice; // [rsp+F0h] [rbp+5Fh] BYREF
  void *_a3; // [rsp+F8h] [rbp+67h]

  _a3 = Device;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v11 = DmaEnablerHandle;
    if ( !DmaEnablerHandle )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    if ( !Config )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    *DmaEnablerHandle = 0LL;
    result = FxValidateObjectAttributes(m_Globals, Attributes, 0, v10);
    if ( (int)result >= 0 )
    {
      if ( Attributes )
      {
        ParentObject = Attributes->ParentObject;
        if ( ParentObject )
        {
          FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v22, 0xBu) )
          {
            v23 = FxDeviceBase::_SearchForDevice((unsigned __int64)pParent, 0LL);
            if ( !v23 )
            {
              v24 = -1071644151;
              WPP_IFR_SF_qd(
                m_Globals,
                2u,
                0xFu,
                0xAu,
                WPP_FxDmaEnablerAPI_cpp_Traceguids,
                Attributes->ParentObject,
                -1071644151);
              return v24;
            }
            if ( v23 != pDevice )
            {
              v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
              v24 = -1071644151;
              if ( !v23->m_ObjectSize )
                v25 = 0LL;
              WPP_IFR_SF_qqqd(
                m_Globals,
                2u,
                0xFu,
                0xBu,
                WPP_FxDmaEnablerAPI_cpp_Traceguids,
                Attributes->ParentObject,
                v25,
                _a3,
                -1071644151);
              return v24;
            }
LABEL_8:
            IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, 0, 0xBu);
            Size = Config->Size;
            v16 = IsVersionGreaterThanOrEqualTo ? 80 : 64;
            if ( (_DWORD)Size != v16 )
            {
              WPP_IFR_SF_DDd(
                m_Globals,
                ExtraSize,
                0xFu,
                0xDu,
                WPP_FxDmaEnablerAPI_cpp_Traceguids,
                Size,
                v16,
                -1073741820);
              return 3221225476LL;
            }
            if ( (unsigned int)Size < 0x50 )
            {
              memset(&dmaConfig, 0, sizeof(dmaConfig));
              dmaConfig.Profile = Config->Profile;
              dmaConfig.MaximumLength = Config->MaximumLength;
              memmove(&dmaConfig, Config, Size);
              ExtraSize = 0LL;
              dmaConfig.Size = 80;
              Config = &dmaConfig;
            }
            Profile = Config->Profile;
            if ( (unsigned int)(Profile - 1) > 7 )
            {
              v24 = -1073741811;
              WPP_IFR_SF_dd(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Profile, -1073741811);
            }
            else
            {
              if ( Config->MaximumLength == ExtraSize )
              {
                v26 = 15;
                v24 = -1073741811;
              }
              else
              {
                v18 = (FxDmaEnabler *)FxObjectHandleAlloc(
                                        m_Globals,
                                        ExDefaultNonPagedPoolType,
                                        0x2C0uLL,
                                        0,
                                        Attributes,
                                        ExtraSize,
                                        FxObjectTypeExternal);
                if ( v18 )
                {
                  FxDmaEnabler::FxDmaEnabler(v18, m_Globals);
                  v20 = v19;
                }
                else
                {
                  v20 = 0LL;
                }
                if ( v20 )
                {
                  v21 = FxObject::Commit(v20, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&handle, pParent, 1u);
                  if ( v21 < 0 || (v21 = FxDmaEnabler::Initialize(v20, Config, pDevice), v21 < 0) )
                    FxObject::DeleteFromFailedCreate(v20);
                  else
                    *v11 = handle;
                  return (unsigned int)v21;
                }
                v24 = -1073741670;
                v26 = 16;
              }
              WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v26, WPP_FxDmaEnablerAPI_cpp_Traceguids, v24);
            }
            return v24;
          }
          if ( pParent != pDevice )
          {
            WPP_IFR_SF_qq(
              m_Globals,
              3u,
              0xFu,
              0xCu,
              WPP_FxDmaEnablerAPI_cpp_Traceguids,
              Attributes->ParentObject,
              Device);
            if ( m_Globals->FxVerifyDownlevel )
              FxVerifierDbgBreakPoint(m_Globals);
          }
        }
      }
      pParent = pDevice;
      goto LABEL_8;
    }
  }
  return result;
}
