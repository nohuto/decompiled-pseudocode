/*
 * XREFs of ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C0060788
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0062AD0 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::BuildScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *ScatterGatherBuffer,
        void *ScatterGatherBufferLength,
        unsigned int Mdl_0)
{
  KIRQL v12; // al
  FxDmaEnabler *m_DmaEnabler; // r11
  KIRQL v14; // si
  _FxDmaDescription *m_AdapterInfo; // rax
  _DMA_ADAPTER *AdapterObject; // rdi
  unsigned int m_Flags; // edx
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  int v21; // eax
  unsigned int v22; // ebx
  unsigned __int8 v24; // [rsp+38h] [rbp-60h]
  char m_DmaDirection; // [rsp+48h] [rbp-50h]

  v12 = KfRaiseIrql(2u);
  m_DmaEnabler = this->m_DmaEnabler;
  v14 = v12;
  m_AdapterInfo = this->m_AdapterInfo;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    AdapterObject = m_AdapterInfo->AdapterObject;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, 0, 0xFu) )
      m_Flags = this->m_Flags;
    m_DmaDirection = this->m_DmaDirection;
    v21 = (*(__int64 (__fastcall **)(_DMA_ADAPTER *, _QWORD, void *, _MDL *, unsigned __int64, unsigned int, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, char, void *, unsigned int, __int64, __int64, __int64))(v19 + 200))(
            AdapterObject,
            *(_QWORD *)(v20 + 168),
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            m_Flags,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            ScatterGatherBuffer,
            m_DmaDirection,
            ScatterGatherBufferLength,
            Mdl_0,
            v18,
            v18,
            v18);
  }
  else
  {
    v24 = this->m_DmaDirection;
    v21 = m_AdapterInfo->AdapterObject->DmaOperations->BuildScatterGatherList(
            m_AdapterInfo->AdapterObject,
            m_DmaEnabler->m_FDO,
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            ScatterGatherBuffer,
            v24,
            ScatterGatherBufferLength,
            Mdl_0);
  }
  v22 = v21;
  KeLowerIrql(v14);
  return v22;
}
