/*
 * XREFs of ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C006A01C
 * Callers:
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C0067FF0 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0035F3C (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00360A0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     WPP_IFR_SF_qLLd @ 0x1C006A540 (WPP_IFR_SF_qLLd.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureSystemAdapter(
        FxDmaEnabler *this,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *Config,
        unsigned __int32 ConfigDirection)
{
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  int v8; // esi
  const void *_a2; // r8
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor; // rcx
  unsigned int Vector; // eax
  unsigned __int64 *p_PreallocatedSGListSize; // r8
  SIZE_T PreallocatedSGListSize; // rdi
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  PVOID PoolWithTag; // rax
  __int64 m_ObjectSize; // rax
  const void *v17; // rbx
  FxDmaEnabler *v18; // rcx
  char v19; // r8
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+50h] [rbp-48h] BYREF

  if ( FxDmaEnabler::GetDmaDescription(this, (_WDF_DMA_DIRECTION)ConfigDirection)->m_SimplexAdapterInfo.AdapterObject )
  {
    v7 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
    v8 = -1073741811;
    if ( v7->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qLLd(
        v7,
        5u,
        (unsigned int)_a2,
        0x12u,
        WPP_FxDmaEnabler_cpp_Traceguids,
        _a2,
        this->m_Profile,
        ConfigDirection,
        -1073741811);
    }
    FxVerifierDbgBreakPoint(this->m_Globals);
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
    v8 = FxDmaEnabler::ConfigureDmaAdapter(this, &deviceDescription, (_WDF_DMA_DIRECTION)ConfigDirection);
    if ( v8 >= 0 )
    {
      if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
      {
        p_PreallocatedSGListSize = &this->m_DuplexAdapterInfo[1].PreallocatedSGListSize;
        if ( this->m_SimplexAdapterInfo.PreallocatedSGListSize > this->m_DuplexAdapterInfo[1].PreallocatedSGListSize )
          p_PreallocatedSGListSize = &this->m_SimplexAdapterInfo.PreallocatedSGListSize;
        PreallocatedSGListSize = *p_PreallocatedSGListSize;
      }
      else
      {
        PreallocatedSGListSize = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      }
      p_m_Globals = &this->m_Globals;
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, PreallocatedSGListSize, this->m_Globals->Tag);
      this->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *((_BYTE *)this + 380) |= 0x20u;
        this->m_SGListSize = PreallocatedSGListSize;
        if ( FxDmaEnabler::GetDmaDescription(this, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.AdapterObject
          && FxDmaEnabler::GetDmaDescription(v18, WdfDmaDirectionWriteToDevice)->m_SimplexAdapterInfo.AdapterObject )
        {
          *((_BYTE *)this + 380) = v19 | 2;
        }
      }
      else
      {
        v8 = -1073741670;
        m_ObjectSize = this->m_ObjectSize;
        v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !(_WORD)m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaEnabler_cpp_Traceguids, v17, -1073741670);
      }
    }
  }
  return (unsigned int)v8;
}
