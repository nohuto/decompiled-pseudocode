/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C007702C
 * Callers:
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0004580 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0020800 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C005C624 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0077068 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0077124 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this, __int64 a2)
{
  struct _EX_TIMER *m_KernelExTimer; // rcx

  if ( this->Timer.m_Timer.m_IsExtTimer )
  {
    m_KernelExTimer = this->Timer.m_Timer.m_KernelExTimer;
    if ( m_KernelExTimer )
    {
      LOBYTE(a2) = 1;
      ExDeleteTimer(m_KernelExTimer, a2, 0LL, 0LL);
      this->Timer.m_Timer.m_KernelExTimer = 0LL;
    }
  }
  FxPoolFree(this);
  return this;
}
