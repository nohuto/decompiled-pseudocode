/*
 * XREFs of imp_WdfChildListBeginIteration @ 0x1C0028D70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C002724C (-BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfChildListBeginIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  unsigned __int8 v5; // dl
  FxChildList *v6; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int Flags; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxChildList *pList; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList);
  v6 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x15u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v6 = pList;
  }
  if ( !Iterator )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( Iterator->Size == 40 )
  {
    Flags = Iterator->Flags;
    if ( (Flags & 0xFFFFFFF8) == 0 )
    {
      memset(Iterator->Reserved, 0, sizeof(Iterator->Reserved));
      FxChildList::BeginIteration(v6, Iterator);
      return;
    }
    WPP_IFR_SF_DDd(m_Globals, v5, 0xCu, 0x17u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7, -1073741811);
  }
  else
  {
    WPP_IFR_SF_DDd(m_Globals, v5, 0xCu, 0x16u, WPP_FxChildListAPI_cpp_Traceguids, Iterator->Size, 40, -1073741820);
  }
  FxVerifierDbgBreakPoint(m_Globals);
}
