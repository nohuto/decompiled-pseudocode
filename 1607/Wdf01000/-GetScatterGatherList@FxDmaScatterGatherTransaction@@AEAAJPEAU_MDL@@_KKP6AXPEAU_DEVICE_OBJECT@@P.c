/*
 * XREFs of ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1C0069478
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0069820 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::GetScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *Mdl_0)
{
  KIRQL v10; // di
  __int64 v11; // r11
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int8 v15; // [rsp+38h] [rbp-40h]
  unsigned __int8 m_DmaDirection; // [rsp+48h] [rbp-30h]

  v10 = KfRaiseIrql(2u);
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    m_DmaDirection = this->m_DmaDirection;
    v12 = this->m_AdapterInfo->AdapterObject->DmaOperations->GetScatterGatherListEx(
            this->m_AdapterInfo->AdapterObject,
            *(_DEVICE_OBJECT **)(v11 + 168),
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
    v15 = this->m_DmaDirection;
    v12 = this->m_AdapterInfo->AdapterObject->DmaOperations->GetScatterGatherList(
            this->m_AdapterInfo->AdapterObject,
            *(_DEVICE_OBJECT **)(v11 + 168),
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            v15);
  }
  v13 = v12;
  KeLowerIrql(v10);
  return v13;
}
