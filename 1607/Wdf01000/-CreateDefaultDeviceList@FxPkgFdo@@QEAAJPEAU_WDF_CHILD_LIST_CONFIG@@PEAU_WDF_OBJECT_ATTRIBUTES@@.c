/*
 * XREFs of ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C002A4C4
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB28 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C002C790 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C002C8B4 (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

int __fastcall FxPkgFdo::CreateDefaultDeviceList(
        FxPkgFdo *this,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  FxObject **p_m_DefaultDeviceList; // rbx
  int v9; // edi
  FxObject *v10; // rdx
  unsigned int v11; // ecx
  FxTagTracker *Flink; // rax
  unsigned __int64 totalDescriptionSize; // [rsp+60h] [rbp+8h] BYREF
  WDFCHILDLIST__ *hList; // [rsp+78h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  totalDescriptionSize = 0LL;
  result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, ListConfig, &totalDescriptionSize);
  if ( result >= 0 )
  {
    p_m_DefaultDeviceList = &this->m_DefaultDeviceList;
    result = FxChildList::_CreateAndInit(
               &this->m_DefaultDeviceList,
               m_Globals,
               ListAttributes,
               totalDescriptionSize,
               this->m_Device,
               ListConfig,
               0);
    if ( result >= 0 )
    {
      v9 = FxObject::Commit(*p_m_DefaultDeviceList, ListAttributes, (void **)&hList, this->m_DeviceBase, 1u);
      if ( v9 < 0 )
      {
        WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0x16u, WPP_fxpkgfdo_cpp_Traceguids);
        FxObject::DeleteFromFailedCreate(*p_m_DefaultDeviceList);
        *p_m_DefaultDeviceList = 0LL;
      }
      else
      {
        v10 = *p_m_DefaultDeviceList;
        v11 = _InterlockedIncrement(&(*p_m_DefaultDeviceList)->m_Refcnt);
        if ( SLOBYTE(v10->m_ObjectFlags) < 0 )
          Flink = (FxTagTracker *)v10[-1].m_ChildEntry.Flink;
        else
          Flink = 0LL;
        if ( Flink )
          FxTagTracker::UpdateTagHistory(
            Flink,
            this,
            889,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp",
            TagAddRef,
            v11);
      }
      return v9;
    }
  }
  return result;
}
