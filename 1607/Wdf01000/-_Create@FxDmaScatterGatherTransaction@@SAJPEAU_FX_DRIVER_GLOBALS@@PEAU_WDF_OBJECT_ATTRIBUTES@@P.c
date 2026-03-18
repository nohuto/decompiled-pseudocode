/*
 * XREFs of ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0069B8C
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0065650 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C0037B64 (FxAllocateFromNPagedLookasideList.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x1C00691DC (--0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $573AD7123BB726F3889E56BBEE799ACF *DmaDescription; // rax
  const void *v9; // rdi
  unsigned __int16 ExtraSize; // r10
  $573AD7123BB726F3889E56BBEE799ACF *v11; // rax
  FxDmaScatterGatherTransaction *v12; // r10
  unsigned __int16 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // esi
  unsigned __int64 v17; // rdx
  PSLIST_ENTRY v18; // rax
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v9 = 0LL;
  ExtraSize = 0;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    ExtraSize = 128;
  if ( FxObjectHandleAlloc(
         FxDriverGlobals,
         ExDefaultNonPagedPoolType,
         0x118uLL,
         0,
         Attributes,
         ExtraSize,
         FxObjectTypeExternal) )
  {
    v11 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v13 = 0;
    if ( v11->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v13 = 128;
    FxDmaScatterGatherTransaction::FxDmaScatterGatherTransaction(v12, FxDriverGlobals, v13, DmaEnabler);
    v15 = v14;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v16 = FxObject::Commit((FxObject *)v15, Attributes, &hTransaction, DmaEnabler, 1u);
    if ( (v16 & 0x80000000) == 0 )
    {
      if ( (*((_BYTE *)DmaEnabler + 380) & 0x20) != 0 )
      {
        v18 = FxAllocateFromNPagedLookasideList(&DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, v17);
        *(_QWORD *)(v15 + 264) = v18;
        if ( !v18 )
        {
          v16 = -1073741670;
          if ( *(_WORD *)(v15 + 10) )
            v9 = (const void *)(v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qd(
            FxDriverGlobals,
            2u,
            0xFu,
            0xBu,
            WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
            v9,
            -1073741670);
          goto LABEL_16;
        }
        FxObject::AddRef(
          DmaEnabler,
          (void *)v15,
          96,
          "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
        *(_DWORD *)(v15 + 272) = DmaEnabler->m_SGListSize;
        *(_BYTE *)(v15 + 276) = 1;
      }
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
      return v16;
    }
LABEL_16:
    FxObject::DeleteFromFailedCreate((FxObject *)v15);
    return v16;
  }
  v16 = -1073741670;
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, -1073741670);
  return v16;
}
