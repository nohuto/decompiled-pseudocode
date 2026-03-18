/*
 * XREFs of ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0024A20
 * Callers:
 *     ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022FD0 (--0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C00248C0 (imp_WdfCollectionCreate.c)
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C0024EA4 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0029D64 (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C002B10C (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C002B1E4 (--0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F104 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z @ 0x1C005570C (--0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C0056878 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C0059790 (--0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 *     ??0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006086C (--0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C00756A8 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007E2DC (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008FEF0 (--0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxNonPagedObject::FxNonPagedObject(
        FxNonPagedObject *this,
        _FX_DRIVER_GLOBALS *Type,
        unsigned __int16 Size,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _FX_DRIVER_GLOBALS *v6; // rdx
  FxVerifierLock *verifierLock; // [rsp+30h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxNonPagedObject_vtbl *)&FxObject::`vftable';
  this->m_Type = (unsigned __int16)Type;
  this->m_ObjectSize = (Size + 15) & 0xFFF0;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, Type, 0);
  this->__vftable = (FxNonPagedObject_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v6 = this->m_Globals;
    if ( v6->FxVerifierLock )
    {
      verifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&verifierLock, v6, this);
      this[-1].m_DeviceBase = (FxDeviceBase *)verifierLock;
    }
  }
}
