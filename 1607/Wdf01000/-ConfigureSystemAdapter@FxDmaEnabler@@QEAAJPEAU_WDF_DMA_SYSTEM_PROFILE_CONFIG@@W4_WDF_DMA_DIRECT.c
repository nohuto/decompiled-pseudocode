/*
 * XREFs of ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0066854
 * Callers:
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C0064BF0 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FCFC (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ @ 0x1C0030208 (-GetWriteDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_qLLd @ 0x1C0066D1C (WPP_IFR_SF_qLLd.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureSystemAdapter(
        FxDmaEnabler *this,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *Config,
        _WDF_DMA_DIRECTION ConfigDirection)
{
  __int64 v6; // rcx
  unsigned int _a4; // r8d
  const void *_a2; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  int v10; // ebp
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor; // rcx
  unsigned int Vector; // eax
  SIZE_T PreallocatedSGListSize; // rsi
  FxDmaEnabler *v14; // rcx
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  PVOID PoolWithTag; // rax
  const void *v17; // rbx
  FxDmaEnabler *v18; // rcx
  char v19; // r8
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+50h] [rbp-48h] BYREF

  _a2 = 0LL;
  if ( FxDmaEnabler::GetDmaDescription(this, ConfigDirection)->m_SimplexAdapterInfo.AdapterObject )
  {
    v9 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
    v10 = -1073741811;
    if ( v9->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qLLd(v9, 5u, _a4, 0x12u, WPP_FxDmaEnabler_cpp_Traceguids, _a2, this->m_Profile, _a4, -1073741811);
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
    v10 = FxDmaEnabler::ConfigureDmaAdapter(this, &deviceDescription, ConfigDirection);
    if ( v10 >= 0 )
    {
      PreallocatedSGListSize = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      if ( (*((_BYTE *)this + 380) & 0x10) != 0
        && PreallocatedSGListSize <= FxDmaEnabler::GetWriteDmaDescription(this)->m_SimplexAdapterInfo.PreallocatedSGListSize )
      {
        PreallocatedSGListSize = FxDmaEnabler::GetWriteDmaDescription(v14)->m_SimplexAdapterInfo.PreallocatedSGListSize;
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
        v10 = -1073741670;
        if ( this->m_ObjectSize )
          v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v17 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaEnabler_cpp_Traceguids, v17, -1073741670);
      }
    }
  }
  return (unsigned int)v10;
}
