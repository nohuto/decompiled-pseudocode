/*
 * XREFs of ?InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z @ 0x1C0035E48
 * Callers:
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0035F3C (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLqdi @ 0x1C006A658 (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qii @ 0x1C006A854 (WPP_IFR_SF_qii.c)
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
  int _a2; // ebp
  unsigned __int64 id; // rdx
  unsigned int flags; // r8d
  unsigned __int64 m_MaximumLength; // rcx
  __int64 v16; // rax
  const void *_a1; // rbx
  unsigned __int16 v18; // dx
  const void *v19; // rbx
  const void *v20; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v22; // rbx
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
    if ( (v10 & 8) == 0 )
    {
      if ( (v10 & 4) != 0 )
        AdapterInfo->PreallocatedSGListSize = 40LL;
      else
        AdapterInfo->PreallocatedSGListSize = 24LL * *p_NumberOfMapRegisters + 16;
      goto LABEL_4;
    }
    traceGuid = (const _GUID *)&AdapterInfo->PreallocatedSGListSize;
    _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD))v9->DmaOperations->CalculateScatterGatherList)(
            v9,
            0LL,
            0LL,
            *p_NumberOfMapRegisters << 12);
    if ( _a2 >= 0 )
    {
LABEL_4:
      id = this->m_MaximumLength;
      flags = *p_NumberOfMapRegisters;
      if ( id >= (unsigned __int64)(*p_NumberOfMapRegisters - 1) << 12 )
        id = (unsigned __int64)(flags - 1) << 12;
      AdapterInfo->MaximumFragmentLength = id;
      if ( m_Globals->FxVerboseOn )
      {
        v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v20 = 0LL;
        WPP_IFR_SF_qLqdi(
          m_Globals,
          id,
          flags,
          v8,
          traceGuid,
          v20,
          this->m_Profile,
          AdapterInfo->AdapterObject,
          flags,
          id);
      }
      m_MaximumLength = this->m_MaximumLength;
      if ( AdapterInfo->MaximumFragmentLength < m_MaximumLength && m_Globals->FxVerboseOn )
      {
        m_ObjectSize = this->m_ObjectSize;
        v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v22 = 0LL;
        WPP_IFR_SF_qii(
          m_Globals,
          5u,
          flags,
          0x17u,
          WPP_FxDmaEnabler_cpp_Traceguids,
          v22,
          m_MaximumLength,
          AdapterInfo->MaximumFragmentLength);
      }
      return 0LL;
    }
    v18 = this->m_ObjectSize;
    v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v18 )
      v19 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaEnabler_cpp_Traceguids, v19, _a2);
    return (unsigned int)_a2;
  }
  else
  {
    v16 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)v16 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaEnabler_cpp_Traceguids, _a1, -1073741823);
    return 3221225473LL;
  }
}
