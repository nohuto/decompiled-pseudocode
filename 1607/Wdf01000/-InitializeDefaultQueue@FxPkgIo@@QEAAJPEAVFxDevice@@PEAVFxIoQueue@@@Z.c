/*
 * XREFs of ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C001C790
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C001C5E0 (imp_WdfIoQueueCreate.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgIo::InitializeDefaultQueue(FxPkgIo *this, unsigned __int64 Device, FxIoQueue *Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIoQueue **m_DispatchTable; // rax
  __int64 v7; // rcx
  KIRQL v8; // al
  unsigned __int64 _a2; // rdx

  m_Globals = this->m_Globals;
  if ( this->m_DefaultQueue )
  {
    if ( *(_WORD *)(Device + 10) )
      _a2 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x11u, WPP_FxPkgIo_cpp_Traceguids, this, _a2, -1073741823);
    return 3221225473LL;
  }
  else
  {
    m_DispatchTable = this->m_DispatchTable;
    v7 = 28LL;
    do
    {
      if ( !*m_DispatchTable )
        *m_DispatchTable = Queue;
      ++m_DispatchTable;
      --v7;
    }
    while ( v7 );
    this->m_DefaultQueue = Queue;
    v8 = KeAcquireSpinLockRaiseToDpc(&Queue->m_SpinLock.m_Lock);
    Queue->m_ObjectFlags |= 2u;
    KeReleaseSpinLock(&Queue->m_SpinLock.m_Lock, v8);
    return 0LL;
  }
}
