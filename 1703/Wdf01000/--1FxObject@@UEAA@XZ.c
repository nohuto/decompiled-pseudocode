/*
 * XREFs of ??1FxObject@@UEAA@XZ @ 0x1C000C140
 * Callers:
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00016B0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     imp_WdfRegistryClose @ 0x1C0001F60 (imp_WdfRegistryClose.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0002FF0 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C0005520 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0006000 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006A40 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007930 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C000ABA0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C000B050 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C000B120 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C000B260 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000B310 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000B600 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C000BF70 (-SelfDestruct@FxObject@@MEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000C660 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000E810 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     imp_WdfObjectDereferenceActual @ 0x1C0015F10 (imp_WdfObjectDereferenceActual.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C001B738 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C0030590 (--_GFxString@@UEAAPEAXI@Z.c)
 *     ??_EFxObject@@UEAAPEAXI@Z @ 0x1C0031200 (--_EFxObject@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C003D110 (--_EFxUsbUrb@@MEAAPEAXI@Z.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C0065434 (--1FxPagedObject@@UEAA@XZ.c)
 *     ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x1C007E860 (--_EFxNPagedLookasideList@@MEAAPEAXI@Z.c)
 *     ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C007E8E0 (--_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 *     ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C007EC00 (--_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z.c)
 *     ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C007EC60 (--_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C007F388 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1C007F7FC (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 *     ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x1C007FAB0 (--_GFxLookasideList@@MEAAPEAXI@Z.c)
 *     ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1C0085F40 (--_GFxSpinLock@@UEAAPEAXI@Z.c)
 *     ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1C00A3730 (--_EFxRelatedDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C00815F4 (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxObject::~FxObject(FxObject *this, unsigned int a2, unsigned int a3)
{
  FxTagTracker *m_Lock; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  unsigned __int16 m_Type; // r9
  __int64 v8; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  unsigned __int64 v11; // rdi
  const void *v12; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::`scalar deleting destructor'(m_Lock, a2);
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    m_Type = this->m_Type;
    v8 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_22;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( 1 )
    {
      a3 = *p_ObjectType;
      if ( m_Type == (_WORD)a3 )
        break;
      if ( m_Type > (unsigned __int16)a3 )
      {
        v8 = (unsigned int)(v8 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v8 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_22;
    }
    HandleName = FxObjectsInfo[v8].HandleName;
    if ( !HandleName )
LABEL_22:
      HandleName = "WDFOBJECT";
    v11 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, (unsigned __int8)HandleName, a3, m_Type, traceGuid, HandleName, v12, this);
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v11, (unsigned __int64)this);
  }
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 12;
  }
  this->m_ObjectState = 12;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
