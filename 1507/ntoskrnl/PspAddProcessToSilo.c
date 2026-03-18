/*
 * XREFs of PspAddProcessToSilo @ 0x1406C17F8
 * Callers:
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 */

__int64 __fastcall PspAddProcessToSilo(char *Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PRKEVENT *v5; // rcx
  struct _KEVENT *v6; // rbx
  int v7; // ecx
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Event + 48), 1u);
  *(_QWORD *)(a2 + 1832) = Event;
  v5 = (PRKEVENT *)*((_QWORD *)Event + 24);
  v6 = (struct _KEVENT *)(a2 + 1840);
  *(_QWORD *)&v6->Header.Lock = Event + 184;
  v6->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v5;
  if ( *v5 != (PRKEVENT)(Event + 184) )
    __fastfail(3u);
  *v5 = v6;
  *((_QWORD *)Event + 24) = v6;
  v7 = *((_DWORD *)Event + 45);
  *((_DWORD *)Event + 45) = v7 + 1;
  if ( !v7 )
  {
    KeResetEvent((PRKEVENT)Event);
    if ( *((_QWORD *)Event + 32) )
    {
      if ( !*((_DWORD *)Event + 44) )
        KeResetEvent((PRKEVENT)(Event + 232));
    }
  }
  ExReleaseResourceLite((PERESOURCE)(Event + 48));
  v8 = KeGetCurrentThread();
  v9 = v8->SpecialApcDisable + 1;
  v8->SpecialApcDisable = v9;
  if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery();
  PspReferenceSiloObject(Event);
  return 0LL;
}
