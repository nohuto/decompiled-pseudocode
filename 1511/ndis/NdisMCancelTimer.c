/*
 * XREFs of NdisMCancelTimer @ 0x1C0013300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 */

void __stdcall NdisMCancelTimer(PNDIS_MINIPORT_TIMER Timer, PBOOLEAN TimerCancelled)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // r8
  BOOLEAN v5; // al
  _NDIS_MINIPORT_BLOCK *v6; // r8
  KIRQL v7; // r8
  $58C1888505FA0DFDC8A7AB3EBDDAF2A7 *i; // rcx

  Miniport = Timer->Miniport;
  if ( (Miniport->DriverVerifyFlags & 8) != 0 )
  {
    *TimerCancelled = 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0083713 >= 4u )
      WPP_SF_qq(11LL, &WPP_34eaeff8600c26a691447e424419d251_Traceguids, Miniport, Timer);
    v5 = KeCancelTimer(&Timer->Timer);
    *TimerCancelled = v5;
    v6 = Timer->Miniport;
    if ( (v6->DriverHandle->Flags & 2) != 0 && v5 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&v6->TimerQueueLock);
      for ( i = &Timer->Miniport->560; i->TimerQueue; i = ($58C1888505FA0DFDC8A7AB3EBDDAF2A7 *)&i->TimerQueue->NextTimer )
      {
        if ( i->TimerQueue == Timer )
        {
          i->TimerQueue = Timer->NextTimer;
          break;
        }
      }
      KeReleaseSpinLock(&Timer->Miniport->TimerQueueLock, v7);
    }
  }
}
