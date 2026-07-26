/*
 * XREFs of ndisReleaseMiniportPnPEventLock @ 0x1C001911C
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A177C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B05B4 (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseMiniportPnPEventLock(__int64 a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v4; // si
  struct _KEVENT *v5; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  *(_DWORD *)(a1 + 4480) &= ~8u;
  v5 = *(struct _KEVENT **)(a1 + 760);
  *(_QWORD *)(a1 + 520) = CurrentThread;
  *(_DWORD *)(a1 + 1856) = 1641209;
  if ( v5 )
  {
    KeSetEvent(v5, 0, 0);
    *(_QWORD *)(a1 + 760) = 0LL;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
