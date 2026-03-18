/*
 * XREFs of ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0064C70
 * Callers:
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C005FC70 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 * Callees:
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0009374 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qLLd @ 0x1C00651A4 (WPP_IFR_SF_qLLd.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxDmaEnabler::ConfigureSystemAdapter(
        FxDmaEnabler *this,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *Config,
        unsigned int ConfigDirection,
        unsigned __int16 a4)
{
  $E625912F367ED84F5D18F5529B8651D4 *v7; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  const void *level; // rcx
  __int64 v10; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor; // rcx
  unsigned int Vector; // eax
  int v14; // esi
  SIZE_T PreallocatedSGListSize; // rdi
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  PVOID PoolWithTag; // rax
  const void *v18; // rbx
  $E625912F367ED84F5D18F5529B8651D4 *v19; // rcx
  char v20; // dl
  const _GUID *traceGuid; // [rsp+28h] [rbp-29h]
  int v22; // [rsp+48h] [rbp-9h]
  _DEVICE_DESCRIPTION deviceDescription_8; // [rsp+58h] [rbp+7h] OVERLAPPED BYREF

  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
    v7 = ($E625912F367ED84F5D18F5529B8651D4 *)((char *)&this->184 + 96 * (int)ConfigDirection);
  else
    v7 = &this->184;
  if ( v7->m_SimplexAdapterInfo.AdapterObject )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        level = 0LL;
      WPP_IFR_SF_qLLd(
        m_Globals,
        (unsigned __int8)m_Globals,
        ConfigDirection,
        a4,
        traceGuid,
        level,
        this->m_Profile,
        ConfigDirection,
        v22);
    }
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v10 + 318) )
      DbgBreakPoint();
    return 3221225485LL;
  }
  else
  {
    memset(&deviceDescription_8, 0, sizeof(deviceDescription_8));
    DmaDescriptor = Config->DmaDescriptor;
    deviceDescription_8.MaximumLength = this->m_MaximumLength;
    *(_WORD *)&deviceDescription_8.DemandMode = *(_WORD *)&Config->DemandMode;
    deviceDescription_8.DmaWidth = Config->DmaWidth;
    deviceDescription_8.DeviceAddress.QuadPart = Config->DeviceAddress.QuadPart;
    deviceDescription_8.DmaChannel = DmaDescriptor->u.Generic.Start.LowPart;
    Vector = DmaDescriptor->u.Interrupt.Vector;
    deviceDescription_8.Version = 3;
    deviceDescription_8.InterfaceType = Internal;
    deviceDescription_8.DmaRequestLine = Vector;
    v14 = FxDmaEnabler::ConfigureDmaAdapter(this, &deviceDescription_8, ConfigDirection);
    if ( v14 >= 0 )
    {
      PreallocatedSGListSize = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      if ( (*((_BYTE *)this + 380) & 0x10) != 0
        && PreallocatedSGListSize <= this->m_DuplexAdapterInfo[1].PreallocatedSGListSize )
      {
        PreallocatedSGListSize = this->m_DuplexAdapterInfo[1].PreallocatedSGListSize;
      }
      p_m_Globals = &this->m_Globals;
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, PreallocatedSGListSize, this->m_Globals->Tag);
      this->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        *((_BYTE *)this + 380) |= 0x20u;
        v19 = &this->184;
        v20 = *((_BYTE *)this + 380);
        this->m_SGListSize = PreallocatedSGListSize;
        if ( this->m_SimplexAdapterInfo.AdapterObject )
        {
          if ( (v20 & 0x10) != 0 )
            v19 = ($E625912F367ED84F5D18F5529B8651D4 *)&this->m_DuplexAdapterInfo[1];
          if ( v19->m_SimplexAdapterInfo.AdapterObject )
            *((_BYTE *)this + 380) = v20 | 2;
        }
      }
      else
      {
        v14 = -1073741670;
        if ( this->m_ObjectSize )
          v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v18 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaEnabler_cpp_Traceguids, v18, -1073741670);
      }
    }
    return (unsigned int)v14;
  }
}
