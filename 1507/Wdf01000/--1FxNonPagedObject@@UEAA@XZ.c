/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00209D0
 * Callers:
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C0009070 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C0009840 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C000A278 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0010B40 (--_EFxDriver@@UEAAPEAXI@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C001EB84 (--1FxCollection@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C001F744 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0020800 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C005C624 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C0064BF0 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C0068160 (--1FxDpc@@UEAA@XZ.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C0068D10 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C0069120 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0069D10 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C0074CB0 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C0077700 (--1FxTimer@@UEAA@XZ.c)
 *     ??1FxIoTarget@@MEAA@XZ @ 0x1C00838CC (--1FxIoTarget@@MEAA@XZ.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C008F1FC (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0094728 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C00954BC (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009CA20 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C00A1A54 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C00A49B0 (--_EFxPkgGeneral@@UEAAPEAXI@Z.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C00A63D0 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0031C70 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C007A914 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C007AA74 (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this, unsigned int a2, unsigned int a3)
{
  const void *_a2; // rdi
  FxVerifierLock *m_DeviceBase; // rcx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_Type; // r9
  __int64 v9; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  const void *v12; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  _a2 = 0LL;
  this->__vftable = (FxNonPagedObject_vtbl *)&FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_DeviceBase = (FxVerifierLock *)this[-1].m_DeviceBase;
    if ( m_DeviceBase )
    {
      FxVerifierLock::`scalar deleting destructor'(m_DeviceBase, a2);
      this[-1].m_DeviceBase = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxNonPagedObject_vtbl *)&FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Next = this[-1].m_DisposeSingleEntry.Next;
    if ( Next )
      FxTagTracker::`scalar deleting destructor'((FxTagTracker *)Next, a2);
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    m_Type = this->m_Type;
    v9 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_25;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( 1 )
    {
      a3 = *p_ObjectType;
      if ( m_Type == (_WORD)a3 )
        break;
      if ( m_Type > (unsigned __int16)a3 )
      {
        v9 = (unsigned int)(v9 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v9 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_25;
    }
    HandleName = FxObjectsInfo[v9].HandleName;
    if ( !HandleName )
LABEL_25:
      HandleName = "WDFOBJECT";
    if ( this->m_ObjectSize )
      v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v12 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, (unsigned __int8)HandleName, a3, m_Type, traceGuid, HandleName, v12, this);
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, (unsigned __int64)_a2, (unsigned __int64)this);
  }
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_NPLock.m_Lock) - 16) = 12;
  }
  this->m_ObjectState = 12;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
