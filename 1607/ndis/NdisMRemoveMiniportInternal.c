/*
 * XREFs of NdisMRemoveMiniportInternal @ 0x1C005F518
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00119B4 (ndisIfDeregisterInterfaceEx.c)
 *     NdisMRemoveMiniport @ 0x1C005F500 (NdisMRemoveMiniport.c)
 *     ndisMiniportFatalError @ 0x1C00D3F88 (ndisMiniportFatalError.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall NdisMRemoveMiniportInternal(__int64 a1, unsigned __int16 a2)
{
  KIRQL v4; // al
  int v5; // ecx

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x5Bu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_QWORD *)(a1 + 520) = 0LL;
  v5 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a1 + 1856) = 464700;
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
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x5Cu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, a1);
}
