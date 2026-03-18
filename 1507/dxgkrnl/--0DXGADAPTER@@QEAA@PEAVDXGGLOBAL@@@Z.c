/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C00C1EDC
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 1) = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 18) = -1;
  *((_QWORD *)DeferredContext + 8) = 0LL;
  *((_QWORD *)DeferredContext + 7) = 0LL;
  *((_DWORD *)DeferredContext + 24) = -1;
  *((_QWORD *)DeferredContext + 11) = 0LL;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_DWORD *)DeferredContext + 34) = 2;
  *((_DWORD *)DeferredContext + 40) = 0;
  DeferredContext[164] = 0;
  *((_WORD *)DeferredContext + 83) = 0;
  DeferredContext[168] = 1;
  *((_QWORD *)DeferredContext + 22) = 0LL;
  *((_DWORD *)DeferredContext + 46) = -1;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  DeferredContext[1909] = 0;
  *(_WORD *)(DeferredContext + 1915) = 0;
  *((_DWORD *)DeferredContext + 482) = 0;
  *((_DWORD *)DeferredContext + 484) = 0;
  *((_QWORD *)DeferredContext + 247) = 0LL;
  *((_QWORD *)DeferredContext + 248) = 0LL;
  *((_DWORD *)DeferredContext + 500) = 0;
  *((_QWORD *)DeferredContext + 251) = 0LL;
  *((_QWORD *)DeferredContext + 252) = 0LL;
  *((_DWORD *)DeferredContext + 538) = 0;
  *((_DWORD *)DeferredContext + 539) = -1;
  *((_DWORD *)DeferredContext + 540) = -1;
  *(_QWORD *)(DeferredContext + 2164) = 0LL;
  *((_QWORD *)DeferredContext + 296) = 0LL;
  *(_DWORD *)(DeferredContext + 2445) = 0;
  DeferredContext[2449] = 1;
  *((_DWORD *)DeferredContext + 613) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 2472);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 311) = 0LL;
  *((_DWORD *)DeferredContext + 672) = 0;
  *((_DWORD *)DeferredContext + 718) = -1;
  *((_QWORD *)DeferredContext + 358) = 0LL;
  *((_QWORD *)DeferredContext + 357) = 0LL;
  *((_DWORD *)DeferredContext + 722) = 0;
  *((_QWORD *)DeferredContext + 362) = 0LL;
  *((_QWORD *)DeferredContext + 363) = 0LL;
  *((_QWORD *)DeferredContext + 364) = 0LL;
  *((_DWORD *)DeferredContext + 730) = 0;
  DeferredContext[3104] = 0;
  *((_DWORD *)DeferredContext + 777) = 0;
  *((_QWORD *)DeferredContext + 392) = 0LL;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 32), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)DeferredContext + 8, NotificationEvent, 1u);
  memset(DeferredContext + 224, 0, 0x290uLL);
  memset(DeferredContext + 880, 0, 0xC0uLL);
  memset(DeferredContext + 1072, 0, 0xB8uLL);
  memset(DeferredContext + 1264, 0, 0x30uLL);
  memset(DeferredContext + 1312, 0, 0x240uLL);
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_QWORD *)DeferredContext + 19) = 0LL;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 1952), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)DeferredContext + 40);
  KeInitializeDpc((PRKDPC)DeferredContext + 41, (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 2696));
  KeInitializeDpc((PRKDPC)(DeferredContext + 2760), (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 356) = DeferredContext;
  *((_QWORD *)DeferredContext + 355) = DxgkpProcessVSyncPhaseThread;
  *((_QWORD *)DeferredContext + 353) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 360);
  KeInitializeTimer((PKTIMER)(DeferredContext + 2968));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3032), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 387);
  *((_QWORD *)DeferredContext + 369) = DeferredContext;
  *((_QWORD *)DeferredContext + 368) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 366) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 370);
  *((_QWORD *)DeferredContext + 315) = DeferredContext + 2512;
  *((_QWORD *)DeferredContext + 314) = DeferredContext + 2512;
  *((_QWORD *)DeferredContext + 317) = DeferredContext + 2528;
  *((_QWORD *)DeferredContext + 316) = DeferredContext + 2528;
  return (DXGADAPTER *)DeferredContext;
}
