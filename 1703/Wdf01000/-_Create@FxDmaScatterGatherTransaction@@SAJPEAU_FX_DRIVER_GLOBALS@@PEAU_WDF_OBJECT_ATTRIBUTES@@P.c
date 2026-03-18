/*
 * XREFs of ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006D490
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0068D60 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00360A0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C003AEE8 (FxAllocateFromNPagedLookasideList.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x1C006CAAC (--0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $1E5498178E6BFFD2FD5346FC9D35457C *DmaDescription; // rax
  unsigned __int16 ExtraSize; // r10
  $1E5498178E6BFFD2FD5346FC9D35457C *v10; // rax
  FxDmaScatterGatherTransaction *v11; // r10
  unsigned __int16 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned __int64 v16; // rdx
  PSLIST_ENTRY v17; // rax
  const void *v18; // rcx
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
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
    v10 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v12 = 0;
    if ( v10->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v12 = 128;
    FxDmaScatterGatherTransaction::FxDmaScatterGatherTransaction(v11, FxDriverGlobals, v12, DmaEnabler);
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v15 = FxObject::Commit((FxObject *)v14, (_FX_DRIVER_GLOBALS *)Attributes, &hTransaction, DmaEnabler, 1u);
    if ( (v15 & 0x80000000) == 0 )
    {
      if ( (*((_BYTE *)DmaEnabler + 380) & 0x20) != 0 )
      {
        v17 = FxAllocateFromNPagedLookasideList(&DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, v16);
        *(_QWORD *)(v14 + 264) = v17;
        if ( !v17 )
        {
          v15 = -1073741670;
          v18 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v14 + 10) )
            v18 = 0LL;
          WPP_IFR_SF_qd(
            FxDriverGlobals,
            2u,
            0xFu,
            0xBu,
            WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
            v18,
            -1073741670);
          goto LABEL_16;
        }
        FxObject::AddRef(
          DmaEnabler,
          (void *)v14,
          96,
          "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
        *(_DWORD *)(v14 + 272) = DmaEnabler->m_SGListSize;
        *(_BYTE *)(v14 + 276) = 1;
      }
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
      return v15;
    }
LABEL_16:
    FxObject::DeleteFromFailedCreate((FxObject *)v14);
    return v15;
  }
  v15 = -1073741670;
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, -1073741670);
  return v15;
}
