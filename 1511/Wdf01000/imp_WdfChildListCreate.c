/*
 * XREFs of imp_WdfChildListCreate @ 0x1C005E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025F90 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C002F7E8 (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DeviceListAttributes,
        WDFCHILDLIST__ **DeviceList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v9; // rdi
  __int64 result; // rax
  int v11; // esi
  unsigned __int16 v12; // r9
  int v13; // eax
  unsigned int v14; // edi
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF
  FxChildList *pList; // [rsp+80h] [rbp+18h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxChildListAPI_cpp_Traceguids, Device);
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v9 = (void **)DeviceList;
  if ( !DeviceList )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DeviceList = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v11 = FxChildList::_ValidateConfig(m_Globals, Config, (unsigned __int64 *)&pList);
    if ( v11 >= 0 )
    {
      result = FxValidateObjectAttributes(m_Globals, DeviceListAttributes, 1, v12);
      if ( (int)result >= 0 )
      {
        result = ((__int64 (__fastcall *)(FxDevice *))pDevice->AllocateEnumInfo)(pDevice);
        if ( (int)result >= 0 )
        {
          result = FxChildList::_CreateAndInit(
                     &pList,
                     m_Globals,
                     DeviceListAttributes,
                     (unsigned __int64)pList,
                     pDevice,
                     Config,
                     0);
          if ( (int)result >= 0 )
          {
            v13 = FxObject::Commit(pList, DeviceListAttributes, v9, pDevice, 1u);
            v14 = v13;
            if ( v13 >= 0 )
            {
              pDevice->SetDeviceTelemetryInfoFlags(pDevice, DeviceInfoHasDynamicChildren);
            }
            else
            {
              WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xCu, WPP_FxChildListAPI_cpp_Traceguids, v13);
              FxObject::DeleteFromFailedCreate(pList);
            }
            return v14;
          }
        }
      }
    }
    else
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxChildListAPI_cpp_Traceguids, Device);
      return (unsigned int)v11;
    }
  }
  return result;
}
