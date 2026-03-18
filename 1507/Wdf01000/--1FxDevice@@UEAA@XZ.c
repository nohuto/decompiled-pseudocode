/*
 * XREFs of ??1FxDevice@@UEAA@XZ @ 0x1C007630C
 * Callers:
 *     ??_GFxDevice@@UEAAPEAXI@Z @ 0x1C00765E0 (--_GFxDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C00157EC (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C0075BF4 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C00808E8 (--1FxTransactionedList@@QEAA@XZ.c)
 */

void __fastcall FxDevice::~FxDevice(FxDevice *this)
{
  ULONG_PTR v2; // rdi
  const void *_a2; // rax
  FxPkgIo *m_PkgIo; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgGeneral *m_PkgGeneral; // rcx
  FxWmiIrpHandler *m_PkgWmi; // rcx
  FxDefaultIrpHandler *m_PkgDefault; // rcx
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rsi
  FxIrpPreprocessInfo *Flink; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  unsigned __int16 *Buffer; // rcx
  unsigned __int16 *v16; // rcx
  FxDevice *m_ParentDevice; // rcx
  unsigned int v18; // edx
  unsigned int v19; // r8d

  this->FxDeviceBase::FxNonPagedObject::FxObject::__vftable = (FxDevice_vtbl *)&FxObject::`vftable'.BugCheckCallbackRecord.Checksum;
  this->FxDeviceBase::IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxDevice::`vftable'{for `IFxHasCallbacks'};
  v2 = 0LL;
  if ( !FxObject::IsDisposed(this) )
  {
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x12u, 0xAu, WPP_FxDevice_cpp_Traceguids, this, _a2);
    if ( this->m_ObjectSize )
      v2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v2, (ULONG_PTR)this);
  }
  m_PkgIo = this->m_PkgIo;
  if ( m_PkgIo )
  {
    m_PkgIo->Release(m_PkgIo, 0LL, 295, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgIo = 0LL;
  }
  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
  {
    m_PkgPnp->Release(m_PkgPnp, 0LL, 300, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgPnp = 0LL;
  }
  m_PkgGeneral = this->m_PkgGeneral;
  if ( m_PkgGeneral )
  {
    m_PkgGeneral->Release(m_PkgGeneral, 0LL, 305, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgGeneral = 0LL;
  }
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
  {
    m_PkgWmi->Release(m_PkgWmi, 0LL, 310, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgWmi = 0LL;
  }
  m_PkgDefault = this->m_PkgDefault;
  if ( m_PkgDefault )
  {
    m_PkgDefault->Release(m_PkgDefault, 0LL, 315, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgDefault = 0LL;
  }
  p_m_PreprocessInfoListHead = &this->m_PreprocessInfoListHead;
  while ( p_m_PreprocessInfoListHead->Flink != p_m_PreprocessInfoListHead )
  {
    Flink = (FxIrpPreprocessInfo *)p_m_PreprocessInfoListHead->Flink;
    v11 = p_m_PreprocessInfoListHead->Flink->Flink;
    if ( p_m_PreprocessInfoListHead->Flink->Blink != p_m_PreprocessInfoListHead
      || (FxIrpPreprocessInfo *)v11->Blink != Flink )
    {
      __fastfail(3u);
    }
    p_m_PreprocessInfoListHead->Flink = v11;
    v11->Blink = p_m_PreprocessInfoListHead;
    Flink->ListEntry.Blink = (_LIST_ENTRY *)Flink;
    Flink->ListEntry.Flink = (_LIST_ENTRY *)Flink;
    FxIrpPreprocessInfo::`scalar deleting destructor'(Flink);
  }
  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  while ( p_m_CxDeviceInfoListHead->Flink != p_m_CxDeviceInfoListHead )
  {
    v13 = p_m_CxDeviceInfoListHead->Flink;
    v14 = p_m_CxDeviceInfoListHead->Flink->Flink;
    if ( p_m_CxDeviceInfoListHead->Flink->Blink != p_m_CxDeviceInfoListHead || v14->Blink != v13 )
      __fastfail(3u);
    p_m_CxDeviceInfoListHead->Flink = v14;
    v14->Blink = p_m_CxDeviceInfoListHead;
    v13->Blink = v13;
    v13->Flink = v13;
    FxPoolFree(v13);
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    *(_QWORD *)&this->m_DeviceName.Length = 0LL;
    this->m_DeviceName.Buffer = 0LL;
  }
  if ( this->m_SymbolicLinkName.Buffer )
  {
    if ( this->m_SymbolicLinkName.Length )
      IoDeleteSymbolicLink(&this->m_SymbolicLinkName);
    FxPoolFree((_QWORD *)this->m_SymbolicLinkName.Buffer);
    *(_QWORD *)&this->m_SymbolicLinkName.Length = 0LL;
    this->m_SymbolicLinkName.Buffer = 0LL;
  }
  v16 = this->m_MofResourceName.Buffer;
  if ( v16 )
  {
    FxPoolFree(v16);
    *(_QWORD *)&this->m_MofResourceName.Length = 0LL;
    this->m_MofResourceName.Buffer = 0LL;
  }
  if ( this->m_RequestLookasideListElementSize )
  {
    ExDeleteNPagedLookasideList(&this->m_RequestLookasideList);
    this->m_RequestLookasideListElementSize = 0LL;
  }
  m_ParentDevice = this->m_ParentDevice;
  if ( m_ParentDevice )
    m_ParentDevice->Release(m_ParentDevice, this, 360, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
  this->m_IoTargetsList.m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(&this->m_IoTargetsList);
  FxDeviceBase::~FxDeviceBase(this, v18, v19);
}
