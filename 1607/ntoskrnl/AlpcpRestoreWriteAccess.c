/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x1404EEAA0
 * Callers:
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     AlpcViewDestroyProcedure @ 0x14042A038 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1404294AC (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *v3; // rcx
  _KPROCESS *Process; // rsi
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_KPROCESS **)(a1 + 32);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 != Process )
    KiStackAttachProcess(v3, 0, (__int64)v5);
  MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 64));
  if ( *(_KPROCESS **)(a1 + 32) != Process )
    KiUnstackDetachProcess((struct _KTHREAD *)v5, 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
