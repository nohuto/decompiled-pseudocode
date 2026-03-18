/*
 * XREFs of ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002C680
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00236B0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0025868 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingDecideS0Wake(FxPkgPnp *This)
{
  FxEnumerationInfo *m_EnumInfo; // rbx
  FxEnumerationInfo *v3; // rcx
  FxEnumerationInfo *v4; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v6; // rax
  _LIST_ENTRY *p_m_ListHead; // rbx
  FxEnumerationInfo *v8; // rax
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *Blink; // rdi
  unsigned __int64 *p_Blink; // rbp
  _LIST_ENTRY *v12; // r14
  KIRQL v13; // r15
  _LIST_ENTRY *i; // rdi
  FxEnumerationInfo *v15; // rbx
  _FX_DRIVER_GLOBALS *v16; // rbp
  FxWaitLockTransactionedList *p_m_ChildListList; // rbx
  _KEVENT *p_m_Event; // r14
  _LIST_ENTRY *p_m_TransactionHead; // rdi
  __int64 *v21; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyOwnerSettings *v23; // rcx
  __int64 result; // rax
  _LIST_ENTRY *Flink; // rcx
  __int64 m_NextIdleTimeoutHint; // rax
  _LIST_ENTRY *v27; // r15
  _LIST_ENTRY *v28; // rax
  _LIST_ENTRY **p_Flink; // r15
  int v30; // eax
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *v32; // rcx
  _LIST_ENTRY *v33; // rax
  __int64 ***v34; // rax
  _LIST_ENTRY *v35; // rcx
  __int64 *v36; // rcx
  __int64 *v37; // rdi
  __int64 *v38; // [rsp+30h] [rbp-38h] BYREF
  _LIST_ENTRY *v39; // [rsp+38h] [rbp-30h]
  unsigned __int8 v40; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v41; // [rsp+78h] [rbp+10h] BYREF

  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo && This->m_PowerPolicyMachine.m_Owner )
  {
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(m_EnumInfo, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_EnumInfo->m_PowerStateLock.m_OwningThread = KeGetCurrentThread();
    This->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 1;
    v3 = This->m_EnumInfo;
    v3->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v3->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    v4 = This->m_EnumInfo;
    if ( v4 )
    {
      m_Globals = This->m_Globals;
      v4->m_ChildListList.AcquireLock(&v4->m_ChildListList, m_Globals, &v40);
      v6 = v4->m_ChildListList.__vftable;
      ++v4->m_ChildListList.m_ListLockedRecursionCount;
      v6->ReleaseLock(&v4->m_ChildListList, m_Globals, v40);
      p_m_ListHead = 0LL;
      while ( 1 )
      {
        v8 = This->m_EnumInfo;
        if ( !p_m_ListHead )
          p_m_ListHead = &v8->m_ChildListList.m_ListHead;
        p_m_ListHead = p_m_ListHead->Flink;
        v9 = &v8->m_ChildListList.m_ListHead;
        if ( p_m_ListHead == v9 )
        {
LABEL_14:
          p_m_ListHead = 0LL;
        }
        else
        {
          while ( LODWORD(p_m_ListHead[2].Flink) != 1 )
          {
            p_m_ListHead = p_m_ListHead->Flink;
            if ( p_m_ListHead == v9 )
              goto LABEL_14;
          }
        }
        if ( !p_m_ListHead )
          break;
        Blink = p_m_ListHead[2].Blink;
        p_Blink = (unsigned __int64 *)&Blink[16].Blink;
        v12 = Blink + 17;
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[16].Blink);
        for ( i = Blink[17].Flink; i != v12; i = i->Flink )
        {
          if ( !BYTE2(i[5].Flink) )
          {
            Flink = i[4].Flink;
            if ( Flink )
              FxPkgPnp::PowerProcessEvent((FxPkgPnp *)Flink[40].Blink, 0x100u, 0);
          }
        }
        KeReleaseSpinLock(p_Blink, v13);
      }
      v15 = This->m_EnumInfo;
      v16 = This->m_Globals;
      v39 = (_LIST_ENTRY *)&v38;
      p_m_ChildListList = &v15->m_ChildListList;
      v38 = (__int64 *)&v38;
      p_m_Event = 0LL;
      p_m_ChildListList->AcquireLock(p_m_ChildListList, v16, &v41);
      if ( p_m_ChildListList->m_ListLockedRecursionCount-- == 1 )
      {
        p_m_TransactionHead = &p_m_ChildListList->m_TransactionHead;
        while ( p_m_TransactionHead->Flink != p_m_TransactionHead )
        {
          v27 = p_m_TransactionHead->Flink;
          v28 = p_m_TransactionHead->Flink->Flink;
          if ( p_m_TransactionHead->Flink->Blink != p_m_TransactionHead || v28->Blink != v27 )
            __fastfail(3u);
          p_m_TransactionHead->Flink = v28;
          v28->Blink = p_m_TransactionHead;
          v27->Blink = v27;
          v27->Flink = v27;
          p_Flink = &v27[-1].Flink;
          v30 = *((_DWORD *)p_Flink + 8);
          if ( v30 == 2 )
          {
            v31 = p_m_ChildListList->m_ListHead.Blink;
            if ( v31->Flink != &p_m_ChildListList->m_ListHead )
              __fastfail(3u);
            *p_Flink = &p_m_ChildListList->m_ListHead;
            p_Flink[1] = v31;
            v31->Flink = (_LIST_ENTRY *)p_Flink;
            p_m_ChildListList->m_ListHead.Blink = (_LIST_ENTRY *)p_Flink;
            p_m_ChildListList->EntryAdded(p_m_ChildListList, (FxTransactionedEntry *)p_Flink);
          }
          else if ( v30 == 3 )
          {
            v32 = *p_Flink;
            v33 = p_Flink[1];
            if ( (_LIST_ENTRY **)(*p_Flink)->Blink != p_Flink || (_LIST_ENTRY **)v33->Flink != p_Flink )
              __fastfail(3u);
            v33->Flink = v32;
            v32->Blink = v33;
            v34 = (__int64 ***)(p_Flink + 2);
            v35 = v39;
            if ( (__int64 **)v39->Flink != &v38 )
              __fastfail(3u);
            p_Flink[3] = v39;
            *v34 = &v38;
            v35->Flink = (_LIST_ENTRY *)v34;
            v39 = (_LIST_ENTRY *)(p_Flink + 2);
            p_m_ChildListList->EntryRemoved(p_m_ChildListList, (FxTransactionedEntry *)p_Flink);
          }
          *((_DWORD *)p_Flink + 8) = 1;
        }
      }
      if ( !p_m_ChildListList->m_ListLockedRecursionCount && p_m_ChildListList->m_Deleting )
      {
        p_m_Event = &p_m_ChildListList->m_DeletingDoneEvent->m_Event;
        p_m_ChildListList->m_DeletingDoneEvent = 0LL;
      }
      p_m_ChildListList->ReleaseLock(p_m_ChildListList, v16, v41);
      while ( 1 )
      {
        v21 = v38;
        if ( v38 == (__int64 *)&v38 )
          break;
        v36 = (__int64 *)*v38;
        if ( (__int64 **)v38[1] != &v38 || (__int64 *)v36[1] != v38 )
          __fastfail(3u);
        v38 = (__int64 *)*v38;
        v37 = v21 - 2;
        v36[1] = (__int64)&v38;
        v21[1] = (__int64)v21;
        *v21 = (__int64)v21;
        (*(void (__fastcall **)(__int64, __int64 *, __int64, const char *))(*(_QWORD *)v21[3] + 16LL))(
          v21[3],
          v21 - 2,
          226LL,
          "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
        if ( p_m_ChildListList->m_DeleteOnRemove )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37[5] + 48LL))(v37[5]);
      }
      if ( p_m_Event )
        KeSetEvent(p_m_Event, 0, 0);
    }
  }
  FxPkgPnp::SaveState(This, 1u);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( (m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    m_NextIdleTimeoutHint = m_Owner->m_PoxInterface.m_NextIdleTimeoutHint;
    if ( (_DWORD)m_NextIdleTimeoutHint != m_Owner->m_PoxInterface.m_CurrentIdleTimeoutHint )
    {
      m_Owner->m_PoxInterface.m_CurrentIdleTimeoutHint = m_NextIdleTimeoutHint;
      PoFxSetDeviceIdleTimeout(m_Owner->m_PoxInterface.m_PoHandle, 10000 * m_NextIdleTimeoutHint);
    }
  }
  v23 = This->m_PowerPolicyMachine.m_Owner;
  if ( !v23->m_IdleSettings.Enabled )
    return 1381LL;
  result = 1285LL;
  if ( v23->m_IdleSettings.WakeFromS0Capable )
    return 1329LL;
  return result;
}
