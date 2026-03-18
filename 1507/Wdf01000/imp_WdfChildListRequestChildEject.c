/*
 * XREFs of imp_WdfChildListRequestChildEject @ 0x1C0065E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C006712C (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     WPP_IFR_SF_DD @ 0x1C00704A4 (WPP_IFR_SF_DD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfChildListRequestChildEject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  FxChildList *v5; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 DeviceFromId; // rax
  unsigned __int64 v9; // rbx
  const void *v10; // rax
  _DEVICE_OBJECT *v11; // rcx
  const void *v13; // rbx
  _WDF_CHILD_RETRIEVE_INFO info; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxChildList *pList; // [rsp+98h] [rbp+10h] BYREF

  if ( !DeviceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1029uLL);
  v5 = (FxChildList *)(~DeviceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DeviceList & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxChildList *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4137 )
  {
    pList = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pList, (void *)DeviceList, 0x1029u, Offset);
    v5 = pList;
  }
  m_Globals = v5->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x33u, WPP_FxChildListAPI_cpp_Traceguids, (const void *)DeviceList);
    v5 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( v5->m_IdentificationDescriptionSize == IdentificationDescription->IdentificationDescriptionSize )
  {
    memset(&info, 0, sizeof(info));
    info.Size = 40;
    info.IdentificationDescription = IdentificationDescription;
    DeviceFromId = (unsigned __int64)FxChildList::GetDeviceFromId(v5, &info);
    v9 = DeviceFromId;
    if ( m_Globals->FxVerboseOn )
    {
      if ( DeviceFromId && *(_WORD *)(DeviceFromId + 10) )
        v10 = (const void *)(DeviceFromId ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v10 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x35u, WPP_FxChildListAPI_cpp_Traceguids, (const void *)DeviceList, v10);
    }
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 280) )
      {
        v11 = *(_DEVICE_OBJECT **)(v9 + 160);
        if ( v11 )
        {
          IoRequestDeviceEject(v11);
          return 1;
        }
      }
      if ( *(_WORD *)(v9 + 10) )
        v13 = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x36u, WPP_FxChildListAPI_cpp_Traceguids, v13);
    }
  }
  else
  {
    WPP_IFR_SF_DD(
      m_Globals,
      DeviceList,
      0xCu,
      0x34u,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      v5->m_IdentificationDescriptionSize);
  }
  return 0;
}
