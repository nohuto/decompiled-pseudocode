/*
 * XREFs of NdisMRemoveMiniportInternal @ 0x1C005B968
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C003E7CC (ndisIfDeregisterInterfaceEx.c)
 *     NdisMRemoveMiniport @ 0x1C005B950 (NdisMRemoveMiniport.c)
 *     ndisMiniportFatalError @ 0x1C00D4838 (ndisMiniportFatalError.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisMRemoveMiniportInternal(__int64 a1, unsigned __int16 a2)
{
  KIRQL v4; // al
  int v5; // ecx

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x5Bu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_QWORD *)(a1 + 520) = 0LL;
  v5 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a1 + 1856) = 464561;
  *(_DWORD *)(a1 + 1856) = 0;
  if ( (v5 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  }
  else
  {
    *(_DWORD *)(a1 + 124) = v5 | 0x100;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    ndisLogMiniportEvent(a1, a2);
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 3888));
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x5Cu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, a1);
}
