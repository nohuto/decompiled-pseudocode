/*
 * XREFs of ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0016D00
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003888 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002E730 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0013AF0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0026490 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00269E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00273F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qdq @ 0x1C0031A18 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qqq @ 0x1C005D374 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqqq @ 0x1C006FC94 (WPP_IFR_SF_qqqq.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusRelations(FxPkgPnp *this, FxIrp *Irp)
{
  FxIrp *v3; // r13
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v5; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  char v7; // cl
  FxTransactionedList *m_EnumInfo; // rsi
  int Status; // r15d
  _DEVICE_RELATIONS *_a3; // r12
  MxEvent *m_DeletingDoneEvent; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxTransactionedList_vtbl *v13; // rax
  __int64 v14; // r8
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_m_ListHead; // rdi
  _LIST_ENTRY **p_Blink; // r12
  int v18; // eax
  int v19; // r14d
  _LIST_ENTRY *v20; // rdi
  _LIST_ENTRY *v21; // r14
  KIRQL v22; // al
  _DEVICE_RELATIONS *v23; // rcx
  _DEVICE_RELATIONS *Blink; // rbx
  KIRQL v25; // al
  KIRQL v26; // bl
  unsigned __int8 v27; // r8
  _LIST_ENTRY *v28; // rbx
  _FX_DRIVER_GLOBALS *v29; // rcx
  FxDeviceBase *v31; // rcx
  const void *_a1; // rcx
  unsigned int Count; // eax
  unsigned int v34; // edi
  _FX_DRIVER_GLOBALS *v35; // rbx
  bool v36; // zf
  _DEVICE_RELATIONS *v37; // rdx
  unsigned __int64 _a2; // r12
  FxDeviceBase *v39; // rax
  const void *v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  void (__fastcall *v43)(unsigned __int64); // rax
  _LIST_ENTRY *v44; // rax
  _LIST_ENTRY *v45; // rcx
  _LIST_ENTRY *v46; // rax
  _LIST_ENTRY *v47; // r8
  _LIST_ENTRY *v48; // rdx
  unsigned __int64 v49; // rcx
  _LIST_ENTRY *v50; // rax
  unsigned __int64 v51; // rcx
  FxDeviceBase *v52; // rax
  const void *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  _LIST_ENTRY FreeListHead; // [rsp+50h] [rbp-58h] BYREF
  char v57; // [rsp+B0h] [rbp+8h]
  _LIST_ENTRY *v59; // [rsp+C0h] [rbp+18h] BYREF
  _DEVICE_RELATIONS *pRelations; // [rsp+C8h] [rbp+20h] BYREF

  v3 = Irp;
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v5 = 0LL;
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)v5, BusRelations);
  v7 = 0;
  m_EnumInfo = (FxTransactionedList *)this->m_EnumInfo;
  Status = 0;
  v57 = 0;
  _a3 = (_DEVICE_RELATIONS *)v3->m_Irp->IoStatus.Information;
  pRelations = _a3;
  if ( m_EnumInfo )
  {
    m_DeletingDoneEvent = m_EnumInfo->m_DeletingDoneEvent;
    m_Globals = this->m_Globals;
    m_EnumInfo = (FxTransactionedList *)((char *)m_EnumInfo + 40);
    (*(void (__fastcall **)(FxTransactionedList *, _FX_DRIVER_GLOBALS *, _LIST_ENTRY **))&m_DeletingDoneEvent->m_Event.Header.Lock)(
      m_EnumInfo,
      m_Globals,
      &v59);
    v13 = m_EnumInfo->__vftable;
    v14 = (unsigned __int8)v59;
    ++m_EnumInfo->m_ListLockedRecursionCount;
    v13->ReleaseLock(m_EnumInfo, m_Globals, v14);
    v7 = 0;
  }
  Flink = 0LL;
  if ( m_EnumInfo )
  {
    p_m_ListHead = &m_EnumInfo->m_ListHead;
    while ( 1 )
    {
      do
      {
        if ( Flink )
          Flink = Flink->Flink;
        else
          Flink = p_m_ListHead->Flink;
        if ( Flink == p_m_ListHead )
        {
LABEL_38:
          Flink = 0LL;
        }
        else
        {
          while ( LODWORD(Flink[2].Flink) != 1 )
          {
            Flink = Flink->Flink;
            if ( Flink == p_m_ListHead )
              goto LABEL_38;
          }
        }
        if ( !Flink )
        {
          _a3 = pRelations;
          goto LABEL_18;
        }
        p_Blink = &Flink[-8].Blink;
        v18 = FxChildList::ProcessBusRelations((FxChildList *)&Flink[-8].Blink, &pRelations);
        v7 = v57;
        v19 = v18;
      }
      while ( v18 == -1073741637 );
      if ( v18 < 0 )
        break;
      v7 = 1;
      v57 = 1;
    }
    if ( *((_WORD *)p_Blink + 5) )
      _a2 = (unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    v39 = this->m_DeviceBase;
    if ( v39->m_ObjectSize )
      v40 = (const void *)((unsigned __int64)v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v40 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0x14u, WPP_FxPkgPnp_cpp_Traceguids, v40, _a2, v19);
    _a3 = pRelations;
    Status = v19;
  }
  else
  {
LABEL_18:
    v20 = 0LL;
    if ( !m_EnumInfo )
      goto LABEL_32;
    v21 = &m_EnumInfo->m_ListHead;
    while ( 1 )
    {
      v20 = v20 ? v20->Flink : v21->Flink;
      if ( v20 == v21 )
      {
LABEL_40:
        v20 = 0LL;
      }
      else
      {
        while ( LODWORD(v20[2].Flink) != 1 )
        {
          v20 = v20->Flink;
          if ( v20 == v21 )
            goto LABEL_40;
        }
      }
      if ( !v20 )
        break;
      FreeListHead.Blink = &FreeListHead;
      FreeListHead.Flink = &FreeListHead;
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v20[9]);
      LODWORD(v20[11].Blink) = 2;
      KeReleaseSpinLock((PKSPIN_LOCK)&v20[9], v22);
      v23 = (_DEVICE_RELATIONS *)&v20[9].Blink;
      Blink = (_DEVICE_RELATIONS *)v20[9].Blink;
      v59 = (_LIST_ENTRY *)((char *)v20 + 152);
      if ( Blink != (_DEVICE_RELATIONS *)&v20[9].Blink )
      {
        do
        {
          v36 = HIBYTE(Blink[5].Count) == 1;
          v37 = *(_DEVICE_RELATIONS **)&Blink->Count;
          pRelations = *(_DEVICE_RELATIONS **)&Blink->Count;
          if ( v36 )
          {
            v41 = *(_QWORD *)&Blink[4].Count;
            if ( *(_WORD *)(v41 + 10) )
              v42 = v41 ^ 0xFFFFFFFFFFFFFFF8uLL;
            else
              v42 = 0LL;
            v43 = *(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(v41 + 648) + 1440LL);
            if ( v43 )
            {
              v43(v42);
              v23 = (_DEVICE_RELATIONS *)v59;
              v37 = pRelations;
            }
            HIBYTE(Blink[5].Count) = 2;
          }
          Blink = v37;
        }
        while ( v37 != v23 );
      }
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v20[9]);
      LODWORD(v20[11].Blink) = 1;
      v26 = v25;
      FxChildList::ProcessModificationsLocked((FxChildList *)&v20[-8].Blink, &FreeListHead);
      KeReleaseSpinLock((PKSPIN_LOCK)&v20[9], v26);
      while ( 1 )
      {
        v28 = FreeListHead.Flink;
        if ( FreeListHead.Flink == &FreeListHead )
          break;
        v44 = FreeListHead.Flink->Flink;
        if ( FreeListHead.Flink->Blink != &FreeListHead || v44->Blink != FreeListHead.Flink )
          __fastfail(3u);
        FreeListHead.Flink = FreeListHead.Flink->Flink;
        v44->Blink = &FreeListHead;
        v28->Blink = v28;
        v28->Flink = v28;
        if ( BYTE5(v20[11].Blink) && (LODWORD(v28[1].Flink) == 1 || LODWORD(v28[3].Blink) == 5) )
        {
          v45 = v28[1].Blink->Blink;
          if ( LODWORD(v28[3].Blink) == 5 )
            LODWORD(v28[3].Blink) = 0;
          LODWORD(v28[1].Flink) = 3;
          FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v45[40].Blink, PnpEventRemove, v27);
        }
        else
        {
          v46 = v20[8].Flink;
          v47 = v28[1].Blink;
          v48 = v28[2].Flink;
          v59 = v47;
          if ( v46 && v48 )
          {
            if ( WORD1(v20[-7].Flink) )
              v49 = (unsigned __int64)&v20[-8].Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
            else
              v49 = 0LL;
            ((void (__fastcall *)(unsigned __int64))v46)(v49);
            v47 = v59;
          }
          v50 = v20[6].Flink;
          if ( v50 && v47 )
          {
            if ( WORD1(v20[-7].Flink) )
              v51 = (unsigned __int64)&v20[-8].Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
            else
              v51 = 0LL;
            ((void (__fastcall *)(unsigned __int64, _LIST_ENTRY *))v50)(v51, v47);
          }
          ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v28[4].Blink->Flink[1].Flink)(
            v28[4].Blink,
            v28,
            77LL,
            "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
          FxPoolFree(v28);
        }
      }
    }
    v3 = Irp;
  }
  FxTransactionedList::UnlockFromEnum(m_EnumInfo, this->m_Globals);
  if ( Status < 0 )
    goto LABEL_34;
  v7 = v57;
LABEL_32:
  if ( !v7 )
    Status = v3->m_Irp->IoStatus.Status;
LABEL_34:
  v3->m_Irp->IoStatus.Information = (unsigned __int64)_a3;
  v3->m_Irp->IoStatus.Status = Status;
  v29 = this->m_Globals;
  if ( v29->FxVerboseOn )
  {
    v52 = this->m_DeviceBase;
    if ( v52->m_ObjectSize )
      v53 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v53 = 0LL;
    WPP_IFR_SF_qd(v29, 5u, 0xCu, 0x15u, WPP_FxPkgPnp_cpp_Traceguids, v53, Status);
  }
  if ( Status >= 0 && _a3 )
  {
    v31 = this->m_DeviceBase;
    _a1 = v31->m_ObjectSize ? (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_qdq(this->m_Globals, 4u, 0xCu, 0x16u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a3->Count, _a3);
    Count = _a3->Count;
    if ( _a3->Count )
    {
      v34 = 2;
      do
      {
        v35 = this->m_Globals;
        if ( !v35->FxVerboseOn )
          break;
        v54 = v34 + 1;
        if ( (unsigned int)v54 >= Count )
        {
          if ( v34 >= Count )
          {
            v55 = v34 - 1;
            if ( (unsigned int)v55 >= Count )
              WPP_IFR_SF_q(v35, 5u, 0xCu, 0x1Au, WPP_FxPkgPnp_cpp_Traceguids, _a3[v34 / 2 - 1].Objects[0]);
            else
              WPP_IFR_SF_qq(
                v35,
                5u,
                0xCu,
                0x19u,
                WPP_FxPkgPnp_cpp_Traceguids,
                _a3[v34 / 2 - 1].Objects[0],
                _a3->Objects[v55]);
          }
          else
          {
            WPP_IFR_SF_qqq(
              this->m_Globals,
              5u,
              0xCu,
              0x18u,
              WPP_FxPkgPnp_cpp_Traceguids,
              _a3[v34 / 2 - 1].Objects[0],
              *(const void **)&_a3[v34 / 2].Count,
              _a3[v34 / 2].Objects[0]);
          }
        }
        else
        {
          WPP_IFR_SF_qqqq(
            v35,
            5u,
            0xCu,
            0x17u,
            WPP_FxPkgPnp_cpp_Traceguids,
            _a3[v34 / 2 - 1].Objects[0],
            *(const void **)&_a3[v34 / 2].Count,
            _a3[v34 / 2].Objects[0],
            _a3->Objects[v54]);
        }
        Count = _a3->Count;
        v34 += 4;
      }
      while ( v34 - 2 < _a3->Count );
    }
  }
  return (unsigned int)Status;
}
