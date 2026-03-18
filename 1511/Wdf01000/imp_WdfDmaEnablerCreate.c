/*
 * XREFs of imp_WdfDmaEnablerCreate @ 0x1C002A650
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_qqqd @ 0x1C0010A2C (WPP_IFR_SF_qqqd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0024438 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0029D64 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0029EC4 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
  WDFDMAENABLER__ **v11; // r13
  void *ParentObject; // rdx
  bool IsVersionGreaterThanOrEqualTo; // al
  __int64 ExtraSize; // rdx
  size_t Size; // r14
  int v16; // ecx
  _WDF_DMA_PROFILE Profile; // ecx
  FxDmaEnabler *v18; // rax
  FxDmaEnabler *v19; // rax
  FxDmaEnabler *v20; // r14
  int v21; // ebx
  unsigned int v22; // edx
  FxDeviceBase *v23; // rax
  unsigned int v24; // r14d
  const void *v25; // rax
  unsigned __int16 v26; // r9
  FxObject *pParent; // [rsp+50h] [rbp-41h] BYREF
  WDFDMAENABLER__ *handle; // [rsp+58h] [rbp-39h] BYREF
  _WDF_DMA_ENABLER_CONFIG dmaConfig; // [rsp+60h] [rbp-31h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+57h]
  FxDeviceBase *pDevice; // [rsp+F0h] [rbp+5Fh] BYREF
  void *_a3; // [rsp+F8h] [rbp+67h]

  _a3 = Device;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
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
              if ( v23->m_ObjectSize )
                v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v25 = 0LL;
              v24 = -1071644151;
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
                  v21 = FxObject::Commit(v20, Attributes, (void **)&handle, pParent, 1u);
                  if ( v21 < 0 || (v21 = FxDmaEnabler::Initialize(v20, Config, pDevice), v21 < 0) )
                    FxObject::DeleteFromFailedCreate(v20);
                  else
                    *v11 = handle;
                  return (unsigned int)v21;
                }
                v26 = 16;
                v24 = -1073741670;
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
