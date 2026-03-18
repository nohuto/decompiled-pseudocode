/*
 * XREFs of ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0063080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qqxx @ 0x1C006481C (WPP_IFR_SF_qqxx.c)
 *     WPP_IFR_SF_qqxxd @ 0x1C006491C (WPP_IFR_SF_qqxxd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::TransferCompleted(
        FxDmaPacketTransaction *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_OPERATIONS *DmaOperations; // rdi
  const void *_a3; // rcx
  _DMA_ADAPTER *AdapterObject; // rcx
  unsigned __int8 v8; // dl
  int id; // edi
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const void *v12; // rcx
  const void *v13; // rbx
  const _GUID *_a2; // [rsp+20h] [rbp-38h]

  m_Globals = this->m_Globals;
  DmaOperations = this->m_AdapterInfo->AdapterObject->DmaOperations;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a3 = 0LL;
    WPP_IFR_SF_qqxx(
      m_Globals,
      a2,
      a3,
      0xFu,
      WPP_FxDmaTransaction_hpp_Traceguids,
      _a3,
      this->m_CurrentFragmentMdl,
      this->m_CurrentFragmentOffset,
      this->m_CurrentFragmentLength);
  }
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  if ( this->m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    LODWORD(_a2) = this->m_CurrentFragmentLength;
    id = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))DmaOperations->FlushAdapterBuffersEx)(
           AdapterObject,
           this->m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           this->m_CurrentFragmentOffset);
    goto LABEL_12;
  }
  LODWORD(_a2) = this->m_CurrentFragmentLength;
  if ( ((unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))DmaOperations->FlushAdapterBuffers)(
         AdapterObject,
         this->m_CurrentFragmentMdl,
         this->m_MapRegisterBase,
         (char *)this->m_CurrentFragmentMdl->StartVa
       + this->m_CurrentFragmentMdl->ByteOffset
       + this->m_CurrentFragmentOffset) )
  {
    id = 0;
LABEL_12:
    if ( id >= 0 )
      return (unsigned int)id;
    goto LABEL_13;
  }
  id = -1073741823;
LABEL_13:
  if ( this->m_ObjectSize )
    v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v12 = 0LL;
  WPP_IFR_SF_qqxxd(
    this->m_Globals,
    v8,
    v10,
    v11,
    _a2,
    v12,
    this->m_CurrentFragmentMdl,
    this->m_CurrentFragmentOffset,
    this->m_CurrentFragmentLength,
    id);
  if ( this->m_ObjectSize )
    v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v13 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x38u, WPP_FxDmaTransaction_cpp_Traceguids, v13, id);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return (unsigned int)id;
}
