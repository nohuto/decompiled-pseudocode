/*
 * XREFs of imp_WdfChildListUpdateChildDescriptionAsMissing @ 0x1C00664F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0067CC0 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListUpdateChildDescriptionAsMissing(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  WDFCHILDLIST__ *_a1; // rdi
  FxChildList *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int _a3; // edx
  int updated; // eax
  unsigned int v10; // esi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxChildList *pList; // [rsp+68h] [rbp+10h] BYREF

  _a1 = (WDFCHILDLIST__ *)DeviceList;
  if ( !DeviceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1029uLL);
  v5 = (FxChildList *)(~DeviceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DeviceList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DeviceList = LOWORD(v5->__vftable);
    v5 = (FxChildList *)((char *)v5 - DeviceList);
  }
  if ( v5->m_Type == 4137 )
  {
    pList = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pList, _a1, 0x1029u, DeviceList);
    v5 = pList;
  }
  m_Globals = v5->m_Globals;
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x27u, WPP_FxChildListAPI_cpp_Traceguids, _a1);
    v5 = pList;
  }
  _a3 = v5->m_IdentificationDescriptionSize;
  if ( _a3 == IdentificationDescription->IdentificationDescriptionSize )
  {
    updated = FxChildList::UpdateAsMissing(v5, IdentificationDescription);
    v10 = updated;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x29u, WPP_FxChildListAPI_cpp_Traceguids, _a1, updated);
    return v10;
  }
  else
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      _a3,
      0xCu,
      0x28u,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      _a3,
      -1073741808);
    return 3221225488LL;
  }
}
