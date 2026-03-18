/*
 * XREFs of ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C00093BC
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0009624 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0009374 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureBusMasterAdapters(
        FxDmaEnabler *this,
        _DEVICE_DESCRIPTION *DeviceDescription,
        _WDF_DMA_ENABLER_CONFIG *Config)
{
  int v4; // r8d
  _DEVICE_DESCRIPTION *v5; // rsi
  FxDmaEnabler *v6; // rbx
  int v7; // edi
  char v8; // al
  bool v9; // zf
  __int64 (*GetDmaAlignment)(void); // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  _DEVICE_OBJECT *v14; // rax
  SIZE_T Size; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  _DEVICE_OBJECT *m_FDO; // rax

  v4 = 0;
  DeviceDescription->MaximumLength = this->m_MaximumLength;
  v5 = DeviceDescription;
  v6 = this;
  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
  {
    v7 = FxDmaEnabler::ConfigureDmaAdapter(this, DeviceDescription, 0);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v4 = 1;
    DeviceDescription = v5;
    this = v6;
  }
  v7 = FxDmaEnabler::ConfigureDmaAdapter(this, DeviceDescription, v4);
  if ( v7 >= 0 )
  {
    v8 = *((_BYTE *)v6 + 380);
    if ( (v8 & 8) != 0 )
    {
      v9 = (v8 & 0x10) == 0;
      GetDmaAlignment = (__int64 (*)(void))v6->m_SimplexAdapterInfo.AdapterObject->DmaOperations->GetDmaAlignment;
      if ( v9 )
      {
        v17 = GetDmaAlignment();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v6->m_Globals, v17, 0xBu) && (_DWORD)v18 )
          v18 = (unsigned int)(v18 - 1);
        m_FDO = v6->m_FDO;
        if ( m_FDO->AlignmentRequirement > v18 )
          LODWORD(v18) = m_FDO->AlignmentRequirement;
        v6->m_CommonBufferAlignment = v18;
        Size = v6->m_SimplexAdapterInfo.PreallocatedSGListSize;
      }
      else
      {
        v11 = GetDmaAlignment();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v6->m_Globals, v11, 0xBu) && (_DWORD)v12 )
          v12 = (unsigned int)(v12 - 1);
        v14 = v6->m_FDO;
        if ( v14->AlignmentRequirement > v12 )
          LODWORD(v12) = v14->AlignmentRequirement;
        v6->m_CommonBufferAlignment = v12;
        Size = v6->m_DuplexAdapterInfo[1].PreallocatedSGListSize;
        if ( v6->m_SimplexAdapterInfo.PreallocatedSGListSize > Size )
          Size = v6->m_SimplexAdapterInfo.PreallocatedSGListSize;
      }
      if ( (Config->Flags & 1) == 0 )
      {
        v6->m_SGListSize = Size;
        ExInitializeNPagedLookasideList(
          &v6->m_SGList.ScatterGatherProfile.Lookaside,
          0LL,
          0LL,
          ExDefaultNonPagedPoolType,
          Size,
          *(_DWORD *)(v13 + 68),
          0);
        *((_BYTE *)v6 + 380) |= 0x20u;
      }
    }
    *((_BYTE *)v6 + 380) |= 2u;
  }
  return (unsigned int)v7;
}
