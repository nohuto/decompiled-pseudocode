/*
 * XREFs of MiInSwapStoreWorker @ 0x1404F18A4
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     SmSwapStore @ 0x1403E3434 (SmSwapStore.c)
 *     MiInSwapStoreContextDereference @ 0x1404F1934 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404F1954 (EtwTraceWorkingSetInSwapStoreFail.c)
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
