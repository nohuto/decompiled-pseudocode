/*
 * XREFs of KiInitSystem @ 0x1407B29AC
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     KiForceSymbolReferences @ 0x1407CFAC0 (KiForceSymbolReferences.c)
 */

LIST_ENTRY *KiInitSystem()
{
  _QWORD *v0; // rbp
  __int128 v1; // xmm1
  __int64 v2; // rcx
  __int128 v3; // xmm0
  _QWORD *v4; // rax
  LIST_ENTRY *result; // rax
  __int64 v6; // [rsp+60h] [rbp+0h] BYREF

  v0 = (_QWORD *)((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  v1 = xmmword_1403AA7E0;
  *v0 = &KiQueuedLockTableSize;
  v2 = 1024LL;
  LODWORD(xmmword_1403AA7F0) = 0;
  v3 = xmmword_1403AA7F0;
  *v0 = &KiTimerTableSize;
  *v0 = &KiTestDividend;
  qword_14030E618 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_14030E638 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_14030E628 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_14030E528 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_14030E568 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_1403AA7D0) = KiServiceLimit;
  *((_QWORD *)&xmmword_1403AA7D0 + 1) = KiArgumentTable;
  qword_14030E5D8 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_14030E5E0 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_14030E5B0 = (__int64)&qword_14030E5A8;
  qword_14030E5A8 = (__int64)&qword_14030E5A8;
  v4 = &KiAbTreeArray;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  KeServiceDescriptorTableShadow = KeServiceDescriptorTable;
  xmmword_1403AA790 = xmmword_1403AA7D0;
  xmmword_1403AA7A0 = v1;
  xmmword_1403AA7B0 = v3;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_1403AA810[0] = xmmword_1403AA7D0;
  xmmword_1403AA820 = v1;
  xmmword_1403AA830 = v3;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_14030E5F8 = 0LL;
  qword_14030E5D0 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_14030E5A2 = 6;
  dword_14030E5A4 = 0;
  do
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4 += 8;
    --v2;
  }
  while ( v2 );
  result = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Count = 1;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Blink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Flink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  return result;
}
