/*
 * XREFs of ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0029C54
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0029EC4 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0029C14 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C002A0D8 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureBusMasterAdapters(
        FxDmaEnabler *this,
        _DEVICE_DESCRIPTION *DeviceDescription,
        _WDF_DMA_ENABLER_CONFIG *Config)
{
  _WDF_DMA_DIRECTION v4; // r8d
  _DEVICE_DESCRIPTION *v5; // rsi
  FxDmaEnabler *v6; // rbx
  int v7; // edi
  char v8; // al
  _FxDmaDescription *v9; // rsi
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  _DEVICE_OBJECT *m_FDO; // rax
  SIZE_T Size; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  _DEVICE_OBJECT *v18; // rax

  v4 = WdfDmaDirectionReadFromDevice;
  DeviceDescription->MaximumLength = this->m_MaximumLength;
  v5 = DeviceDescription;
  v6 = this;
  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
  {
    v7 = FxDmaEnabler::ConfigureDmaAdapter(this, DeviceDescription, WdfDmaDirectionReadFromDevice);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v4 = WdfDmaDirectionWriteToDevice;
    DeviceDescription = v5;
    this = v6;
  }
  v7 = FxDmaEnabler::ConfigureDmaAdapter(this, DeviceDescription, v4);
  if ( v7 >= 0 )
  {
    v8 = *((_BYTE *)v6 + 380);
    if ( (v8 & 8) != 0 )
    {
      if ( (v8 & 0x10) != 0 )
      {
        v9 = FxDmaEnabler::GetWriteDmaDescription(v6);
        v10 = ((__int64 (*)(void))v6->m_SimplexAdapterInfo.AdapterObject->DmaOperations->GetDmaAlignment)();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v6->m_Globals, v10, 0xBu) && (_DWORD)v11 )
          v11 = (unsigned int)(v11 - 1);
        m_FDO = v6->m_FDO;
        if ( m_FDO->AlignmentRequirement > v11 )
          LODWORD(v11) = m_FDO->AlignmentRequirement;
        v6->m_CommonBufferAlignment = v11;
        Size = v9->PreallocatedSGListSize;
        if ( v6->m_SimplexAdapterInfo.PreallocatedSGListSize > Size )
          Size = v6->m_SimplexAdapterInfo.PreallocatedSGListSize;
      }
      else
      {
        v16 = ((__int64 (*)(void))v6->m_SimplexAdapterInfo.AdapterObject->DmaOperations->GetDmaAlignment)();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v6->m_Globals, v16, 0xBu) && (_DWORD)v17 )
          v17 = (unsigned int)(v17 - 1);
        v18 = v6->m_FDO;
        if ( v18->AlignmentRequirement > v17 )
          LODWORD(v17) = v18->AlignmentRequirement;
        v6->m_CommonBufferAlignment = v17;
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
          *(_DWORD *)(v12 + 68),
          0);
        *((_BYTE *)v6 + 380) |= 0x20u;
      }
    }
    *((_BYTE *)v6 + 380) |= 2u;
  }
  return (unsigned int)v7;
}
