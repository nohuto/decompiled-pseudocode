/*
 * XREFs of ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002BD40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00266D0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C002E3AC (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x1C003A244 (-FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

int __fastcall FxPkgPdo::Initialize(FxPkgPdo *this, WDFDEVICE_INIT *DeviceInit)
{
  int result; // eax
  FxCollectionInternal *p_CompatibleIDs; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY **p_Blink; // r8
  __int64 v11; // rdx
  FxString *DeviceID; // rax
  unsigned __int64 _a2; // rbx
  FxString *InstanceID; // rax
  FxString *ContainerID; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // r9
  FxString *v20; // rdx
  size_t Length; // rbx
  FxString *v22; // rdx
  size_t v23; // rbx
  unsigned __int8 Static; // al
  FxDeviceDescriptionEntry *DescriptionEntry; // rax
  int v26; // r8d
  FxChildList *m_DeviceList; // rcx
  FxString *v28; // rdx
  size_t v29; // rbx
  void *Caller; // [rsp+58h] [rbp+0h]

  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    p_CompatibleIDs = &DeviceInit->Pdo.CompatibleIDs;
    v7 = FxCalculateTotalStringSize(&DeviceInit->Pdo.HardwareIDs, 0, 0LL);
    Flink = DeviceInit->Pdo.CompatibleIDs.m_ListHead.Flink;
    while ( 1 )
    {
      p_Blink = &Flink[-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)p_CompatibleIDs )
        break;
      v9 = *p_Blink;
      Flink = p_Blink[1];
      v6 += (unsigned __int16)(LOWORD(v9[6].Blink) + 2);
    }
    if ( p_CompatibleIDs->m_Count )
      v11 = v6 + 2;
    else
      v11 = 4LL;
    DeviceID = DeviceInit->Pdo.DeviceID;
    _a2 = v11 + v7;
    if ( DeviceID )
      _a2 += (unsigned __int16)(DeviceID->m_UnicodeString.Length + 2);
    InstanceID = DeviceInit->Pdo.InstanceID;
    if ( InstanceID )
      _a2 += (unsigned __int16)(InstanceID->m_UnicodeString.Length + 2);
    ContainerID = DeviceInit->Pdo.ContainerID;
    if ( ContainerID )
      _a2 += (unsigned __int16)(ContainerID->m_UnicodeString.Length + 2);
    v16 = (wchar_t *)FxPoolAllocator(
                       this->m_Globals,
                       &this->m_Globals->FxPoolFrameworks,
                       1u,
                       _a2,
                       this->m_Globals->Tag,
                       Caller);
    this->m_IDsAllocation = v16;
    if ( v16 )
    {
      this->m_HardwareIDs = v16;
      v17 = FxCopyMultiSz(v16, &DeviceInit->Pdo.HardwareIDs);
      this->m_CompatibleIDs = v17;
      v18 = FxCopyMultiSz(v17, &DeviceInit->Pdo.CompatibleIDs);
      v19 = v18;
      if ( DeviceInit->Pdo.DeviceID )
      {
        this->m_DeviceID = v18;
        v20 = DeviceInit->Pdo.DeviceID;
        Length = v20->m_UnicodeString.Length;
        memmove(v18, v20->m_UnicodeString.Buffer, Length);
        this->m_DeviceID[(unsigned __int64)(unsigned int)Length >> 1] = 0;
        v19 = (wchar_t *)((char *)this->m_DeviceID + Length + 2);
      }
      if ( DeviceInit->Pdo.InstanceID )
      {
        this->m_InstanceID = v19;
        v22 = DeviceInit->Pdo.InstanceID;
        v23 = v22->m_UnicodeString.Length;
        memmove(v19, v22->m_UnicodeString.Buffer, v23);
        this->m_InstanceID[(unsigned __int64)(unsigned int)v23 >> 1] = 0;
        v19 = (wchar_t *)((char *)this->m_InstanceID + v23 + 2);
      }
      if ( DeviceInit->Pdo.ContainerID )
      {
        this->m_ContainerID = v19;
        v28 = DeviceInit->Pdo.ContainerID;
        v29 = v28->m_UnicodeString.Length;
        memmove(v19, v28->m_UnicodeString.Buffer, v29);
        this->m_ContainerID[v29 >> 1] = 0;
      }
      Static = DeviceInit->Pdo.Static;
      this->m_Static = Static;
      if ( Static )
      {
        v26 = 327;
        m_DeviceList = *(FxChildList **)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 1584LL);
      }
      else
      {
        DescriptionEntry = DeviceInit->Pdo.DescriptionEntry;
        v26 = 333;
        this->m_Description = DescriptionEntry;
        m_DeviceList = DescriptionEntry->m_DeviceList;
      }
      this->m_OwningChildList = m_DeviceList;
      FxObject::AddRef(m_DeviceList, this, v26, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp");
      return 0;
    }
    else
    {
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxPkgPdo_cpp_Traceguids, DeviceInit, _a2, -1073741670);
      return -1073741670;
    }
  }
  return result;
}
