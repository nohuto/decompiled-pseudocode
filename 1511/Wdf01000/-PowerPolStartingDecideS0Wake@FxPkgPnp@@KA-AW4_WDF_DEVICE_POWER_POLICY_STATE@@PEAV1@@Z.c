/*
 * XREFs of ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00260C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0013E20 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0015568 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00273F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingDecideS0Wake(FxPkgPnp *This)
{
  FxEnumerationInfo *m_EnumInfo; // rbx
  FxEnumerationInfo *v3; // rcx
  FxEnumerationInfo *v4; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v6; // rax
  _LIST_ENTRY *v7; // rbx
  FxEnumerationInfo *v8; // rax
  _LIST_ENTRY *p_m_ListHead; // rax
  _LIST_ENTRY *Blink; // rdi
  unsigned __int64 *p_Blink; // rbp
  _LIST_ENTRY *v12; // r14
  KIRQL v13; // r15
  _LIST_ENTRY *i; // rdi
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyOwnerSettings *v16; // rcx
  __int64 result; // rax
  _LIST_ENTRY *Flink; // rcx
  __int64 m_NextIdleTimeoutHint; // rax
  unsigned __int8 v20; // [rsp+60h] [rbp+8h] BYREF

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
      v4->m_ChildListList.AcquireLock(&v4->m_ChildListList, m_Globals, &v20);
      v6 = v4->m_ChildListList.__vftable;
      ++v4->m_ChildListList.m_ListLockedRecursionCount;
      v6->ReleaseLock(&v4->m_ChildListList, m_Globals, v20);
      v7 = 0LL;
      while ( 1 )
      {
        v8 = This->m_EnumInfo;
        v7 = v7 ? v7->Flink : v8->m_ChildListList.m_ListHead.Flink;
        p_m_ListHead = &v8->m_ChildListList.m_ListHead;
        if ( v7 == p_m_ListHead )
        {
LABEL_15:
          v7 = 0LL;
        }
        else
        {
          while ( LODWORD(v7[2].Flink) != 1 )
          {
            v7 = v7->Flink;
            if ( v7 == p_m_ListHead )
              goto LABEL_15;
          }
        }
        if ( !v7 )
          break;
        Blink = v7[2].Blink;
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
      FxTransactionedList::UnlockFromEnum(&This->m_EnumInfo->m_ChildListList, This->m_Globals);
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
  v16 = This->m_PowerPolicyMachine.m_Owner;
  if ( !v16->m_IdleSettings.Enabled )
    return 1381LL;
  result = 1285LL;
  if ( v16->m_IdleSettings.WakeFromS0Capable )
    return 1329LL;
  return result;
}
