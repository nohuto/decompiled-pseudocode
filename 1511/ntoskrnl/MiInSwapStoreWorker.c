/*
 * XREFs of MiInSwapStoreWorker @ 0x1403B5A9C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiInSwapStoreContextDereference @ 0x1403B5B2C (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1403B5B4C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     SmSwapStore @ 0x1403B5BA4 (SmSwapStore.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  int v2; // edi
  $D4FCF91253F76F57393CBFE908971F67 v4; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0LL, (__int64)&v4);
  v2 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v2 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess(&v4, 0LL);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
