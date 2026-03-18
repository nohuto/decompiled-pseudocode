/*
 * XREFs of ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027290
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005844 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0037ED0 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002CE60 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qdq @ 0x1C00399C8 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqqq @ 0x1C0082320 (WPP_IFR_SF_qqqq.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusRelations(FxPkgPnp *this, FxIrp *Irp)
{
  FxPkgPnp *v2; // r15
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v5; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  _IRP *m_Irp; // rax
  char v8; // cl
  FxEnumerationInfo *m_EnumInfo; // rsi
  int Status; // r12d
  _DEVICE_RELATIONS *_a3; // r13
  FxWaitLockTransactionedList_vtbl *v12; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList *p_m_ChildListList; // rsi
  FxWaitLockTransactionedList_vtbl *v15; // rax
  __int64 v16; // r8
  _LIST_ENTRY *v17; // rbx
  _LIST_ENTRY *p_m_ListHead; // r14
  unsigned __int64 p_Blink; // r13
  int v20; // eax
  int v21; // edi
  _DEVICE_RELATIONS *v22; // rdi
  KIRQL v23; // al
  _DEVICE_OBJECT **Objects; // rcx
  KIRQL v25; // al
  KIRQL v26; // bl
  unsigned __int8 v27; // r8
  void *Flink; // rdx
  _FX_DRIVER_GLOBALS *v29; // rdi
  _KEVENT *p_m_Event; // rbx
  bool v31; // zf
  _LIST_ENTRY *p_m_TransactionHead; // rbx
  _LIST_ENTRY *v33; // rax
  FxIrp *v34; // rcx
  _FX_DRIVER_GLOBALS *v35; // rcx
  FxDeviceBase *v37; // rcx
  const void *_a1; // rcx
  unsigned int Count; // eax
  unsigned int v40; // edi
  _FX_DRIVER_GLOBALS *v41; // rbx
  _DEVICE_OBJECT *v42; // r15
  _DEVICE_OBJECT **v43; // rdx
  __int16 v44; // ax
  FxDeviceBase *v45; // rcx
  unsigned __int64 _a2; // r13
  unsigned __int16 m_ObjectSize; // ax
  const void *v48; // rcx
  unsigned __int64 DeviceExtension; // r8
  __int16 v50; // r9
  void (__fastcall *v51)(unsigned __int64); // rax
  unsigned __int64 v52; // r8
  _LIST_ENTRY *v53; // rax
  __int64 v54; // rcx
  void (__fastcall *v55)(unsigned __int64, __int64); // rax
  _DEVICE_RELATIONS *v56; // r10
  __int64 v57; // r9
  unsigned __int64 v58; // rcx
  void (__fastcall *v59)(unsigned __int64, _DEVICE_RELATIONS *, __int64, __int64); // rax
  __int64 Count_high; // r8
  unsigned __int64 v61; // rcx
  _LIST_ENTRY *v62; // rcx
  _LIST_ENTRY *v63; // rax
  _LIST_ENTRY *v64; // rcx
  int v65; // eax
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v67; // rdx
  void **p_Flink; // rax
  _LIST_ENTRY *v69; // rax
  _LIST_ENTRY *v70; // rdx
  _LIST_ENTRY *v71; // rcx
  _LIST_ENTRY *v72; // rdi
  FxDeviceBase *v73; // rdx
  unsigned __int16 v74; // ax
  const void *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  _DEVICE_RELATIONS *pRelations; // [rsp+58h] [rbp-1h] BYREF
  _LIST_ENTRY FreeListHead; // [rsp+60h] [rbp+7h] BYREF
  FxPkgPnp *v80; // [rsp+C0h] [rbp+67h] BYREF
  FxIrp *v81; // [rsp+C8h] [rbp+6Fh]
  char v82; // [rsp+D0h] [rbp+77h]
  void *ptr; // [rsp+D8h] [rbp+7Fh] BYREF

  v81 = Irp;
  v80 = this;
  v2 = this;
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v5 = 0LL;
  m_Method = v2->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
    ((void (__fastcall *)(unsigned __int64))m_Method)(v5);
  m_Irp = Irp->m_Irp;
  v8 = 0;
  m_EnumInfo = v2->m_EnumInfo;
  Status = 0;
  v82 = 0;
  _a3 = (_DEVICE_RELATIONS *)m_Irp->IoStatus.Information;
  pRelations = _a3;
  if ( m_EnumInfo )
  {
    v12 = m_EnumInfo->m_ChildListList.__vftable;
    m_Globals = v2->m_Globals;
    p_m_ChildListList = &m_EnumInfo->m_ChildListList;
    v12->AcquireLock(p_m_ChildListList, m_Globals, (unsigned __int8 *)&ptr);
    v15 = p_m_ChildListList->__vftable;
    v16 = (unsigned __int8)ptr;
    ++p_m_ChildListList->m_ListLockedRecursionCount;
    v15->ReleaseLock(p_m_ChildListList, m_Globals, v16);
    v8 = 0;
  }
  else
  {
    p_m_ChildListList = 0LL;
  }
  v17 = 0LL;
  if ( p_m_ChildListList )
  {
    p_m_ListHead = &p_m_ChildListList->m_ListHead;
    while ( 1 )
    {
      if ( !v17 )
        v17 = &p_m_ChildListList->m_ListHead;
      v17 = v17->Flink;
      if ( v17 == p_m_ListHead )
      {
LABEL_47:
        v17 = 0LL;
      }
      else
      {
        while ( LODWORD(v17[2].Flink) != 1 )
        {
          v17 = v17->Flink;
          if ( v17 == p_m_ListHead )
            goto LABEL_47;
        }
      }
      if ( !v17 )
        break;
      p_Blink = (unsigned __int64)&v17[-8].Blink;
      v20 = FxChildList::ProcessBusRelations((FxChildList *)&v17[-8].Blink, &pRelations);
      v8 = v82;
      v21 = v20;
      if ( v20 != -1073741637 )
      {
        if ( v20 < 0 )
        {
          v44 = *(_WORD *)(p_Blink + 10);
          v45 = v2->m_DeviceBase;
          _a2 = p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v44 )
            _a2 = 0LL;
          m_ObjectSize = v45->m_ObjectSize;
          v48 = (const void *)((unsigned __int64)v45 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v48 = 0LL;
          WPP_IFR_SF_qid(v2->m_Globals, 2u, 0xCu, 0x14u, WPP_FxPkgPnp_cpp_Traceguids, v48, _a2, v21);
          _a3 = pRelations;
          Status = v21;
          goto LABEL_29;
        }
        v8 = 1;
        v82 = 1;
      }
    }
    _a3 = pRelations;
  }
  v22 = 0LL;
  if ( p_m_ChildListList )
  {
    p_m_ListHead = &p_m_ChildListList->m_ListHead;
    while ( 1 )
    {
      if ( !v22 )
        v22 = (_DEVICE_RELATIONS *)&p_m_ChildListList->m_ListHead;
      v22 = *(_DEVICE_RELATIONS **)&v22->Count;
      if ( v22 == (_DEVICE_RELATIONS *)p_m_ListHead )
      {
LABEL_48:
        v22 = 0LL;
      }
      else
      {
        while ( v22[2].Count != 1 )
        {
          v22 = *(_DEVICE_RELATIONS **)&v22->Count;
          if ( v22 == (_DEVICE_RELATIONS *)p_m_ListHead )
            goto LABEL_48;
        }
      }
      if ( !v22 )
        break;
      FreeListHead.Blink = &FreeListHead;
      FreeListHead.Flink = &FreeListHead;
      pRelations = v22 + 9;
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v22[9].Count);
      LODWORD(v22[11].Objects[0]) = 2;
      KeReleaseSpinLock((PKSPIN_LOCK)&v22[9].Count, v23);
      Objects = v22[9].Objects;
      if ( (_DEVICE_OBJECT **)v22[9].Objects[0] != v22[9].Objects )
      {
        v42 = v22[9].Objects[0];
        do
        {
          v31 = BYTE3(v42->Queue.Wcb.DmaWaitEntry.Flink) == 1;
          v43 = *(_DEVICE_OBJECT ***)&v42->Type;
          ptr = *(void **)&v42->Type;
          if ( v31 )
          {
            DeviceExtension = (unsigned __int64)v42->DeviceExtension;
            v50 = *(_WORD *)(DeviceExtension + 10);
            v51 = *(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(DeviceExtension + 648) + 1656LL);
            if ( v51 )
            {
              v52 = DeviceExtension ^ 0xFFFFFFFFFFFFFFF8uLL;
              if ( !v50 )
                v52 = 0LL;
              v51(v52);
              v43 = (_DEVICE_OBJECT **)ptr;
              Objects = v22[9].Objects;
            }
            BYTE3(v42->Queue.Wcb.DmaWaitEntry.Flink) = 2;
          }
          v42 = (_DEVICE_OBJECT *)v43;
        }
        while ( v43 != Objects );
        v2 = v80;
        Status = 0;
      }
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v22[9].Count);
      LODWORD(v22[11].Objects[0]) = 1;
      v26 = v25;
      FxChildList::ProcessModificationsLocked((FxChildList *)v22[-8].Objects, &FreeListHead);
      KeReleaseSpinLock((PKSPIN_LOCK)&pRelations->Count, v26);
      while ( 1 )
      {
        Flink = FreeListHead.Flink;
        ptr = FreeListHead.Flink;
        if ( FreeListHead.Flink == &FreeListHead )
          break;
        v53 = FreeListHead.Flink->Flink;
        if ( FreeListHead.Flink->Blink != &FreeListHead || v53->Blink != FreeListHead.Flink )
          __fastfail(3u);
        FreeListHead.Flink = FreeListHead.Flink->Flink;
        v53->Blink = &FreeListHead;
        *((_QWORD *)Flink + 1) = Flink;
        *(_QWORD *)Flink = Flink;
        if ( BYTE5(v22[11].Objects[0]) && (*((_DWORD *)Flink + 4) == 1 || *((_DWORD *)Flink + 14) == 5) )
        {
          v54 = *(_QWORD *)(*((_QWORD *)Flink + 3) + 8LL);
          if ( *((_DWORD *)Flink + 14) == 5 )
            *((_DWORD *)Flink + 14) = 0;
          *((_DWORD *)Flink + 4) = 3;
          FxPkgPnp::PnpProcessEvent(*(FxPkgPnp **)(v54 + 648), PnpEventRemove, v27);
        }
        else
        {
          v55 = *(void (__fastcall **)(unsigned __int64, __int64))&v22[8].Count;
          v56 = (_DEVICE_RELATIONS *)*((_QWORD *)Flink + 3);
          v57 = *((_QWORD *)Flink + 4);
          pRelations = v56;
          if ( v55 && v57 )
          {
            v58 = (unsigned __int64)v22[-8].Objects ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !HIWORD(v22[-7].Count) )
              v58 = 0LL;
            v55(v58, v57);
            Flink = ptr;
            v56 = pRelations;
          }
          v59 = *(void (__fastcall **)(unsigned __int64, _DEVICE_RELATIONS *, __int64, __int64))&v22[6].Count;
          if ( v59 && v56 )
          {
            Count_high = HIWORD(v22[-7].Count);
            v61 = (unsigned __int64)v22[-8].Objects ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !(_WORD)Count_high )
              v61 = 0LL;
            v59(v61, v56, Count_high, v57);
            Flink = ptr;
          }
          (*(void (__fastcall **)(_QWORD, void *, __int64, const char *))(**((_QWORD **)Flink + 9) + 16LL))(
            *((_QWORD *)Flink + 9),
            Flink,
            77LL,
            "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
          FxPoolFree(ptr);
        }
      }
    }
LABEL_29:
    v29 = v2->m_Globals;
    FreeListHead.Blink = &FreeListHead;
    pRelations = 0LL;
    FreeListHead.Flink = &FreeListHead;
    p_m_Event = 0LL;
    p_m_ChildListList->AcquireLock(p_m_ChildListList, v29, (unsigned __int8 *)&v80);
    v31 = p_m_ChildListList->m_ListLockedRecursionCount-- == 1;
    if ( v31 )
    {
      p_m_TransactionHead = &p_m_ChildListList->m_TransactionHead;
      while ( 1 )
      {
        if ( p_m_TransactionHead->Flink == p_m_TransactionHead )
        {
          p_m_Event = (_KEVENT *)pRelations;
          break;
        }
        v62 = p_m_TransactionHead->Flink;
        v63 = p_m_TransactionHead->Flink->Flink;
        if ( p_m_TransactionHead->Flink->Blink != p_m_TransactionHead || v63->Blink != v62 )
          __fastfail(3u);
        p_m_TransactionHead->Flink = v63;
        v63->Blink = p_m_TransactionHead;
        v62->Blink = v62;
        v62->Flink = v62;
        v64 = v62 - 1;
        ptr = v64;
        v65 = (int)v64[2].Flink;
        if ( v65 == 2 )
        {
          Blink = p_m_ListHead->Blink;
          if ( Blink->Flink != p_m_ListHead )
            __fastfail(3u);
          v64->Blink = Blink;
          v64->Flink = p_m_ListHead;
          Blink->Flink = v64;
          p_m_ListHead->Blink = v64;
          p_m_ChildListList->EntryAdded(p_m_ChildListList, (FxTransactionedEntry *)v64);
        }
        else
        {
          if ( v65 != 3 )
            goto LABEL_107;
          v67 = v64->Flink;
          p_Flink = (void **)&v64->Blink->Flink;
          if ( v64->Flink->Blink != v64 || *p_Flink != v64 )
            __fastfail(3u);
          *p_Flink = v67;
          v67->Blink = (_LIST_ENTRY *)p_Flink;
          v69 = v64 + 1;
          v70 = FreeListHead.Blink;
          if ( FreeListHead.Blink->Flink != &FreeListHead )
            __fastfail(3u);
          v64[1].Blink = FreeListHead.Blink;
          v69->Flink = &FreeListHead;
          v70->Flink = v69;
          FreeListHead.Blink = v64 + 1;
          p_m_ChildListList->EntryRemoved(p_m_ChildListList, (FxTransactionedEntry *)v64);
        }
        v64 = (_LIST_ENTRY *)ptr;
LABEL_107:
        LODWORD(v64[2].Flink) = 1;
      }
    }
    if ( !p_m_ChildListList->m_ListLockedRecursionCount && p_m_ChildListList->m_Deleting )
    {
      p_m_Event = &p_m_ChildListList->m_DeletingDoneEvent->m_Event;
      p_m_ChildListList->m_DeletingDoneEvent = 0LL;
    }
    p_m_ChildListList->ReleaseLock(p_m_ChildListList, v29, (unsigned __int8)v80);
    while ( 1 )
    {
      v33 = FreeListHead.Flink;
      if ( FreeListHead.Flink == &FreeListHead )
        break;
      v71 = FreeListHead.Flink->Flink;
      if ( FreeListHead.Flink->Blink != &FreeListHead || v71->Blink != FreeListHead.Flink )
        __fastfail(3u);
      FreeListHead.Flink = FreeListHead.Flink->Flink;
      v72 = v33 - 1;
      v71->Blink = &FreeListHead;
      v33->Blink = v33;
      v33->Flink = v33;
      ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v33[1].Blink->Flink[1].Flink)(
        v33[1].Blink,
        &v33[-1],
        226LL,
        "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
      if ( p_m_ChildListList->m_DeleteOnRemove )
        ((void (__fastcall *)(_LIST_ENTRY *))v72[2].Blink->Flink[3].Flink)(v72[2].Blink);
    }
    if ( p_m_Event )
      KeSetEvent(p_m_Event, 0, 0);
    if ( Status < 0 )
    {
      v34 = v81;
      goto LABEL_44;
    }
    v8 = v82;
  }
  v31 = v8 == 0;
  v34 = v81;
  if ( v31 )
    Status = v81->m_Irp->IoStatus.Status;
LABEL_44:
  v34->m_Irp->IoStatus.Information = (unsigned __int64)_a3;
  v34->m_Irp->IoStatus.Status = Status;
  v35 = v2->m_Globals;
  if ( v35->FxVerboseOn )
  {
    v73 = v2->m_DeviceBase;
    v74 = v73->m_ObjectSize;
    v75 = (const void *)((unsigned __int64)v73 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v74 )
      v75 = 0LL;
    WPP_IFR_SF_qd(v35, 5u, 0xCu, 0x15u, WPP_FxPkgPnp_cpp_Traceguids, v75, Status);
  }
  if ( Status >= 0 && _a3 )
  {
    v37 = v2->m_DeviceBase;
    _a1 = v37->m_ObjectSize ? (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_qdq(v2->m_Globals, 4u, 0xCu, 0x16u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a3->Count, _a3);
    Count = _a3->Count;
    if ( _a3->Count )
    {
      v40 = 2;
      do
      {
        v41 = v2->m_Globals;
        if ( !v41->FxVerboseOn )
          break;
        v76 = v40 + 1;
        if ( (unsigned int)v76 >= Count )
        {
          if ( v40 >= Count )
          {
            v77 = v40 - 1;
            if ( (unsigned int)v77 >= Count )
              WPP_IFR_SF_q(v41, 5u, 0xCu, 0x1Au, WPP_FxPkgPnp_cpp_Traceguids, _a3[v40 / 2 - 1].Objects[0]);
            else
              WPP_IFR_SF_qq(
                v41,
                5u,
                0xCu,
                0x19u,
                WPP_FxPkgPnp_cpp_Traceguids,
                _a3[v40 / 2 - 1].Objects[0],
                _a3->Objects[v77]);
          }
          else
          {
            WPP_IFR_SF_qqq(
              v2->m_Globals,
              5u,
              0xCu,
              0x18u,
              WPP_FxPkgPnp_cpp_Traceguids,
              _a3[v40 / 2 - 1].Objects[0],
              *(const void **)&_a3[v40 / 2].Count,
              _a3[v40 / 2].Objects[0]);
          }
        }
        else
        {
          WPP_IFR_SF_qqqq(
            v41,
            5u,
            0xCu,
            0x17u,
            WPP_FxPkgPnp_cpp_Traceguids,
            _a3[v40 / 2 - 1].Objects[0],
            *(const void **)&_a3[v40 / 2].Count,
            _a3[v40 / 2].Objects[0],
            _a3->Objects[v76]);
        }
        Count = _a3->Count;
        v40 += 4;
      }
      while ( v40 - 2 < _a3->Count );
    }
  }
  return (unsigned int)Status;
}
