/*
 * XREFs of ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C005DC60
 * Callers:
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C0059350 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0029C14 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C002A0D8 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qLLd @ 0x1C005DFE4 (WPP_IFR_SF_qLLd.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureSystemAdapter(
        FxDmaEnabler *this,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *Config,
        _WDF_DMA_DIRECTION ConfigDirection)
{
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  unsigned int id; // r8d
  unsigned __int16 v9; // r9
  const void *level; // rdi
  _FX_DRIVER_GLOBALS *v11; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor; // rcx
  unsigned int Vector; // eax
  int v15; // ebp
  SIZE_T PreallocatedSGListSize; // rsi
  FxDmaEnabler *v17; // rcx
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  PVOID PoolWithTag; // rax
  const void *v20; // rbx
  FxDmaEnabler *v21; // rcx
  char v22; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+40h] [rbp-58h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+50h] [rbp-48h] BYREF

  level = 0LL;
  if ( FxDmaEnabler::GetDmaDescription(this, ConfigDirection)->m_SimplexAdapterInfo.AdapterObject )
  {
    v11 = *(_FX_DRIVER_GLOBALS **)(v7 + 16);
    if ( v11->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qLLd(v11, v6, id, v9, traceGuid, level, this->m_Profile, id, v24);
    }
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 3221225485LL;
  }
  else
  {
    memset(&deviceDescription, 0, sizeof(deviceDescription));
    DmaDescriptor = Config->DmaDescriptor;
    deviceDescription.MaximumLength = this->m_MaximumLength;
    deviceDescription.DemandMode = Config->DemandMode;
    deviceDescription.AutoInitialize = Config->LoopedTransfer;
    deviceDescription.DmaWidth = Config->DmaWidth;
    deviceDescription.DeviceAddress.QuadPart = Config->DeviceAddress.QuadPart;
    deviceDescription.DmaChannel = DmaDescriptor->u.Generic.Start.LowPart;
    Vector = DmaDescriptor->u.Interrupt.Vector;
    deviceDescription.Version = 3;
    deviceDescription.InterfaceType = Internal;
    deviceDescription.DmaRequestLine = Vector;
    v15 = FxDmaEnabler::ConfigureDmaAdapter(this, &deviceDescription, ConfigDirection);
    if ( v15 >= 0 )
    {
      PreallocatedSGListSize = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      if ( (*((_BYTE *)this + 380) & 0x10) != 0
        && PreallocatedSGListSize <= FxDmaEnabler::GetWriteDmaDescription(this)->m_SimplexAdapterInfo.PreallocatedSGListSize )
      {
        PreallocatedSGListSize = FxDmaEnabler::GetWriteDmaDescription(v17)->m_SimplexAdapterInfo.PreallocatedSGListSize;
      }
      p_m_Globals = &this->m_Globals;
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, PreallocatedSGListSize, this->m_Globals->Tag);
      this->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *((_BYTE *)this + 380) |= 0x20u;
        this->m_SGListSize = PreallocatedSGListSize;
        if ( FxDmaEnabler::GetDmaDescription(this, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.AdapterObject
          && FxDmaEnabler::GetDmaDescription(v21, WdfDmaDirectionWriteToDevice)->m_SimplexAdapterInfo.AdapterObject )
        {
          *((_BYTE *)this + 380) = v22 | 2;
        }
      }
      else
      {
        v15 = -1073741670;
        if ( this->m_ObjectSize )
          v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v20 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaEnabler_cpp_Traceguids, v20, -1073741670);
      }
    }
    return (unsigned int)v15;
  }
}
