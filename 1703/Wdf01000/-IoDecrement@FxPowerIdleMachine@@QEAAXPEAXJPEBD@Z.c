/*
 * XREFs of ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0022EB0
 * Callers:
 *     ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x1C002B5B0 (-PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0037880 (imp_WdfDeviceResumeIdleActual.c)
 *     ResumeIdleWorker @ 0x1C0076A74 (ResumeIdleWorker.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009B474 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1C009BE20 (-PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxPowerIdleMachine::IoDecrement(FxPowerIdleMachine *this, void *Tag, int Line, const char *File)
{
  _SINGLE_LIST_ENTRY *Next; // rdi
  unsigned __int64 *p_m_Lock; // rbp
  const char *v7; // r15
  _FX_DRIVER_GLOBALS *v10; // rsi
  KIRQL v11; // r14
  __int64 m_EventHistoryIndex; // rax
  unsigned int v13; // edi
  _SINGLE_LIST_ENTRY *v14; // rsi
  __int64 v15; // rax
  unsigned int TargetStatesCount; // r8d
  const FxPowerIdleTargetState *TargetStates; // rdx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v19; // rcx
  _SINGLE_LIST_ENTRY *_a2; // rdx
  const void *_a1; // rcx
  char v22; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *m_TagTracker; // rcx
  _SINGLE_LIST_ENTRY *v25; // r8
  _SINGLE_LIST_ENTRY *v26; // rdx
  __int16 v27; // cx
  const void *v28; // r8
  unsigned int v29; // edx
  unsigned int v30; // [rsp+90h] [rbp+8h]

  Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  p_m_Lock = &this->m_Lock.m_Lock;
  v7 = File;
  v10 = (_FX_DRIVER_GLOBALS *)Next[2].Next;
  v11 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  if ( !this->m_IoCount )
  {
    v25 = Next[12].Next;
    v26 = v25[18].Next;
    v27 = WORD1(v25[1].Next);
    v28 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v27 )
      v28 = 0LL;
    WPP_IFR_SF_qq(v10, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v28, v26);
    if ( v10->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v10, v29, 0xBu) || v10->FxVerifyDownlevel) )
    {
      FxVerifierDbgBreakPoint(v10);
    }
  }
  m_EventHistoryIndex = this->m_EventHistoryIndex;
  v13 = --this->m_IoCount;
  v14 = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  this->m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoDecrement;
  v30 = v13;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v15 = 0LL;
  TargetStatesCount = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount;
  if ( TargetStatesCount )
  {
    TargetStates = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStates;
    while ( TargetStates[v15].PowerIdleEvent != PowerIdleEventIoDecrement )
    {
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= TargetStatesCount )
        goto LABEL_14;
    }
    _a3 = TargetStates[v15].PowerIdleState;
    if ( _a3 != FxIdleMax )
    {
      do
      {
        v19 = v14[12].Next;
        _a2 = v19[18].Next;
        if ( WORD1(v19[1].Next) )
          _a1 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(
          (_FX_DRIVER_GLOBALS *)v14[2].Next,
          4u,
          0x15u,
          0x11u,
          WPP_PowerIdleStateMachine_cpp_Traceguids,
          _a1,
          _a2,
          _a3,
          this->m_CurrentIdleState);
        this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
        v22 = this->m_StateHistoryIndex + 1;
        this->m_CurrentIdleState = _a3;
        this->m_StateHistoryIndex = v22 & 7;
        StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
        if ( !StateFunc )
          break;
        _a3 = StateFunc(this);
      }
      while ( _a3 != FxIdleMax );
      v7 = File;
      p_m_Lock = &this->m_Lock.m_Lock;
    }
    v13 = v30;
  }
LABEL_14:
  KeReleaseSpinLock(p_m_Lock, v11);
  m_TagTracker = this->m_TagTracker;
  if ( m_TagTracker )
    FxTagTracker::UpdateTagHistory(m_TagTracker, Tag, Line, v7, TagRelease, v13);
}
