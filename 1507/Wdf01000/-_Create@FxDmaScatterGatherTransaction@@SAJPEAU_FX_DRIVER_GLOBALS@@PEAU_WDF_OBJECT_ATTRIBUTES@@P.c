/*
 * XREFs of ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063754
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C005E310 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C00603DC (--0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $E625912F367ED84F5D18F5529B8651D4 *v4; // rbp
  const void *v6; // rbx
  unsigned __int16 ExtraSize; // ax
  FxDmaTransactionBase *v11; // rax
  FxDmaTransactionBase *v12; // rsi
  unsigned __int16 v13; // r9
  unsigned int v14; // ebp
  PSLIST_ENTRY v15; // rax
  unsigned int v17; // ecx
  FxTagTracker *v18; // rax
  void *hTransaction; // [rsp+80h] [rbp+18h] BYREF

  v4 = &DmaEnabler->184;
  v6 = 0LL;
  ExtraSize = 0;
  if ( DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    ExtraSize = 128;
  v11 = (FxDmaTransactionBase *)FxObjectHandleAlloc(
                                  FxDriverGlobals,
                                  ExDefaultNonPagedPoolType,
                                  0x110uLL,
                                  0,
                                  Attributes,
                                  ExtraSize,
                                  FxObjectTypeExternal);
  v12 = v11;
  if ( v11 )
  {
    v13 = 0;
    if ( v4->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v13 = 128;
    FxDmaTransactionBase::FxDmaTransactionBase(v11, FxDriverGlobals, 0x110u, v13, DmaEnabler);
    *(_QWORD *)&v12[1].m_Type = 0LL;
    v12->__vftable = (FxDmaTransactionBase_vtbl *)&FxDmaScatterGatherTransaction::`vftable';
    v12[1].__vftable = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v14 = FxObject::Commit(v12, Attributes, &hTransaction, DmaEnabler, 1u);
    if ( (v14 & 0x80000000) == 0 )
    {
      if ( (*((_BYTE *)DmaEnabler + 380) & 0x20) != 0 )
      {
        ++DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.TotalAllocates;
        v15 = ExpInterlockedPopEntrySList(&DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead);
        if ( !v15 )
        {
          ++DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.AllocateMisses;
          v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.AllocateEx)(
                                (unsigned int)DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.Type,
                                DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.Size,
                                DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.Tag);
        }
        *(_QWORD *)&v12[1].m_Type = v15;
        if ( !v15 )
        {
          v14 = -1073741670;
          if ( v12->m_ObjectSize )
            v6 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xFu, 0x19u, WPP_FxDmaTransaction_cpp_Traceguids, v6, -1073741670);
          goto LABEL_18;
        }
        v17 = _InterlockedIncrement(&DmaEnabler->m_Refcnt);
        if ( SLOBYTE(DmaEnabler->m_ObjectFlags) >= 0 )
          v18 = 0LL;
        else
          v18 = *(FxTagTracker **)&DmaEnabler[-1].m_DmaEnablerFillFailed;
        if ( v18 )
          FxTagTracker::UpdateTagHistory(
            v18,
            v12,
            821,
            "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransaction.cpp",
            TagAddRef,
            v17);
      }
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
      return v14;
    }
LABEL_18:
    FxObject::DeleteFromFailedCreate(v12);
    return v14;
  }
  v14 = -1073741670;
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0x18u, WPP_FxDmaTransaction_cpp_Traceguids, -1073741670);
  return v14;
}
