/*
 * XREFs of imp_WdfIoResourceListRemove @ 0x1C0030260
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C001EA64 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 */

void __fastcall imp_WdfIoResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 ResourceList,
        unsigned int Index)
{
  WDFIORESLIST__ *_a1; // rbx
  FxIoResList *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v7; // [rsp+68h] [rbp+10h] BYREF
  FxIoResList *pList; // [rsp+78h] [rbp+20h] BYREF

  _a1 = (WDFIORESLIST__ *)ResourceList;
  if ( !ResourceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1035uLL);
  v5 = (FxIoResList *)(~ResourceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(ResourceList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    ResourceList = LOWORD(v5->__vftable);
    v5 = (FxIoResList *)((char *)v5 - ResourceList);
  }
  if ( v5->m_Type == 4149 )
  {
    pList = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pList, _a1, 0x1035u, ResourceList);
    v5 = pList;
  }
  m_Globals = v5->m_Globals;
  if ( FxResourceCollection::RemoveAndDelete(v5, Index, Index) )
  {
    pList->m_OwningList->m_Changed = 1;
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0xEu, WPP_FxResourceAPI_cpp_Traceguids, _a1, Index, pList->m_Count);
    v7 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v7,
      m_Globals->Public.DriverName,
      (const char *)&v7);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
