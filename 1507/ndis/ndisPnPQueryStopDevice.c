/*
 * XREFs of ndisPnPQueryStopDevice @ 0x1C00F4758
 * Callers:
 *     ndisPnPIrpQueryStop @ 0x1C00D4CF4 (ndisPnPIrpQueryStop.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00D3A88 (ndisPnPQueryRemoveDevice.c)
 */

__int64 __fastcall ndisPnPQueryStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  KIRQL v3; // dl
  unsigned __int64 *p_Lock; // rcx

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x4Bu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)a1);
  if ( (a1->PnPCapabilities & 1) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    p_Lock = &a1->Lock;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 463958;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    if ( a1->UserModeOpenReferences )
    {
      v2 = -1073741823;
      KeReleaseSpinLock(p_Lock, v3);
    }
    else
    {
      KeReleaseSpinLock(p_Lock, v3);
      v2 = ndisPnPQueryRemoveDevice(a1);
    }
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x4Cu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)a1);
  return v2;
}
