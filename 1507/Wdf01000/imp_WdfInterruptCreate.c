/*
 * XREFs of imp_WdfInterruptCreate @ 0x1C0029630
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0029810 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_DD @ 0x1C00704A4 (WPP_IFR_SF_DD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C009B1F8 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall imp_WdfInterruptCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_INTERRUPT_CONFIG *Configuration,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFINTERRUPT__ **Interrupt)
{
  FxObject *v8; // rsi
  __int64 v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFINTERRUPT__ **v11; // r12
  __int64 v12; // rdx
  int v13; // r8d
  unsigned __int16 v14; // r9
  int v15; // ecx
  size_t Size; // rbx
  unsigned __int64 v17; // rax
  int result; // eax
  unsigned __int64 ParentObject; // r8
  FxObject *v20; // rbx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptRaw; // rdx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptTranslated; // r8
  unsigned __int8 CanWakeDevice; // cl
  unsigned __int64 v24; // rcx
  FxObject *v25; // rcx
  __int64 v26; // rdx
  unsigned __int8 v27; // r8
  char m_Type; // r15
  FxVerifierLock *Blink; // rcx
  int _a2; // ebx
  unsigned __int16 v31; // r9
  __int64 v32; // rax
  FxObject *pParent; // [rsp+48h] [rbp-51h] BYREF
  _BYTE intConfig[112]; // [rsp+50h] [rbp-49h] OVERLAPPED BYREF
  void *retaddr; // [rsp+F0h] [rbp+57h]
  FxInterrupt *pFxInterrupt; // [rsp+100h] [rbp+67h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v8 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v9) = 0;
  if ( (Device & 1) != 0 )
  {
    v9 = LOWORD(v8->__vftable);
    v8 = (FxObject *)((char *)v8 - v9);
  }
  if ( v8->m_Type == 4098 )
  {
    pParent = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pParent, (void *)Device, 0x1002u, v9);
    v8 = pParent;
  }
  m_Globals = v8->m_Globals;
  if ( !Configuration )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = Interrupt;
  if ( !Interrupt )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, Device, 0xDu) )
    v15 = v13 + 91;
  else
    v15 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu) ? 96 : 56;
  Size = Configuration->Size;
  v17 = (unsigned int)(Size - 56);
  if ( (unsigned int)v17 > 0x30 || (v12 = 0x1010000000001LL, !_bittest64(&v12, v17)) )
  {
    WPP_IFR_SF_DD(m_Globals, v12, 0xCu, 0xAu, WPP_FxInterruptApi_cpp_Traceguids, Size, v15);
    return -1073741820;
  }
  if ( (unsigned int)Size < 0x68 )
  {
    memset(&intConfig[8], 0, 0x68uLL);
    *(_QWORD *)&intConfig[32] = Configuration->EvtInterruptIsr;
    *(_QWORD *)&intConfig[40] = Configuration->EvtInterruptDpc;
    *(_DWORD *)&intConfig[24] = 2;
    *(_DWORD *)&intConfig[100] = 2;
    memmove(&intConfig[8], Configuration, Size);
    *(_DWORD *)&intConfig[8] = 104;
    Configuration = (_WDF_INTERRUPT_CONFIG *)&intConfig[8];
  }
  if ( !Configuration->EvtInterruptIsr )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxInterruptApi_cpp_Traceguids, Configuration);
    return -1073741811;
  }
  result = FxValidateObjectAttributes(m_Globals, Attributes, Configuration->AutomaticSerialization == 0, v14);
  if ( result < 0 )
    return result;
  if ( Attributes && (ParentObject = (unsigned __int64)Attributes->ParentObject) != 0 )
  {
    v25 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v26) = 0;
    if ( (ParentObject & 1) != 0 )
    {
      v26 = LOWORD(v25->__vftable);
      v25 = (FxObject *)((char *)v25 - v26);
    }
    if ( v25->m_Type == 4096 )
      *(_QWORD *)intConfig = v25;
    else
      FxObjectHandleGetPtrQI(v25, (void **)intConfig, (void *)ParentObject, 0x1000u, v26);
    v20 = pParent;
  }
  else
  {
    v20 = pParent;
    *(_QWORD *)intConfig = pParent;
  }
  if ( LODWORD(v20[1].m_DeviceBase) == 261 )
  {
    InterruptRaw = Configuration->InterruptRaw;
    if ( InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) != 0LL )
    {
      v31 = 13;
    }
    else
    {
      if ( !Configuration->CanWakeDevice )
        goto LABEL_23;
      v31 = 14;
    }
LABEL_55:
    _a2 = -1073741811;
LABEL_56:
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v31, WPP_FxInterruptApi_cpp_Traceguids, Configuration, _a2);
    return _a2;
  }
  FxNonPagedObject::Lock((FxNonPagedObject *)v20, (unsigned __int8 *)&pFxInterrupt, ParentObject);
  m_Type = v20[2].m_Type;
  if ( SLOBYTE(v20->m_ObjectFlags) < 0 && (Blink = (FxVerifierLock *)v20[-1].m_ChildEntry.Blink) != 0LL )
    FxVerifierLock::Unlock(Blink, (unsigned __int8)pFxInterrupt, v27);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)&v20[1].m_Type, (KIRQL)pFxInterrupt);
  if ( (m_Type & 1) == 0 )
  {
    _a2 = -1073741436;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xCu, WPP_FxInterruptApi_cpp_Traceguids, (const void *)Device, -1073741436);
    return _a2;
  }
  InterruptRaw = Configuration->InterruptRaw;
  if ( !InterruptRaw || (InterruptTranslated = Configuration->InterruptTranslated) == 0LL )
  {
    _a2 = -1073741436;
    v31 = 15;
    goto LABEL_56;
  }
  if ( Configuration->ShareVector != WdfUseDefault )
  {
    _a2 = -1073741436;
    v31 = 16;
    goto LABEL_56;
  }
  v20 = pParent;
LABEL_23:
  CanWakeDevice = Configuration->CanWakeDevice;
  if ( !CanWakeDevice )
    goto LABEL_24;
  if ( (InterruptTranslated->Flags & 0x20) == 0 )
  {
    v31 = 17;
    goto LABEL_55;
  }
  v32 = *(_QWORD *)&v20[6].m_ObjectFlags;
  if ( !*(_QWORD *)(v32 + 880) )
  {
    v31 = 18;
    goto LABEL_55;
  }
  if ( v32 && *(_WORD *)(v32 + 8) == 4354 )
  {
    v31 = 19;
    goto LABEL_55;
  }
LABEL_24:
  if ( Configuration->EvtInterruptDpc && Configuration->EvtInterruptWorkItem )
  {
    v31 = 20;
    goto LABEL_55;
  }
  if ( Configuration->PassiveHandling )
  {
    if ( !FxLibraryGlobals.PassiveLevelInterruptSupport )
    {
      _a2 = -1073741637;
      v31 = 23;
      goto LABEL_56;
    }
    if ( Configuration->SpinLock )
    {
      v31 = 24;
    }
    else
    {
      if ( !InterruptTranslated || (InterruptTranslated->Flags & 2) == 0 )
        goto LABEL_29;
      v31 = 25;
    }
    goto LABEL_55;
  }
  if ( Configuration->WaitLock )
  {
    v31 = 21;
    goto LABEL_55;
  }
  if ( CanWakeDevice )
  {
    v31 = 22;
    goto LABEL_55;
  }
LABEL_29:
  if ( m_Globals->FxVerifierOn && InterruptRaw )
  {
    result = FxPkgPnp::ValidateInterruptResourceCm(
               *(FxPkgPnp **)&v20[6].m_ObjectFlags,
               InterruptRaw,
               InterruptTranslated,
               Configuration);
    if ( result < 0 )
      return result;
    v20 = pParent;
  }
  result = FxInterrupt::_CreateAndInit(
             m_Globals,
             (FxDevice *)v20,
             *(FxObject **)intConfig,
             Attributes,
             Configuration,
             &pFxInterrupt);
  if ( result >= 0 )
  {
    if ( pFxInterrupt->m_ObjectSize )
      v24 = (unsigned __int64)pFxInterrupt ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v24 = 0LL;
    *v11 = (WDFINTERRUPT__ *)v24;
  }
  return result;
}
