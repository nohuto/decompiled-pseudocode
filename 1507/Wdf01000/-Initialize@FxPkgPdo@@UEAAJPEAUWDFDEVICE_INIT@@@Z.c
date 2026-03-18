/*
 * XREFs of ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0011830
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001B520 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C002B6DC (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x1C002B7A4 (-FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 */

int __fastcall FxPkgPdo::Initialize(FxPkgPdo *this, WDFDEVICE_INIT *DeviceInit)
{
  int result; // eax
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // dl
  unsigned __int8 *v7; // r8
  SIZE_T _a2; // rbx
  FxString *DeviceID; // rax
  FxString *InstanceID; // rax
  FxString *ContainerID; // rax
  wchar_t *v12; // rax
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  wchar_t *v15; // r9
  FxString *v16; // rdx
  size_t Length; // rbx
  FxString *v18; // rdx
  size_t v19; // rbx
  unsigned __int8 Static; // al
  FxDeviceDescriptionEntry *DescriptionEntry; // rax
  FxChildList *m_DeviceList; // rcx
  unsigned int v23; // edx
  FxTagTracker *v24; // rcx
  __int64 v25; // rcx
  FxString *v26; // rdx
  size_t v27; // rbx
  int v28; // r8d
  _LIST_ENTRY *Caller; // [rsp+58h] [rbp+0h]

  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    v5 = FxCalculateTotalStringSize(&DeviceInit->Pdo.HardwareIDs, 0, 0LL);
    _a2 = FxCalculateTotalStringSize(&DeviceInit->Pdo.CompatibleIDs, v6, v7) + v5;
    DeviceID = DeviceInit->Pdo.DeviceID;
    if ( DeviceID )
      _a2 += (unsigned __int16)(DeviceID->m_UnicodeString.Length + 2);
    InstanceID = DeviceInit->Pdo.InstanceID;
    if ( InstanceID )
      _a2 += (unsigned __int16)(InstanceID->m_UnicodeString.Length + 2);
    ContainerID = DeviceInit->Pdo.ContainerID;
    if ( ContainerID )
      _a2 += (unsigned __int16)(ContainerID->m_UnicodeString.Length + 2);
    v12 = (wchar_t *)FxPoolAllocator(
                       this->m_Globals,
                       (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                       1u,
                       _a2,
                       this->m_Globals->Tag,
                       Caller);
    this->m_IDsAllocation = v12;
    if ( !v12 )
    {
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxPkgPdo_cpp_Traceguids, DeviceInit, _a2, -1073741670);
      return -1073741670;
    }
    this->m_HardwareIDs = v12;
    v13 = FxCopyMultiSz(v12, &DeviceInit->Pdo.HardwareIDs);
    this->m_CompatibleIDs = v13;
    v14 = FxCopyMultiSz(v13, &DeviceInit->Pdo.CompatibleIDs);
    v15 = v14;
    if ( DeviceInit->Pdo.DeviceID )
    {
      this->m_DeviceID = v14;
      v16 = DeviceInit->Pdo.DeviceID;
      Length = v16->m_UnicodeString.Length;
      memmove(v14, v16->m_UnicodeString.Buffer, Length);
      this->m_DeviceID[(unsigned __int64)(unsigned int)Length >> 1] = 0;
      v15 = (wchar_t *)((char *)this->m_DeviceID + Length + 2);
    }
    if ( DeviceInit->Pdo.InstanceID )
    {
      this->m_InstanceID = v15;
      v18 = DeviceInit->Pdo.InstanceID;
      v19 = v18->m_UnicodeString.Length;
      memmove(v15, v18->m_UnicodeString.Buffer, v19);
      this->m_InstanceID[(unsigned __int64)(unsigned int)v19 >> 1] = 0;
      v15 = (wchar_t *)((char *)this->m_InstanceID + v19 + 2);
    }
    if ( DeviceInit->Pdo.ContainerID )
    {
      this->m_ContainerID = v15;
      v26 = DeviceInit->Pdo.ContainerID;
      v27 = v26->m_UnicodeString.Length;
      memmove(v15, v26->m_UnicodeString.Buffer, v27);
      this->m_ContainerID[v27 >> 1] = 0;
    }
    Static = DeviceInit->Pdo.Static;
    this->m_Static = Static;
    if ( Static )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 1368LL);
      this->m_OwningChildList = (FxChildList *)v25;
      v23 = _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
      if ( *(char *)(v25 + 24) < 0 )
        v24 = *(FxTagTracker **)(v25 - 32);
      else
        v24 = 0LL;
      if ( !v24 )
        return 0;
      v28 = 327;
    }
    else
    {
      DescriptionEntry = DeviceInit->Pdo.DescriptionEntry;
      this->m_Description = DescriptionEntry;
      m_DeviceList = DescriptionEntry->m_DeviceList;
      this->m_OwningChildList = m_DeviceList;
      v23 = _InterlockedIncrement(&m_DeviceList->m_Refcnt);
      if ( SLOBYTE(m_DeviceList->m_ObjectFlags) < 0 )
        v24 = *(FxTagTracker **)&m_DeviceList[-1].m_ScanEvent.m_Event.Header.Lock;
      else
        v24 = 0LL;
      if ( !v24 )
        return 0;
      v28 = 333;
    }
    FxTagTracker::UpdateTagHistory(
      v24,
      this,
      v28,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp",
      TagAddRef,
      v23);
    return 0;
  }
  return result;
}
