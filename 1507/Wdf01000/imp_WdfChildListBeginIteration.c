/*
 * XREFs of imp_WdfChildListBeginIteration @ 0x1C002EE70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C001E050 (-BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfChildListBeginIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  FxChildList *v5; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int Flags; // eax
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v10; // [rsp+78h] [rbp+10h] BYREF
  FxChildList *pList; // [rsp+88h] [rbp+20h] BYREF

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
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x15u, WPP_FxChildListAPI_cpp_Traceguids, (const void *)DeviceList);
    v5 = pList;
  }
  if ( !Iterator )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( Iterator->Size == 40 )
  {
    Flags = Iterator->Flags;
    if ( (Flags & 0xFFFFFFF8) == 0 )
    {
      memset(Iterator->Reserved, 0, sizeof(Iterator->Reserved));
      FxChildList::BeginIteration(v5, Iterator);
      return;
    }
    WPP_IFR_SF_DDd(m_Globals, DeviceList, 0xCu, 0x17u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7, -1073741811);
  }
  else
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      DeviceList,
      0xCu,
      0x16u,
      WPP_FxChildListAPI_cpp_Traceguids,
      Iterator->Size,
      40,
      -1073741820);
  }
  v10 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v10,
    m_Globals->Public.DriverName,
    (const char *)&v10);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
