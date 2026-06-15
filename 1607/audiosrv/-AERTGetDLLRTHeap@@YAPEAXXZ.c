/*
 * XREFs of ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x18008D820
 * Callers:
 *     ??_GCAPOExceptionWrapper@@UEAAPEAXI@Z @ 0x18008BD70 (--_GCAPOExceptionWrapper@@UEAAPEAXI@Z.c)
 *     ?Create@CAPOExceptionWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18008C1C0 (-Create@CAPOExceptionWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     <none>
 */

unsigned __int64 AERTGetDLLRTHeap(void)
{
  BOOL inited; // eax
  LPVOID Context; // [rsp+30h] [rbp+8h] BYREF

  inited = InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context);
  return (unsigned __int64)Context & -(__int64)inited;
}
