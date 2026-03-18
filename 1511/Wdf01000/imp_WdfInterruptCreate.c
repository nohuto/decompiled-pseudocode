/*
 * XREFs of imp_WdfInterruptCreate @ 0x1C002E980
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001AD94 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C002EB90 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     WPP_IFR_SF_DD @ 0x1C006663C (WPP_IFR_SF_DD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0085FB4 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 */

int __fastcall imp_WdfInterruptCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_INTERRUPT_CONFIG *Configuration,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFINTERRUPT__ **Interrupt)
{
  unsigned int v8; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFINTERRUPT__ **v10; // r13
  __int64 v11; // rdx
  int v12; // r8d
  unsigned __int16 v13; // r9
  int v14; // ecx
  unsigned int Size; // ebx
  unsigned __int64 v16; // rax
  int result; // eax
  unsigned __int8 v18; // r8
  void *ParentObject; // rdx
  FxDevice *v20; // r14
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptRaw; // r10
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptTranslated; // r8
  unsigned __int8 CanWakeDevice; // r9
  unsigned __int64 v24; // rcx
  unsigned __int8 m_CallbackFlags; // bl
  unsigned __int8 v26; // r8
  int _a2; // ebx
  unsigned __int16 v28; // r9
  FxObject *pParent; // [rsp+40h] [rbp-61h] BYREF
  _WDF_INTERRUPT_CONFIG intConfig; // [rsp+50h] [rbp-51h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]
  FxInterrupt *pFxInterrupt; // [rsp+100h] [rbp+5Fh] BYREF
  FxDevice *pDevice; // [rsp+110h] [rbp+6Fh] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Configuration )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v10 = Interrupt;
  if ( !Interrupt )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 0xDu) )
    v14 = v12 + 91;
  else
    v14 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v11, 0xBu) ? 96 : 56;
  Size = Configuration->Size;
  v16 = Configuration->Size - 56;
  if ( (unsigned int)v16 > 0x30 || (v11 = 0x1010000000001LL, !_bittest64(&v11, v16)) )
  {
    WPP_IFR_SF_DD(m_Globals, v11, 0xCu, 0xAu, WPP_FxInterruptApi_cpp_Traceguids, Size, v14);
    return -1073741820;
  }
  if ( Size < 0x68 )
  {
    memset(&intConfig, 0, sizeof(intConfig));
    intConfig.EvtInterruptIsr = Configuration->EvtInterruptIsr;
    intConfig.EvtInterruptDpc = Configuration->EvtInterruptDpc;
    intConfig.ShareVector = WdfUseDefault;
    intConfig.ReportInactiveOnPowerDown = WdfUseDefault;
    memmove(&intConfig, Configuration, Size);
    intConfig.Size = 104;
    Configuration = &intConfig;
  }
  if ( !Configuration->EvtInterruptIsr )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxInterruptApi_cpp_Traceguids, Configuration);
    return -1073741811;
  }
  result = FxValidateObjectAttributes(m_Globals, Attributes, Configuration->AutomaticSerialization == 0, v13);
  if ( result < 0 )
    return result;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v20 = pDevice;
  }
  else
  {
    v20 = pDevice;
    pParent = pDevice;
  }
  if ( v20->m_CurrentPnpState == WdfDevStatePnpInit )
  {
    InterruptRaw = Configuration->InterruptRaw;
    if ( InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) != 0LL )
    {
      v28 = 13;
      goto LABEL_39;
    }
    if ( Configuration->CanWakeDevice )
    {
      v28 = 14;
      goto LABEL_39;
    }
  }
  else
  {
    FxNonPagedObject::Lock(v20, (unsigned __int8 *)&pFxInterrupt, v18);
    m_CallbackFlags = v20->m_CallbackFlags;
    FxNonPagedObject::Unlock(v20, (unsigned __int8)pFxInterrupt, v26);
    if ( (m_CallbackFlags & 1) == 0 )
    {
      _a2 = -1073741436;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xCu, WPP_FxInterruptApi_cpp_Traceguids, Device, -1073741436);
      return _a2;
    }
    InterruptRaw = Configuration->InterruptRaw;
    if ( !InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) == 0LL )
    {
      _a2 = -1073741436;
      v28 = 15;
      goto LABEL_40;
    }
    if ( Configuration->ShareVector != WdfUseDefault )
    {
      _a2 = -1073741436;
      v28 = 16;
      goto LABEL_40;
    }
    v20 = pDevice;
  }
  CanWakeDevice = Configuration->CanWakeDevice;
  if ( CanWakeDevice )
  {
    if ( (InterruptTranslated->Flags & 0x20) != 0 )
    {
      if ( v20->m_PkgPnp->m_PowerPolicyMachine.m_Owner )
      {
        if ( !FxDevice::IsPdo(v20) )
          goto LABEL_19;
        v28 = 19;
      }
      else
      {
        v28 = 18;
      }
    }
    else
    {
      v28 = 17;
    }
LABEL_39:
    _a2 = -1073741811;
LABEL_40:
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v28, WPP_FxInterruptApi_cpp_Traceguids, Configuration, _a2);
    return _a2;
  }
LABEL_19:
  if ( Configuration->EvtInterruptDpc && Configuration->EvtInterruptWorkItem )
  {
    v28 = 20;
    goto LABEL_39;
  }
  if ( Configuration->PassiveHandling )
  {
    if ( !FxLibraryGlobals.PassiveLevelInterruptSupport )
    {
      _a2 = -1073741637;
      v28 = 23;
      goto LABEL_40;
    }
    if ( Configuration->SpinLock )
    {
      v28 = 24;
    }
    else
    {
      if ( !InterruptTranslated || (InterruptTranslated->Flags & 2) == 0 )
        goto LABEL_24;
      v28 = 25;
    }
    goto LABEL_39;
  }
  if ( Configuration->WaitLock )
  {
    v28 = 21;
    goto LABEL_39;
  }
  if ( CanWakeDevice )
  {
    v28 = 22;
    goto LABEL_39;
  }
LABEL_24:
  if ( m_Globals->FxVerifierOn && InterruptRaw )
  {
    result = FxPkgPnp::ValidateInterruptResourceCm(v20->m_PkgPnp, InterruptRaw, InterruptTranslated, Configuration);
    if ( result < 0 )
      return result;
    v20 = pDevice;
  }
  result = FxInterrupt::_CreateAndInit(m_Globals, v20, pParent, Attributes, Configuration, &pFxInterrupt);
  if ( result >= 0 )
  {
    if ( pFxInterrupt->m_ObjectSize )
      v24 = (unsigned __int64)pFxInterrupt ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v24 = 0LL;
    *v10 = (WDFINTERRUPT__ *)v24;
  }
  return result;
}
