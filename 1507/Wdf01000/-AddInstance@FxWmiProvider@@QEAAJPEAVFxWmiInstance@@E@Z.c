/*
 * XREFs of ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C0024DB4
 * Callers:
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0019028 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0019068 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     imp_WdfWmiInstanceRegister @ 0x1C0068910 (imp_WdfWmiInstanceRegister.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C0024D2C (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0069F44 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C006A118 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

__int64 __fastcall FxWmiProvider::AddInstance(
        FxWmiProvider *this,
        unsigned __int64 Instance,
        unsigned __int8 NoErrorIfPresent)
{
  unsigned int v6; // eax
  unsigned __int8 updated; // bp
  unsigned int v8; // r14d
  unsigned __int8 v9; // si
  FxWmiIrpHandler *m_Parent; // r8
  unsigned __int64 _a2; // rax
  const void *_a1; // rsi
  FxVerifierLock *v14; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 update; // [rsp+78h] [rbp+20h] BYREF

  if ( (this->m_Flags & 4) != 0 )
  {
    if ( this->m_ObjectSize )
      _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    if ( *(_WORD *)(Instance + 10) )
      _a1 = (const void *)(Instance ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxWmiProvider_cpp_Traceguids, _a1, _a2, -1073741808);
    return 3221225488LL;
  }
  else
  {
    FxNonPagedObject::Lock(this->m_Parent, &irql, NoErrorIfPresent);
    v6 = FxWmiProvider::AddInstanceLocked(this, Instance, NoErrorIfPresent, &update, AddInstanceToTail);
    updated = update;
    v8 = v6;
    v9 = irql;
    if ( update )
      updated = FxWmiIrpHandler::DeferUpdateLocked(this->m_Parent, irql);
    m_Parent = this->m_Parent;
    if ( SLOBYTE(m_Parent->m_ObjectFlags) < 0
      && (v14 = *(FxVerifierLock **)&m_Parent[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v14, v9, (unsigned __int8)m_Parent);
    }
    else
    {
      KeReleaseSpinLock(&m_Parent->m_NPLock.m_Lock, v9);
    }
    if ( updated )
      FxWmiIrpHandler::UpdateGuids(this->m_Parent);
    return v8;
  }
}
