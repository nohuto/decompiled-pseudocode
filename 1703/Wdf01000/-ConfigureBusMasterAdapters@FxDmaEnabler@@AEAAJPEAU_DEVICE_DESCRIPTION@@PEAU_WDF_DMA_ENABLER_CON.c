/*
 * XREFs of ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0035F80
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0036234 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0035F3C (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
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
  char v8; // si
  __int64 (*GetDmaAlignment)(void); // rax
  char v10; // si
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  _DEVICE_OBJECT *m_FDO; // rax
  SIZE_T Size; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  _DEVICE_OBJECT *v19; // rax

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
      GetDmaAlignment = (__int64 (*)(void))v6->m_SimplexAdapterInfo.AdapterObject->DmaOperations->GetDmaAlignment;
      v10 = v8 & 0x10;
      if ( v10 )
      {
        v11 = GetDmaAlignment();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v6->m_Globals, v11, 0xBu) && (_DWORD)v12 )
          v12 = (unsigned int)(v12 - 1);
        m_FDO = v6->m_FDO;
        if ( m_FDO->AlignmentRequirement > v12 )
          LODWORD(v12) = m_FDO->AlignmentRequirement;
        v6->m_CommonBufferAlignment = v12;
        Size = *(unsigned __int64 *)((char *)&v6->m_SimplexAdapterInfo.PreallocatedSGListSize + (v10 != 0 ? 0x60 : 0));
        if ( v6->m_SimplexAdapterInfo.PreallocatedSGListSize > Size )
          Size = v6->m_SimplexAdapterInfo.PreallocatedSGListSize;
      }
      else
      {
        v17 = GetDmaAlignment();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v6->m_Globals, v17, 0xBu) && (_DWORD)v18 )
          v18 = (unsigned int)(v18 - 1);
        v19 = v6->m_FDO;
        if ( v19->AlignmentRequirement > v18 )
          LODWORD(v18) = v19->AlignmentRequirement;
        v6->m_CommonBufferAlignment = v18;
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
