/*
 * XREFs of ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C006FFF4
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00083C0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C0008F80 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0009360 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C006FEE8 (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqsd @ 0x1C00703C8 (WPP_IFR_SF_qqsd.c)
 */

void __fastcall FxTagTracker::CheckForAbandondedTags(FxTagTracker *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  char v3; // di
  KIRQL v4; // al
  unsigned int v5; // r8d
  FxTagTrackingBlock *m_Next; // rdx
  KIRQL v7; // r15
  FxTagTrackingBlock *Next; // rsi
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  if ( (this->m_OwningObject->m_ObjectFlags & 8) != 0 )
  {
    v3 = 1;
    if ( this->m_Next || this->m_FailedCount )
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_fxtagtracker_cpp_Traceguids, this);
  }
  else
  {
    v3 = 0;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_Next = this->m_Next;
  v7 = v4;
  if ( m_Next )
  {
    do
    {
      Next = m_Next->Next;
      if ( v3 )
      {
        WPP_IFR_SF_qqsd(
          m_Globals,
          2u,
          v5,
          0xCu,
          traceGuid,
          this->m_OwningObject,
          m_Next->Tag,
          m_Next->File,
          m_Next->Line);
      }
      else
      {
        v3 = 1;
        WPP_IFR_SF_qqsd(
          m_Globals,
          3u,
          v5,
          0xDu,
          traceGuid,
          this->m_OwningObject,
          m_Next->Tag,
          m_Next->File,
          m_Next->Line);
      }
      m_Next = Next;
    }
    while ( Next );
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v7);
}
