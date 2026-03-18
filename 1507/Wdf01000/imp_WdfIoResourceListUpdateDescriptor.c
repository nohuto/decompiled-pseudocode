/*
 * XREFs of imp_WdfIoResourceListUpdateDescriptor @ 0x1C002FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x1C000FCA8 (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfIoResourceListUpdateDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  WDFIORESLIST__ *_a1; // rbx
  FxIoResList *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxObject_vtbl *Item; // rdi
  unsigned __int8 v10; // r8
  __int64 v11; // r9
  FxVerifierLock *v12; // rcx
  FxIoResList *pList; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  int irql; // [rsp+88h] [rbp+38h] BYREF

  _a1 = (WDFIORESLIST__ *)ResourceList;
  if ( !ResourceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1035uLL);
  v7 = (FxIoResList *)(~ResourceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(ResourceList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    ResourceList = LOWORD(v7->__vftable);
    v7 = (FxIoResList *)((char *)v7 - ResourceList);
  }
  if ( v7->m_Type == 4149 )
  {
    pList = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pList, _a1, 0x1035u, ResourceList);
    v7 = pList;
  }
  m_Globals = v7->m_Globals;
  if ( !Descriptor )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  FxNonPagedObject::Lock(v7, (unsigned __int8 *)&irql, (unsigned __int8)Descriptor);
  Item = FxCollectionInternal::GetItem(&pList->FxCollectionInternal, Index);
  if ( *(char *)(v11 + 24) < 0 && (v12 = *(FxVerifierLock **)(v11 - 24)) != 0LL )
    FxVerifierLock::Unlock(v12, irql, v10);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 112), irql);
  if ( Item )
  {
    *(_OWORD *)&Item[1].QueryInterface = *(_OWORD *)&Descriptor->Option;
    *(_OWORD *)&Item[1].Dispose = *(_OWORD *)&Descriptor->u.BusNumber.MaxBusNumber;
    pList->m_Changed = 1;
    pList->m_OwningList->m_Changed = 1;
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0xDu, WPP_FxResourceAPI_cpp_Traceguids, _a1, Index, pList->m_Count);
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&irql,
      m_Globals->Public.DriverName,
      (const char *)&irql);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
