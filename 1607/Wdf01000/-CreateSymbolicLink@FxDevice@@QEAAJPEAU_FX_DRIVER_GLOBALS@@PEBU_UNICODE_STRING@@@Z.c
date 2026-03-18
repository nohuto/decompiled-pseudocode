/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001FDFC
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00360A0 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00170D0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001E914 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C003615C (--1FxAutoString@@QEAA@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  FxAutoString *p_m_DeviceName; // r15
  int v7; // eax
  NTSTATUS SymbolicLink; // edi
  __int64 v10; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // r14
  unsigned __int8 v12; // dl
  wchar_t *v13; // rax
  NTSTATUS DeviceProperty; // eax
  const void *v15; // rbx
  unsigned __int16 v16; // r9
  const void *v17; // rbx
  const void *v18; // rbx
  int _a3; // [rsp+30h] [rbp-30h]
  FxAutoString pdoName; // [rsp+50h] [rbp-10h] BYREF
  void *Caller; // [rsp+88h] [rbp+28h]
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
        v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      v16 = 19;
      _a3 = v7;
      goto LABEL_52;
    }
    SymbolicLink = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_m_DeviceName->m_UnicodeString);
    if ( SymbolicLink >= 0 )
      goto LABEL_5;
    FxPoolFree((_QWORD *)this->m_SymbolicLinkName.Buffer);
    *(_QWORD *)&this->m_SymbolicLinkName.Length = 0LL;
    this->m_SymbolicLinkName.Buffer = 0LL;
    if ( this->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    v16 = 20;
LABEL_51:
    _a3 = SymbolicLink;
LABEL_52:
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, v16, WPP_FxDeviceKm_cpp_Traceguids, v15, _a3);
    goto LABEL_5;
  }
  if ( this->m_Legacy )
  {
    if ( this->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    SymbolicLink = -1073741436;
    v16 = 12;
    goto LABEL_51;
  }
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( !SafePhysicalDevice )
  {
    if ( *(_WORD *)(v10 + 10) )
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    SymbolicLink = -1073741436;
    v16 = 13;
    goto LABEL_51;
  }
  length = 0;
  SymbolicLink = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
  if ( (int)(SymbolicLink + 0x80000000) >= 0 && SymbolicLink != -1073741789 )
  {
    if ( this->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    v16 = 14;
    goto LABEL_51;
  }
  if ( length > 0xFFFF )
  {
    if ( this->m_ObjectSize )
      v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
    SymbolicLink = -1073741675;
    WPP_IFR_SF_qddd(FxDriverGlobals, v12, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, v17, length, 0xFFFF, -1073741675);
  }
  else
  {
    if ( !length )
    {
      if ( this->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      SymbolicLink = -1073741436;
      v16 = 16;
      goto LABEL_51;
    }
    v13 = (wchar_t *)FxPoolAllocator(
                       FxDriverGlobals,
                       &FxDriverGlobals->FxPoolFrameworks,
                       1u,
                       length,
                       FxDriverGlobals->Tag,
                       Caller);
    if ( !v13 )
    {
      if ( this->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      SymbolicLink = -1073741670;
      v16 = 17;
      goto LABEL_51;
    }
    pdoName.m_UnicodeString.Buffer = v13;
    DeviceProperty = IoGetDeviceProperty(
                       SafePhysicalDevice,
                       DevicePropertyPhysicalDeviceObjectName,
                       length,
                       v13,
                       &length);
    SymbolicLink = DeviceProperty;
    if ( DeviceProperty >= 0 )
    {
      p_m_DeviceName = &pdoName;
      pdoName.m_UnicodeString.MaximumLength = length;
      pdoName.m_UnicodeString.Length = length - 2;
      goto LABEL_3;
    }
    if ( this->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x12u, WPP_FxDeviceKm_cpp_Traceguids, v18, DeviceProperty);
  }
LABEL_5:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)SymbolicLink;
}
