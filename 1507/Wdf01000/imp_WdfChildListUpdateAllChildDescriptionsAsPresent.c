/*
 * XREFs of imp_WdfChildListUpdateAllChildDescriptionsAsPresent @ 0x1C00663F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C0067C04 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 */

void __fastcall imp_WdfChildListUpdateAllChildDescriptionsAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList)
{
  FxChildList *v3; // rcx
  unsigned int *Offset; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxChildList *pList; // [rsp+48h] [rbp+10h] BYREF

  if ( !DeviceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1029uLL);
  v3 = (FxChildList *)(~DeviceList & 0xFFFFFFFFFFFFFFF8uLL);
  Offset = 0LL;
  if ( (DeviceList & 1) != 0 )
  {
    Offset = (unsigned int *)LOWORD(v3->__vftable);
    v3 = (FxChildList *)((char *)v3 - (__int64)Offset);
  }
  if ( v3->m_Type == 4137 )
  {
    pList = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pList, (void *)DeviceList, 0x1029u, (unsigned __int16)Offset);
    v3 = pList;
  }
  m_Globals = v3->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Au, WPP_FxChildListAPI_cpp_Traceguids, (const void *)DeviceList);
    v3 = pList;
  }
  FxChildList::UpdateAllAsPresent(v3, Offset);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Bu, WPP_FxChildListAPI_cpp_Traceguids, (const void *)DeviceList);
}
