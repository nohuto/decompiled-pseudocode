/*
 * XREFs of ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00209E4
 * Callers:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB1C (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C002089C (-ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0020B78 (-ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ??0FxFileObjectInfo@@QEAA@XZ @ 0x1C003B1A0 (--0FxFileObjectInfo@@QEAA@XZ.c)
 */

__int64 __fastcall FxPkgGeneral::Initialize(FxPkgGeneral *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _LIST_ENTRY *p_CxDeviceInitListHead; // r14
  _LIST_ENTRY *i; // rdi
  int v7; // edi
  FxFileObjectInfo *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned int v13; // eax
  unsigned __int16 v14; // r9
  FxFileObjectInfo *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _LIST_ENTRY *v18; // rdx
  void *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( DeviceInit->FileObject.Set )
  {
    v9 = (FxFileObjectInfo *)FxPoolAllocator(
                               m_Globals,
                               &m_Globals->FxPoolFrameworks,
                               ExDefaultNonPagedPoolType,
                               0xA0uLL,
                               m_Globals->Tag,
                               Caller);
    if ( v9 )
    {
      FxFileObjectInfo::FxFileObjectInfo(v9);
      v11 = v10;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
    {
      v7 = -1073741670;
      v14 = 10;
LABEL_20:
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v14, WPP_FxPkgGeneral_cpp_Traceguids, -1073741670);
      return (unsigned int)v7;
    }
    *(_BYTE *)(v11 + 148) = 0;
    *(_DWORD *)(v11 + 80) = DeviceInit->FileObject.Class;
    *(_OWORD *)(v11 + 88) = *(_OWORD *)&DeviceInit->FileObject.Attributes.Size;
    *(_OWORD *)(v11 + 104) = *(_OWORD *)&DeviceInit->FileObject.Attributes.EvtDestroyCallback;
    *(_OWORD *)(v11 + 120) = *(_OWORD *)&DeviceInit->FileObject.Attributes.ParentObject;
    *(_QWORD *)(v11 + 136) = DeviceInit->FileObject.Attributes.ContextTypeInfo;
    *(_DWORD *)(v11 + 144) = DeviceInit->FileObject.AutoForwardCleanupClose;
    *(_QWORD *)(v11 + 24) = DeviceInit->FileObject.Callbacks.EvtDeviceFileCreate;
    *(_QWORD *)(v11 + 56) = DeviceInit->FileObject.Callbacks.EvtFileCleanup;
    *(_QWORD *)(v11 + 72) = DeviceInit->FileObject.Callbacks.EvtFileClose;
    Blink = this->m_FileObjectInfoHeadList.Blink;
    if ( Blink->Flink != &this->m_FileObjectInfoHeadList )
      __fastfail(3u);
    *(_QWORD *)v11 = &this->m_FileObjectInfoHeadList;
    *(_QWORD *)(v11 + 8) = Blink;
    Blink->Flink = (_LIST_ENTRY *)v11;
    this->m_FileObjectInfoHeadList.Blink = (_LIST_ENTRY *)v11;
    v13 = this->m_Flags | 2;
    this->m_Flags = v13;
    if ( *(_QWORD *)(v11 + 24) )
      this->m_Flags = v13 | 8;
  }
  p_CxDeviceInitListHead = &DeviceInit->CxDeviceInitListHead;
  for ( i = DeviceInit->CxDeviceInitListHead.Flink; i != p_CxDeviceInitListHead; i = i->Flink )
  {
    if ( BYTE4(i[13].Flink) )
    {
      v15 = (FxFileObjectInfo *)FxPoolAllocator(
                                  m_Globals,
                                  &m_Globals->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0xA0uLL,
                                  m_Globals->Tag,
                                  Caller);
      if ( v15 )
      {
        FxFileObjectInfo::FxFileObjectInfo(v15);
        v17 = v16;
      }
      else
      {
        v17 = 0LL;
      }
      if ( !v17 )
      {
        v7 = -1073741670;
        v14 = 11;
        goto LABEL_20;
      }
      *(_BYTE *)(v17 + 148) = 1;
      *(_DWORD *)(v17 + 80) = i[6].Blink;
      *(_LIST_ENTRY *)(v17 + 88) = i[7];
      *(_LIST_ENTRY *)(v17 + 104) = i[8];
      *(_LIST_ENTRY *)(v17 + 120) = i[9];
      *(_QWORD *)(v17 + 136) = i[10].Flink;
      *(_DWORD *)(v17 + 144) = i[13].Flink;
      *(_QWORD *)(v17 + 40) = i[11].Flink;
      *(_QWORD *)(v17 + 56) = i[12].Flink;
      *(_QWORD *)(v17 + 72) = i[11].Blink;
      *(_QWORD *)(v17 + 152) = i[26].Blink;
      v18 = this->m_FileObjectInfoHeadList.Blink;
      if ( v18->Flink != &this->m_FileObjectInfoHeadList )
        __fastfail(3u);
      *(_QWORD *)v17 = &this->m_FileObjectInfoHeadList;
      *(_QWORD *)(v17 + 8) = v18;
      v18->Flink = (_LIST_ENTRY *)v17;
      this->m_FileObjectInfoHeadList.Blink = (_LIST_ENTRY *)v17;
      this->m_Flags |= 1u;
      if ( *(_QWORD *)(v17 + 40) )
        this->m_Flags |= 4u;
    }
  }
  if ( this->m_FileObjectInfoHeadList.Flink == &this->m_FileObjectInfoHeadList )
  {
    return 0;
  }
  else
  {
    v7 = FxPkgGeneral::ConfigureConstraints(this, &this->m_FileObjectInfoHeadList);
    if ( v7 >= 0 )
    {
      v7 = FxPkgGeneral::ConfigureFileObjectClass(this, &this->m_FileObjectInfoHeadList);
      if ( v7 >= 0 )
        return 0;
    }
  }
  return (unsigned int)v7;
}
