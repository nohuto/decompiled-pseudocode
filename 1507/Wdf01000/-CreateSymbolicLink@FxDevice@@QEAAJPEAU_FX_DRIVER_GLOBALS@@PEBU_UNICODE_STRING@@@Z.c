/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000E28C
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C000A660 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C000A744 (--1FxAutoString@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00105B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  FxAutoString *p_m_DeviceName; // r15
  int v7; // eax
  NTSTATUS SymbolicLink; // edi
  _DEVICE_OBJECT *m_DeviceObject; // r14
  unsigned __int8 v11; // dl
  unsigned __int16 *v12; // rax
  NTSTATUS DeviceProperty; // eax
  const void *v14; // rbx
  unsigned __int16 v15; // r9
  const void *v16; // rbx
  const void *v17; // rbx
  int _a3; // [rsp+30h] [rbp-30h]
  FxAutoString pdoName; // [rsp+50h] [rbp-10h] BYREF
  _LIST_ENTRY *Caller; // [rsp+88h] [rbp+28h]
  unsigned int length; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)&pdoName.m_UnicodeString.Length = 0LL;
  pdoName.m_UnicodeString.Buffer = 0LL;
  if ( this->m_DeviceName.Buffer )
  {
    p_m_DeviceName = (FxAutoString *)&this->m_DeviceName;
LABEL_3:
    v7 = FxDuplicateUnicodeString(FxDriverGlobals, SymbolicLinkName, &this->m_SymbolicLinkName);
    SymbolicLink = v7;
    if ( v7 < 0 )
    {
      if ( this->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      v15 = 19;
      _a3 = v7;
      goto LABEL_53;
    }
    SymbolicLink = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_m_DeviceName->m_UnicodeString);
    if ( SymbolicLink >= 0 )
      goto LABEL_5;
    FxPoolFree(this->m_SymbolicLinkName.Buffer);
    *(_QWORD *)&this->m_SymbolicLinkName.Length = 0LL;
    this->m_SymbolicLinkName.Buffer = 0LL;
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    v15 = 20;
LABEL_52:
    _a3 = SymbolicLink;
LABEL_53:
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, v15, WPP_FxDeviceKm_cpp_Traceguids, v14, _a3);
    goto LABEL_5;
  }
  if ( this->m_Legacy )
  {
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    SymbolicLink = -1073741436;
    v15 = 12;
    goto LABEL_52;
  }
  if ( !this->m_PdoKnown || (m_DeviceObject = this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject) == 0LL )
  {
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    SymbolicLink = -1073741436;
    v15 = 13;
    goto LABEL_52;
  }
  length = 0;
  SymbolicLink = IoGetDeviceProperty(m_DeviceObject, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
  if ( (int)(SymbolicLink + 0x80000000) >= 0 && SymbolicLink != -1073741789 )
  {
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    v15 = 14;
    goto LABEL_52;
  }
  if ( length > 0xFFFF )
  {
    if ( this->m_ObjectSize )
      v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v16 = 0LL;
    SymbolicLink = -1073741675;
    WPP_IFR_SF_qddd(FxDriverGlobals, v11, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, v16, length, 0xFFFF, -1073741675);
  }
  else
  {
    if ( !length )
    {
      if ( this->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      SymbolicLink = -1073741436;
      v15 = 16;
      goto LABEL_52;
    }
    v12 = (unsigned __int16 *)FxPoolAllocator(
                                FxDriverGlobals,
                                (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
                                1u,
                                length,
                                FxDriverGlobals->Tag,
                                Caller);
    if ( !v12 )
    {
      if ( this->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      SymbolicLink = -1073741670;
      v15 = 17;
      goto LABEL_52;
    }
    pdoName.m_UnicodeString.Buffer = v12;
    DeviceProperty = IoGetDeviceProperty(m_DeviceObject, DevicePropertyPhysicalDeviceObjectName, length, v12, &length);
    SymbolicLink = DeviceProperty;
    if ( DeviceProperty >= 0 )
    {
      p_m_DeviceName = &pdoName;
      pdoName.m_UnicodeString.MaximumLength = length;
      pdoName.m_UnicodeString.Length = length - 2;
      goto LABEL_3;
    }
    if ( this->m_ObjectSize )
      v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x12u, WPP_FxDeviceKm_cpp_Traceguids, v17, DeviceProperty);
  }
LABEL_5:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)SymbolicLink;
}
