/*
 * XREFs of ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0099460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0067CC0 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventEjectHardwareOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int _a3; // edi
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rbp
  FxDeviceBase *v8; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxDeviceBase *v11; // rax
  __int64 m_DeviceObject; // rcx
  const void *v13; // rax
  MxEvent *p_m_ScanEvent; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int v16; // ebp
  unsigned int v17; // edx
  __int64 v18; // r10
  __int64 v19; // r10
  MxEvent *event; // [rsp+60h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = this->m_DeviceEject.m_Method;
  if ( m_Method )
    _a3 = m_Method((WDFDEVICE__ *)v3);
  else
    _a3 = 0;
  if ( _a3 < 0 )
  {
    v16 = 258;
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x11u, WPP_FxPkgPdo_cpp_Traceguids, _a3);
    if ( _a3 == -1073741637 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxPkgPdo_cpp_Traceguids);
      if ( this->m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v17, 0xBu) || *(_BYTE *)(v18 + 317) )
        {
          LODWORD(event) = 7567731;
          Mx::MxDbgPrint(
            "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
          if ( *(_BYTE *)(v19 + 318) )
            DbgBreakPoint();
        }
      }
    }
  }
  else
  {
    m_Description = this->m_Description;
    m_DeviceList = m_Description->m_DeviceList;
    _a3 = FxChildList::UpdateAsMissing(m_DeviceList, m_Description->m_IdentificationDescription);
    if ( _a3 < 0 )
    {
      v11 = this->m_DeviceBase;
      m_DeviceObject = (__int64)v11->m_DeviceObject.m_DeviceObject;
      if ( v11->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xFu, WPP_FxPkgPdo_cpp_Traceguids, v13, m_DeviceObject, _a3);
    }
    else
    {
      v8 = this->m_DeviceBase;
      _a2 = v8->m_DeviceObject.m_DeviceObject;
      if ( v8->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0xEu, WPP_FxPkgPdo_cpp_Traceguids, _a1, _a2);
    }
    p_m_ScanEvent = &m_DeviceList->m_ScanEvent;
    event = &m_DeviceList->m_ScanEvent;
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x10u, WPP_FxPkgPdo_cpp_Traceguids, &event);
      p_m_ScanEvent = event;
    }
    KeWaitForSingleObject(p_m_ScanEvent, Executive, 0, 0, 0LL);
    v16 = 260;
  }
  this->m_PendingPnPIrp->IoStatus.Status = _a3;
  KeSetEvent(&this->m_DeviceEjectProcessed->m_Event, 0, 0);
  return v16;
}
