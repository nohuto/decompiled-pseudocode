/*
 * XREFs of ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C003A3E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqxx @ 0x1C0068E10 (WPP_IFR_SF_qqxx.c)
 *     WPP_IFR_SF_qqxxd @ 0x1C0068F10 (WPP_IFR_SF_qqxxd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::TransferCompleted(
        FxDmaPacketTransaction *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_OPERATIONS *DmaOperations; // rdi
  const void *v7; // rbx
  const void *v8; // rcx
  $573AD7123BB726F3889E56BBEE799ACF *DmaDescription; // rax
  void *m_MapRegisterBase; // r8
  _MDL *m_CurrentFragmentMdl; // rdx
  _DMA_ADAPTER *AdapterObject; // rcx
  unsigned __int8 v13; // dl
  int id; // edi
  unsigned int v15; // r8d
  unsigned __int16 v16; // r9
  const void *v17; // rcx
  unsigned int _a4; // [rsp+20h] [rbp-38h]
  const _GUID *_a4a; // [rsp+20h] [rbp-38h]
  int _a5; // [rsp+28h] [rbp-30h]

  m_Globals = this->m_Globals;
  DmaOperations = this->m_AdapterInfo->AdapterObject->DmaOperations;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v8 = 0LL;
    WPP_IFR_SF_qqxx(
      m_Globals,
      a2,
      a3,
      0xFu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      v8,
      this->m_CurrentFragmentMdl,
      this->m_CurrentFragmentOffset,
      this->m_CurrentFragmentLength);
  }
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  m_MapRegisterBase = this->m_MapRegisterBase;
  m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
  LOBYTE(_a5) = this->m_DmaDirection;
  _a4 = this->m_CurrentFragmentLength;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    id = DmaOperations->FlushAdapterBuffersEx(
           AdapterObject,
           m_CurrentFragmentMdl,
           m_MapRegisterBase,
           this->m_CurrentFragmentOffset,
           _a4,
           _a5);
    goto LABEL_3;
  }
  if ( DmaOperations->FlushAdapterBuffers(
         AdapterObject,
         m_CurrentFragmentMdl,
         m_MapRegisterBase,
         (char *)m_CurrentFragmentMdl->StartVa + m_CurrentFragmentMdl->ByteOffset + this->m_CurrentFragmentOffset,
         _a4,
         _a5) )
  {
    id = 0;
LABEL_3:
    if ( id >= 0 )
      return (unsigned int)id;
    goto LABEL_19;
  }
  id = -1073741823;
LABEL_19:
  if ( this->m_ObjectSize )
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v17 = 0LL;
  WPP_IFR_SF_qqxxd(
    this->m_Globals,
    v13,
    v15,
    v16,
    _a4a,
    v17,
    this->m_CurrentFragmentMdl,
    this->m_CurrentFragmentOffset,
    this->m_CurrentFragmentLength,
    id);
  if ( this->m_ObjectSize )
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v7 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v7, id);
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)id;
}
