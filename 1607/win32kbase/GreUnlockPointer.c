/*
 * XREFs of GreUnlockPointer @ 0x1C0082520
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockPointer(__int64 a1)
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemPointer()");
  return GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(a1 + 72));
}
