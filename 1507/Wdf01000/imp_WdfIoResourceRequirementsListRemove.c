/*
 * XREFs of imp_WdfIoResourceRequirementsListRemove @ 0x1C007EC40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C001EA64 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 RequirementsList,
        unsigned int Index)
{
  WDFIORESREQLIST__ *_a1; // rbx
  FxIoResReqList *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoResReqList *pList; // [rsp+78h] [rbp+20h] BYREF

  _a1 = (WDFIORESREQLIST__ *)RequirementsList;
  if ( !RequirementsList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1037uLL);
  v5 = (FxIoResReqList *)(~RequirementsList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(RequirementsList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    RequirementsList = LOWORD(v5->__vftable);
    v5 = (FxIoResReqList *)((char *)v5 - RequirementsList);
  }
  if ( v5->m_Type == 4151 )
  {
    pList = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pList, _a1, 0x1037u, RequirementsList);
    v5 = pList;
  }
  m_Globals = v5->m_Globals;
  if ( !FxResourceCollection::RemoveAndDelete(v5, Index, Index) )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0xAu, WPP_FxResourceAPI_cpp_Traceguids, _a1, Index, pList->m_Count);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
