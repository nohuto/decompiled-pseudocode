/*
 * XREFs of ?ClearTargetPointers@FxIoTargetRemote@@MEAAXXZ @ 0x1C0085AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqLdqqq @ 0x1C00860DC (WPP_IFR_SF_qqLdqqq.c)
 */

void __fastcall FxIoTargetRemote::ClearTargetPointers(
        FxIoTargetRemote *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  const void *_a5; // rdx
  FxIoTargetClearedPointers *m_ClearedPointers; // rcx
  const _GUID *v7; // [rsp+20h] [rbp-48h]

  if ( this->m_ObjectSize )
    _a5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a5 = 0LL;
  WPP_IFR_SF_qqLdqqq(
    this->m_Globals,
    (unsigned __int8)_a5,
    a3,
    a4,
    v7,
    _a5,
    this->m_ClearedPointers,
    this->m_State,
    this->m_OpenState,
    this->m_TargetPdo,
    this->m_TargetFileObject,
    this->m_TargetHandle);
  m_ClearedPointers = this->m_ClearedPointers;
  if ( m_ClearedPointers )
  {
    m_ClearedPointers->TargetPdo = this->m_TargetPdo;
    this->m_ClearedPointers->TargetFileObject = this->m_TargetFileObject;
    this->m_ClearedPointers->TargetHandle = this->m_TargetHandle;
    this->m_ClearedPointers = 0LL;
  }
  this->m_TargetHandle = 0LL;
  this->m_TargetDevice = 0LL;
  this->m_TargetPdo = 0LL;
  this->m_TargetFileObject = 0LL;
  *(_WORD *)&this->m_TargetStackSize = 0;
}
