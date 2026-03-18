/*
 * XREFs of ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180
 * Callers:
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00023A0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C0002810 (-Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?AddRef@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C0002870 (-AddRef@FxMemoryObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0005E40 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0006D50 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00083C0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C0008F80 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000AC10 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000B170 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B6C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000DAC0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0012D90 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0012FB0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0016240 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0018910 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00192DC (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0019370 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0019670 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ?AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z @ 0x1C001AE00 (-AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001AF10 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001C310 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C001DA90 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001DCA0 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001F830 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0022D9C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C00240C4 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x1C0024378 (-Enqueue@FxWorkItem@@QEAAXXZ.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0024438 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027DC0 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C002B4F0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfObjectReferenceActual @ 0x1C002C4A0 (imp_WdfObjectReferenceActual.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxTagTrackingBlock@@QEAA@PEAXJPEADE@Z @ 0x1C006E848 (--0FxTagTrackingBlock@@QEAA@PEAXJPEADE@Z.c)
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1C006FFC4 (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 *     ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C00700F8 (-CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z.c)
 *     WPP_IFR_SF_sqqq @ 0x1C0070550 (WPP_IFR_SF_sqqq.c)
 */

void __fastcall FxTagTracker::UpdateTagHistory(
        FxTagTracker *this,
        void *Tag,
        int Line,
        char *File,
        FxTagRefType RefType,
        unsigned int RefCount)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 v11; // bp
  __int64 v12; // rbx
  USHORT v13; // ax
  FxTagTrackingBlock *v14; // rax
  FxTagTrackingBlock *v15; // rax
  FxTagTrackingBlock *v16; // rsi
  KIRQL v17; // al
  KIRQL v18; // al
  FxTagTrackingBlock **p_m_Next; // rcx
  FxTagTrackingBlock *i; // rbx
  unsigned __int8 v21; // dl
  unsigned int v22; // r8d
  unsigned __int16 v23; // r9
  const char *v24; // rcx
  const _GUID *v25; // [rsp+20h] [rbp-108h]
  void *frames[16]; // [rsp+50h] [rbp-D8h] BYREF
  void *Caller; // [rsp+128h] [rbp+0h]

  m_Globals = this->m_Globals;
  v11 = 0;
  v12 = _InterlockedExchangeAdd(&this->m_CurRefHistory, 1u) % 25;
  this->m_TagHistory[v12].RefType = RefType;
  this->m_TagHistory[v12].RefCount = RefCount;
  this->m_TagHistory[v12].Line = Line;
  this->m_TagHistory[v12].Tag = Tag;
  this->m_TagHistory[v12].File = File;
  if ( this->m_CaptureStack )
  {
    v13 = RtlCaptureStackBackTrace(3u, 0x10u, frames, 0LL);
    v11 = v13;
    if ( v13 )
      FxTagTracker::CopyStackFrames(this, &this->m_TagHistory[v12].StackFrames, v13, frames);
  }
  this->m_TagHistory[v12].Time.QuadPart = MEMORY[0xFFFFF78000000320];
  if ( RefType )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    p_m_Next = &this->m_Next;
    for ( i = this->m_Next; i; i = i->Next )
    {
      if ( i->Tag == Tag )
      {
        *p_m_Next = i->Next;
        break;
      }
      p_m_Next = (FxTagTrackingBlock **)i;
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v18);
    if ( i )
    {
      FxTagTrackingBlock::`scalar deleting destructor'(i);
    }
    else if ( _InterlockedDecrement(&this->m_FailedCount) < 0 )
    {
      _InterlockedIncrement(&this->m_FailedCount);
      v24 = "power tag";
      if ( this->m_TrackerType != FxTagTrackerTypePower )
        v24 = "tag";
      WPP_IFR_SF_sqqq(m_Globals, v21, v22, v23, v25, v24, Tag, this->m_OwningObject, this);
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
  else
  {
    v14 = (FxTagTrackingBlock *)FxPoolAllocator(
                                  m_Globals,
                                  &m_Globals->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0x30uLL,
                                  m_Globals->Tag,
                                  Caller);
    if ( v14 )
    {
      FxTagTrackingBlock::FxTagTrackingBlock(v14, Tag, Line, File, 0);
      v16 = v15;
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v16->Next = this->m_Next;
      this->m_Next = v16;
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v17);
      if ( this->m_CaptureStack )
      {
        if ( v11 )
          FxTagTracker::CopyStackFrames(this, &v16->StackFrames, v11, frames);
      }
    }
    else
    {
      _InterlockedIncrement(&this->m_FailedCount);
    }
  }
}
