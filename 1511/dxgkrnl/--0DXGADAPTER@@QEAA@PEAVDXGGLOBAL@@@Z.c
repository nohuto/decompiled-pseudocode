/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C00DA490
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
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
  *(_DWORD *)(DeferredContext + 166) = 0x10000;
  *((_QWORD *)DeferredContext + 22) = 0LL;
  *((_DWORD *)DeferredContext + 46) = -1;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  DeferredContext[1917] = 0;
  *(_WORD *)(DeferredContext + 1923) = 0;
  *((_DWORD *)DeferredContext + 484) = 0;
  *((_DWORD *)DeferredContext + 486) = 0;
  *(_WORD *)(DeferredContext + 1951) = 256;
  *((_QWORD *)DeferredContext + 248) = 0LL;
  *((_QWORD *)DeferredContext + 249) = 0LL;
  *((_QWORD *)DeferredContext + 250) = 0LL;
  *((_DWORD *)DeferredContext + 504) = 0;
  *((_QWORD *)DeferredContext + 253) = 0LL;
  *((_QWORD *)DeferredContext + 254) = 0LL;
  *((_DWORD *)DeferredContext + 542) = 0;
  *((_DWORD *)DeferredContext + 543) = -1;
  *((_DWORD *)DeferredContext + 544) = -1;
  *(_QWORD *)(DeferredContext + 2180) = 0LL;
  *((_QWORD *)DeferredContext + 298) = 0LL;
  *(_DWORD *)(DeferredContext + 2461) = 0;
  *(_WORD *)(DeferredContext + 2465) = 256;
  *((_DWORD *)DeferredContext + 617) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 2488);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 313) = 0LL;
  *((_DWORD *)DeferredContext + 676) = 0;
  *((_DWORD *)DeferredContext + 722) = -1;
  *((_QWORD *)DeferredContext + 360) = 0LL;
  *((_QWORD *)DeferredContext + 359) = 0LL;
  *((_DWORD *)DeferredContext + 726) = 0;
  *((_QWORD *)DeferredContext + 364) = 0LL;
  *((_QWORD *)DeferredContext + 365) = 0LL;
  *((_QWORD *)DeferredContext + 366) = 0LL;
  *((_DWORD *)DeferredContext + 734) = 0;
  DeferredContext[3120] = 0;
  *((_DWORD *)DeferredContext + 781) = 0;
  *((_QWORD *)DeferredContext + 394) = 0LL;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 32), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)DeferredContext + 8, NotificationEvent, 1u);
  memset(DeferredContext + 224, 0, 0x290uLL);
  memset(DeferredContext + 880, 0, 0xC8uLL);
  memset(DeferredContext + 1080, 0, 0xB8uLL);
  memset(DeferredContext + 1272, 0, 0x30uLL);
  memset(DeferredContext + 1320, 0, 0x240uLL);
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_QWORD *)DeferredContext + 19) = 0LL;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 1960), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 2576));
  KeInitializeDpc((PRKDPC)(DeferredContext + 2640), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 2712));
  KeInitializeDpc((PRKDPC)(DeferredContext + 2776), (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 358) = DeferredContext;
  *((_QWORD *)DeferredContext + 357) = DxgkpProcessVSyncPhaseThread;
  *((_QWORD *)DeferredContext + 355) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 362);
  KeInitializeTimer((PKTIMER)(DeferredContext + 2984));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3048), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 389);
  *((_QWORD *)DeferredContext + 371) = DeferredContext;
  *((_QWORD *)DeferredContext + 370) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 368) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 372);
  *((_QWORD *)DeferredContext + 317) = DeferredContext + 2528;
  *((_QWORD *)DeferredContext + 316) = DeferredContext + 2528;
  *((_QWORD *)DeferredContext + 319) = DeferredContext + 2544;
  *((_QWORD *)DeferredContext + 318) = DeferredContext + 2544;
  return (DXGADAPTER *)DeferredContext;
}
