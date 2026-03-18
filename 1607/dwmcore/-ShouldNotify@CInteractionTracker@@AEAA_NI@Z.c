/*
 * XREFs of ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18014C104
 * Callers:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18014AE58 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@QEAAXXZ @ 0x18014B1A8 (-SendPendingCallbacks@CInteractionTracker@@QEAAXXZ.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800241F0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

unsigned __int8 __fastcall CInteractionTracker::ShouldNotify(CInteractionTracker *this)
{
  char ShouldNotify; // al
  __int64 v2; // rcx
  unsigned int v3; // r9d
  char v4; // r8
  int v5; // eax

  ShouldNotify = CNotificationResource::ShouldNotify(this);
  v4 = 0;
  if ( ShouldNotify )
  {
    v5 = *(_DWORD *)(v2 + 208);
    return _bittest(&v5, v3);
  }
  return v4;
}
