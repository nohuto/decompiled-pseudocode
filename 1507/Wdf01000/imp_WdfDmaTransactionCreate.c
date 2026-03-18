/*
 * XREFs of imp_WdfDmaTransactionCreate @ 0x1C005E310
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063640 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063754 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063964 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDmaTransactionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaEnabler,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMATRANSACTION__ **DmaTransactionHandle)
{
  FxDmaEnabler *v6; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  _WDF_DMA_PROFILE m_Profile; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxDmaEnabler *pDmaEnabler; // [rsp+48h] [rbp+10h] BYREF

  if ( !DmaEnabler )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1400uLL);
  v6 = (FxDmaEnabler *)(~DmaEnabler & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DmaEnabler & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxDmaEnabler *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 5120 )
  {
    pDmaEnabler = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pDmaEnabler, (void *)DmaEnabler, 0x1400u, Offset);
    v6 = pDmaEnabler;
  }
  m_Globals = v6->m_Globals;
  if ( !DmaTransactionHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DmaTransactionHandle = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 1, (unsigned __int16)DmaTransactionHandle);
  if ( result >= 0 )
  {
    m_Profile = pDmaEnabler->m_Profile;
    if ( m_Profile != WdfDmaProfilePacket )
    {
      if ( m_Profile == WdfDmaProfileScatterGather )
        return FxDmaScatterGatherTransaction::_Create(m_Globals, Attributes, pDmaEnabler, DmaTransactionHandle);
      if ( m_Profile != WdfDmaProfilePacket64 )
      {
        if ( m_Profile <= WdfDmaProfilePacket64 )
          return -1073741823;
        if ( m_Profile > WdfDmaProfileScatterGather64Duplex )
        {
          if ( m_Profile <= WdfDmaProfileSystemDuplex )
            return FxDmaSystemTransaction::_Create(m_Globals, Attributes, pDmaEnabler, DmaTransactionHandle);
          return -1073741823;
        }
        return FxDmaScatterGatherTransaction::_Create(m_Globals, Attributes, pDmaEnabler, DmaTransactionHandle);
      }
    }
    return FxDmaPacketTransaction::_Create(m_Globals, Attributes, pDmaEnabler, DmaTransactionHandle);
  }
  return result;
}
