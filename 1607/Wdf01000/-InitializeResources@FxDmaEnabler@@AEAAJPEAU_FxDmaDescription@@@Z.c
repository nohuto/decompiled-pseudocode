/*
 * XREFs of ?InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z @ 0x1C002FC10
 * Callers:
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FCFC (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLqdi @ 0x1C0066E2C (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qii @ 0x1C006701C (WPP_IFR_SF_qii.c)
 */

__int64 __fastcall FxDmaEnabler::InitializeResources(FxDmaEnabler *this, _FxDmaDescription *AdapterInfo)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  unsigned int *p_NumberOfMapRegisters; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_ADAPTER *DmaAdapter; // rax
  unsigned __int16 v8; // r9
  _DMA_ADAPTER *v9; // r10
  char v10; // al
  int _a2; // eax
  unsigned int v12; // ebp
  unsigned int flags; // r8d
  unsigned __int64 id; // rdx
  unsigned __int64 m_MaximumLength; // rax
  const void *_a1; // rbx
  const void *v18; // rbx
  const void *v19; // rcx
  const void *v20; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]

  p_m_Globals = &this->m_Globals;
  p_NumberOfMapRegisters = &AdapterInfo->NumberOfMapRegisters;
  m_Globals = this->m_Globals;
  DmaAdapter = IoGetDmaAdapter(this->m_PDO, &AdapterInfo->DeviceDescription, &AdapterInfo->NumberOfMapRegisters);
  AdapterInfo->AdapterObject = DmaAdapter;
  v9 = DmaAdapter;
  if ( DmaAdapter )
  {
    v10 = *((_BYTE *)this + 380);
    if ( (v10 & 8) != 0 )
    {
      traceGuid = (const _GUID *)&AdapterInfo->PreallocatedSGListSize;
      _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD))v9->DmaOperations->CalculateScatterGatherList)(
              v9,
              0LL,
              0LL,
              *p_NumberOfMapRegisters << 12);
      v12 = _a2;
      if ( _a2 < 0 )
      {
        if ( this->m_ObjectSize )
          v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v18 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaEnabler_cpp_Traceguids, v18, _a2);
        return v12;
      }
    }
    else if ( (v10 & 4) != 0 )
    {
      AdapterInfo->PreallocatedSGListSize = 40LL;
    }
    else
    {
      AdapterInfo->PreallocatedSGListSize = 24LL * *p_NumberOfMapRegisters + 16;
    }
    flags = *p_NumberOfMapRegisters;
    id = (unsigned __int64)(*p_NumberOfMapRegisters - 1) << 12;
    if ( this->m_MaximumLength < id )
      id = this->m_MaximumLength;
    AdapterInfo->MaximumFragmentLength = id;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v19 = 0LL;
      WPP_IFR_SF_qLqdi(m_Globals, id, flags, v8, traceGuid, v19, this->m_Profile, AdapterInfo->AdapterObject, flags, id);
    }
    m_MaximumLength = this->m_MaximumLength;
    if ( AdapterInfo->MaximumFragmentLength < m_MaximumLength && m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v20 = 0LL;
      WPP_IFR_SF_qii(
        m_Globals,
        5u,
        flags,
        0x17u,
        WPP_FxDmaEnabler_cpp_Traceguids,
        v20,
        m_MaximumLength,
        AdapterInfo->MaximumFragmentLength);
    }
    return 0LL;
  }
  else
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaEnabler_cpp_Traceguids, _a1, -1073741823);
    return 3221225473LL;
  }
}
