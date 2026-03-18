/*
 * XREFs of KiInitSystem @ 0x1407E496C
 * Callers:
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 * Callees:
 *     KiForceSymbolReferences @ 0x1407FA9CC (KiForceSymbolReferences.c)
 */

__int64 *KiInitSystem()
{
  __int64 *result; // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  LODWORD(xmmword_1403D17F0) = 0;
  qword_140339088 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_1403390A8 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_140339098 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_140338FB8 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_140338FC8 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = &KiServiceTable;
  LODWORD(xmmword_1403D17D0) = KiServiceLimit;
  *((_QWORD *)&xmmword_1403D17D0 + 1) = KiArgumentTable;
  qword_140339058 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_140339060 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_140339030 = (__int64)&qword_140339028;
  qword_140339028 = (__int64)&qword_140339028;
  result = &qword_140338E60;
  KeServiceDescriptorTableShadow = KeServiceDescriptorTable;
  xmmword_1403D1790 = xmmword_1403D17D0;
  qword_140338E68 = (__int64)&qword_140338E60;
  qword_140338E60 = (__int64)&qword_140338E60;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  xmmword_1403D17A0 = xmmword_1403D17E0;
  xmmword_1403D17B0 = xmmword_1403D17F0;
  KiBalanceSetManagerPeriodicDpc = 275;
  qword_140339078 = 0LL;
  qword_140339050 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_140339022 = 6;
  dword_140339024 = 0;
  LODWORD(KiDynamicProcessorLock) = 1;
  qword_140338E48 = 0LL;
  dword_140338E50 = 0;
  word_140338E58 = 1;
  byte_140338E5A = 6;
  dword_140338E5C = 0;
  return result;
}
