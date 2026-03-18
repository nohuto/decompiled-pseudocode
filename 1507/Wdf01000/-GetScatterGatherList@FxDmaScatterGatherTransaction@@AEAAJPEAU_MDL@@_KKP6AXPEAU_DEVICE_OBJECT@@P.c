/*
 * XREFs of ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1C0061348
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0062AD0 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaScatterGatherTransaction::GetScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *Mdl_0)
{
  KIRQL v10; // al
  FxDmaEnabler *m_DmaEnabler; // r11
  KIRQL v12; // di
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // rax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int8 v18; // [rsp+38h] [rbp-40h]
  unsigned __int8 m_DmaDirection; // [rsp+48h] [rbp-30h]

  v10 = KfRaiseIrql(2u);
  m_DmaEnabler = this->m_DmaEnabler;
  v12 = v10;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    m_DmaDirection = this->m_DmaDirection;
    v15 = DmaOperations->GetScatterGatherListEx(
            AdapterObject,
            m_DmaEnabler->m_FDO,
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            this->m_Flags,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            m_DmaDirection,
            0LL,
            0LL,
            0LL);
  }
  else
  {
    v18 = this->m_DmaDirection;
    v15 = DmaOperations->GetScatterGatherList(
            AdapterObject,
            m_DmaEnabler->m_FDO,
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            v18);
  }
  v16 = v15;
  KeLowerIrql(v12);
  return v16;
}
