/*
 * XREFs of ndis5InterruptDpc @ 0x1C0060140
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     ?ndisCheckWatchdogTimer@@YAEXZ @ 0x1C005FE54 (-ndisCheckWatchdogTimer@@YAEXZ.c)
 *     ndisMDpc @ 0x1C0060374 (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C00605B8 (ndisMDpcX.c)
 */

void __fastcall ndis5InterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  int v7; // eax

  v4 = DeferredContext[13];
  if ( ndisCheckWatchdogTimer() )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    v7 = *(_DWORD *)(v4 + 120);
    *(_DWORD *)(v4 + 1856) = 658233;
    if ( (v7 & 0x2000000) == 0 )
    {
      *(_DWORD *)(v4 + 120) = v7 | 0x2000000;
      ndisReferenceMiniportNoCheck(v4, 0x4Eu);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 3464), CriticalWorkQueue);
    }
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
  }
  else if ( (*(_DWORD *)(v4 + 120) & 0x40000) != 0 )
  {
    ndisMDpcX(v6, DeferredContext);
  }
  else
  {
    ndisMDpc(v6, DeferredContext);
  }
}
