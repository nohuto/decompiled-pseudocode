/*
 * XREFs of GreUnlockPointer @ 0x1C00197D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockPointer(__int64 a1, __int64 a2, __int64 a3)
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemPointer()", *(_QWORD *)(a1 + 72), a3);
  return GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 72));
}
