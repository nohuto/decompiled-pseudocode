/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x1404AAD84
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x1403F4818 (AlpcViewDestroyProcedure.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *v3; // rcx
  _KPROCESS *Process; // rsi
  $D4FCF91253F76F57393CBFE908971F67 v5; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_KPROCESS **)(a1 + 32);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 != Process )
    KiStackAttachProcess(v3, 0LL, (__int64)&v5);
  MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 64));
  if ( *(_KPROCESS **)(a1 + 32) != Process )
    KiUnstackDetachProcess(&v5, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
