/*
 * XREFs of imp_WdfChildListEndIteration @ 0x1C002EFE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C001E0E8 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfChildListEndIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  WDFCHILDLIST__ *_a1; // rsi
  FxChildList *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int Flags; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v9; // [rsp+68h] [rbp+10h] BYREF
  FxChildList *pList; // [rsp+78h] [rbp+20h] BYREF

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
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x1Eu, WPP_FxChildListAPI_cpp_Traceguids, _a1);
    v5 = pList;
  }
  if ( !Iterator )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( Iterator->Size == 40 )
  {
    Flags = Iterator->Flags;
    if ( (Flags & 0xFFFFFFF8) == 0 )
    {
      FxChildList::EndIteration(v5, Iterator);
      return;
    }
    WPP_IFR_SF_DDd(m_Globals, DeviceList, 0xCu, 0x20u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7, -1073741811);
  }
  else
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      DeviceList,
      0xCu,
      0x1Fu,
      WPP_FxChildListAPI_cpp_Traceguids,
      Iterator->Size,
      40,
      -1073741820);
  }
  v9 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v9,
    m_Globals->Public.DriverName,
    (const char *)&v9);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
