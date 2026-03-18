/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C00E733C
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E90EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 1) = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 22) = -1;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_DWORD *)DeferredContext + 28) = -1;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 12) = 0LL;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_QWORD *)DeferredContext + 15) = 0LL;
  *((_DWORD *)DeferredContext + 34) = 0;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 2;
  *((_DWORD *)DeferredContext + 44) = 0;
  DeferredContext[180] = 0;
  *(_DWORD *)(DeferredContext + 182) = 0x10000;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_DWORD *)DeferredContext + 50) = -1;
  *((_QWORD *)DeferredContext + 29) = 0LL;
  DeferredContext[2053] = 0;
  *((_WORD *)DeferredContext + 1029) = 0;
  *((_DWORD *)DeferredContext + 518) = 0;
  *((_DWORD *)DeferredContext + 520) = 0;
  *(_WORD *)(DeferredContext + 2091) = 256;
  *((_QWORD *)DeferredContext + 266) = 0LL;
  *((_QWORD *)DeferredContext + 267) = 0LL;
  *((_QWORD *)DeferredContext + 268) = 0LL;
  *((_DWORD *)DeferredContext + 540) = 0;
  *((_QWORD *)DeferredContext + 271) = 0LL;
  *((_QWORD *)DeferredContext + 272) = 0LL;
  *((_DWORD *)DeferredContext + 578) = 0;
  *((_DWORD *)DeferredContext + 579) = -1;
  *((_DWORD *)DeferredContext + 580) = -1;
  *(_QWORD *)(DeferredContext + 2324) = 0LL;
  *((_QWORD *)DeferredContext + 316) = 0LL;
  *(_DWORD *)(DeferredContext + 2605) = 0;
  *(_WORD *)(DeferredContext + 2609) = 256;
  *((_DWORD *)DeferredContext + 653) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 2632);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 331) = 0LL;
  *((_DWORD *)DeferredContext + 732) = 0;
  *((_QWORD *)DeferredContext + 372) = 0LL;
  DeferredContext[2984] = 0;
  *((_DWORD *)DeferredContext + 812) = 0;
  *((_DWORD *)DeferredContext + 858) = -1;
  *((_QWORD *)DeferredContext + 428) = 0LL;
  *((_QWORD *)DeferredContext + 427) = 0LL;
  *((_DWORD *)DeferredContext + 862) = 0;
  *((_QWORD *)DeferredContext + 432) = 0LL;
  *((_QWORD *)DeferredContext + 433) = 0LL;
  *((_QWORD *)DeferredContext + 434) = 0LL;
  *((_DWORD *)DeferredContext + 870) = 0;
  DeferredContext[3680] = 0;
  *((_DWORD *)DeferredContext + 921) = 0;
  *((_DWORD *)DeferredContext + 927) = 0;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 208), NotificationEvent, 1u);
  memset(DeferredContext + 240, 0, 0x458uLL);
  memset(DeferredContext + 1360, 0, 0x60uLL);
  memset(DeferredContext + 1456, 0, 0x240uLL);
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 2104), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 2720));
  KeInitializeDpc((PRKDPC)(DeferredContext + 2784), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3256));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3320), (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 426) = DeferredContext;
  *((_QWORD *)DeferredContext + 425) = DxgkpProcessVSyncPhaseThread;
  *((_QWORD *)DeferredContext + 423) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 430);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3544));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3608), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 459);
  *((_QWORD *)DeferredContext + 440) = DeferredContext;
  *((_QWORD *)DeferredContext + 439) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 437) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 441);
  *((_QWORD *)DeferredContext + 335) = DeferredContext + 2672;
  *((_QWORD *)DeferredContext + 334) = DeferredContext + 2672;
  *((_QWORD *)DeferredContext + 337) = DeferredContext + 2688;
  *((_QWORD *)DeferredContext + 336) = DeferredContext + 2688;
  return (DXGADAPTER *)DeferredContext;
}
