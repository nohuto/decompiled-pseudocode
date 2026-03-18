/*
 * XREFs of KiInitSystem @ 0x140766420
 * Callers:
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     KiForceSymbolReferences @ 0x140784248 (KiForceSymbolReferences.c)
 */

LIST_ENTRY *KiInitSystem()
{
  LIST_ENTRY *result; // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  LODWORD(xmmword_1403827B0) = 0;
  qword_1402E8C08 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_1402E8C28 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_1402E8C18 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_1402E8B38 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_1402E8B48 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = &KiServiceTable;
  LODWORD(xmmword_140382790) = KiServiceLimit;
  *((_QWORD *)&xmmword_140382790 + 1) = KiArgumentTable;
  qword_1402E8BD8 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_1402E8BE0 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_1402E8BB0 = (__int64)&qword_1402E8BA8;
  qword_1402E8BA8 = (__int64)&qword_1402E8BA8;
  result = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KeServiceDescriptorTableShadow = KeServiceDescriptorTable;
  xmmword_140382750 = xmmword_140382790;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Blink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Flink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  xmmword_140382760 = xmmword_1403827A0;
  xmmword_140382770 = xmmword_1403827B0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_1402E8BF8 = 0LL;
  qword_1402E8BD0 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_1402E8BA2 = 6;
  dword_1402E8BA4 = 0;
  KiDynamicProcessorLock.Count = 1;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  return result;
}
