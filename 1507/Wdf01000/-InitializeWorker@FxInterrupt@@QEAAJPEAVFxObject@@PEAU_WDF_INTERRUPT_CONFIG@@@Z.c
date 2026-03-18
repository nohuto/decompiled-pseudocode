/*
 * XREFs of ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029B28
 * Callers:
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029C88 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00155C4 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001EFCC (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C001F958 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

__int64 __fastcall FxInterrupt::InitializeWorker(
        FxInterrupt *this,
        FxObject *Parent,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  unsigned __int16 m_Type; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _WDF_TRI_STATE ReportInactiveOnPowerDown; // ecx
  unsigned __int8 PassiveHandling; // al
  WDFSPINLOCK__ *SpinLock; // r8
  unsigned __int64 *p_m_Lock; // rax
  FxDeviceBase *v12; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int8 v14; // r9
  __int64 result; // rax
  WDFWAITLOCK__ *v16; // rcx
  __int64 v17; // rdx
  WDFWAITLOCK__ *v18; // r8
  FxWaitLock *v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // esi
  FxWaitLock *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // ebx
  const void *v27; // rdi
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-40h] BYREF
  WDFWAITLOCK__ *waitLock; // [rsp+C0h] [rbp+40h] BYREF
  IFxHasCallbacks *callbacks; // [rsp+C8h] [rbp+48h] BYREF
  FxObject *tmpObject; // [rsp+D0h] [rbp+50h] BYREF

  m_Type = Parent->m_Type;
  m_Globals = this->m_Globals;
  this->m_EvtInterruptIsr = Configuration->EvtInterruptIsr;
  this->m_EvtInterruptDpc = Configuration->EvtInterruptDpc;
  this->m_EvtInterruptWorkItem = Configuration->EvtInterruptWorkItem;
  ReportInactiveOnPowerDown = Configuration->ReportInactiveOnPowerDown;
  if ( ReportInactiveOnPowerDown )
  {
    if ( ReportInactiveOnPowerDown == WdfTrue )
      this->m_UseSoftDisconnect = 1;
  }
  else
  {
    this->m_UseSoftDisconnect = 0;
  }
  PassiveHandling = Configuration->PassiveHandling;
  this->m_PassiveHandling = PassiveHandling;
  SpinLock = Configuration->SpinLock;
  if ( SpinLock )
  {
    v16 = (WDFWAITLOCK__ *)(~(unsigned __int64)SpinLock & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v17) = 0;
    if ( ((unsigned __int8)SpinLock & 1) != 0 )
    {
      v17 = *(_WORD *)v16;
      v16 = (WDFWAITLOCK__ *)((char *)v16 - v17);
    }
    if ( *((_WORD *)v16 + 4) == 4132 )
    {
      waitLock = v16;
    }
    else
    {
      FxObjectHandleGetPtrQI((FxObject *)v16, (void **)&waitLock, SpinLock, 0x1024u, v17);
      v16 = waitLock;
    }
    *((_BYTE *)v16 + 121) = 1;
    p_m_Lock = (unsigned __int64 *)(waitLock + 28);
    goto LABEL_7;
  }
  if ( !PassiveHandling )
  {
    p_m_Lock = &this->m_BuiltInSpinLock.m_Lock;
LABEL_7:
    this->m_SpinLock = p_m_Lock;
  }
  v12 = FxDeviceBase::_SearchForDevice((unsigned __int64)Parent, &callbacks);
  m_DeviceBase = this->m_DeviceBase;
  if ( !m_DeviceBase || v12 != m_DeviceBase || (unsigned __int16)(m_Type - 4098) > 1u )
  {
    if ( Parent->m_ObjectSize )
      v27 = (const void *)((unsigned __int64)Parent ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v27 = 0LL;
    v26 = -1073741811;
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xCu,
      0x12u,
      WPP_InterruptObject_cpp_Traceguids,
      v27,
      (__int64)Configuration,
      -1073741811);
    return v26;
  }
  if ( Configuration->EvtInterruptWorkItem )
  {
    v14 = 1;
  }
  else if ( Configuration->EvtInterruptDpc )
  {
    v14 = 0;
  }
  else
  {
    v14 = this->m_PassiveHandling != 0;
  }
  result = FxObject::_GetEffectiveLock(
             Parent,
             callbacks,
             Configuration->AutomaticSerialization,
             v14,
             &this->m_CallbackLock,
             &tmpObject);
  if ( (int)result >= 0 )
  {
    if ( m_Type == 4099 )
      FxObject::MarkNoDeleteDDI(Parent, ObjectLock);
    if ( this->m_PassiveHandling )
    {
      v18 = Configuration->WaitLock;
      if ( v18 )
      {
        v19 = (FxWaitLock *)(~(unsigned __int64)v18 & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v20) = 0;
        if ( ((__int64)Configuration->WaitLock & 1) != 0 )
        {
          v20 = LOWORD(v19->__vftable);
          v19 = (FxWaitLock *)((char *)v19 - v20);
        }
        if ( v19->m_Type == 4131 )
          this->m_WaitLock = v19;
        else
          FxObjectHandleGetPtrQI(v19, (void **)&this->m_WaitLock, v18, 0x1023u, v20);
      }
      if ( !this->m_WaitLock )
      {
        waitLock = 0LL;
        memset(&attributes, 0, sizeof(attributes));
        attributes.Size = 56;
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        v21 = FxWaitLock::_Create(m_Globals, &attributes, 0LL, 0, &waitLock);
        v22 = v21;
        if ( v21 < 0 )
        {
          WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x13u, WPP_InterruptObject_cpp_Traceguids, v21);
          return v22;
        }
        if ( !waitLock )
          FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1023uLL);
        v23 = (FxWaitLock *)(~(unsigned __int64)waitLock & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v24) = 0;
        if ( ((unsigned __int8)waitLock & 1) != 0 )
        {
          v24 = LOWORD(v23->__vftable);
          v23 = (FxWaitLock *)((char *)v23 - v24);
        }
        if ( v23->m_Type == 4131 )
          this->m_WaitLock = v23;
        else
          FxObjectHandleGetPtrQI(v23, (void **)&this->m_WaitLock, waitLock, 0x1023u, v24);
        this->m_DisposeWaitLock = 1;
      }
    }
    if ( this->m_EvtInterruptWorkItem || FxLibraryGlobals.IsUserModeFramework && this->m_EvtInterruptDpc )
    {
      v25 = FxSystemWorkItem::_Create(
              m_Globals,
              this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
              &this->m_SystemWorkItem);
      v26 = v25;
      if ( v25 < 0 )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x14u, WPP_InterruptObject_cpp_Traceguids, v25);
        return v26;
      }
    }
    return 0LL;
  }
  return result;
}
