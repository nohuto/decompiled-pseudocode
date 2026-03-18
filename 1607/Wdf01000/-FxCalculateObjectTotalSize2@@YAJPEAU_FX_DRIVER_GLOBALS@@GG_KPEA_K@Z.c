/*
 * XREFs of ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0002960
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C0002A20 (imp_WdfRequestCreate.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C0016774 (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0016D30 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDriverCreate @ 0x1C00173E0 (imp_WdfDriverCreate.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001A21C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001A7C0 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001BAE0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001CCA0 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020A80 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0022EA0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026B60 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C002C790 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C002F690 (imp_WdfCommonBufferCreateWithConfig.c)
 * Callees:
 *     WPP_IFR_SF_DDxd @ 0x1C007BC28 (WPP_IFR_SF_DDxd.c)
 */

__int64 __fastcall FxCalculateObjectTotalSize2(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 RawObjectSize,
        unsigned __int16 ExtraSize,
        unsigned __int64 ContextSize,
        unsigned __int64 *Total)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int id; // ebx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  const _GUID *v12; // [rsp+20h] [rbp-38h]

  *Total = 0LL;
  v6 = (((RawObjectSize + 15) & 0xFFF0) + ((ExtraSize + 15) & 0xFFF0) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = v6 + 48;
  if ( v6 + 48 < v6 )
  {
    *Total = -1LL;
    id = -1073741675;
LABEL_16:
    WPP_IFR_SF_DDxd(
      FxDriverGlobals,
      RawObjectSize,
      ExtraSize,
      ContextSize,
      v12,
      RawObjectSize,
      ExtraSize,
      ContextSize,
      id);
    return (unsigned int)id;
  }
  id = 0;
  *Total = v7;
  if ( !ContextSize )
  {
LABEL_3:
    if ( id >= 0 )
    {
      if ( FxDriverGlobals->FxVerifierHandle )
      {
        v11 = *Total + 32;
        if ( v11 < *Total )
        {
          *Total = -1LL;
          id = -1073741675;
        }
        else
        {
          *Total = v11;
          id = 0;
        }
      }
      if ( id >= 0 )
        return (unsigned int)id;
    }
    goto LABEL_16;
  }
  v10 = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v10 >= ContextSize )
  {
    if ( v7 + v10 < v7 )
    {
      *Total = -1LL;
      id = -1073741675;
    }
    else
    {
      *Total = v7 + v10;
    }
    goto LABEL_3;
  }
  return 3221225621LL;
}
