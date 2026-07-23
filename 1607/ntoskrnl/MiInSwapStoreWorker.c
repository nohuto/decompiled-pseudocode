/*
 * XREFs of MiInSwapStoreWorker @ 0x1404D3998
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SmSwapStore @ 0x1403E4A60 (SmSwapStore.c)
 *     MiInSwapStoreContextDereference @ 0x1404D3A28 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404D3A48 (EtwTraceWorkingSetInSwapStoreFail.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  int v2; // edi
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0, (__int64)v4);
  v2 = SmSwapStore(2);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v2 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess((struct _KTHREAD *)v4, 0);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
