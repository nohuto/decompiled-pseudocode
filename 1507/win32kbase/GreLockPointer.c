/*
 * XREFs of GreLockPointer @ 0x1C0019780
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreLockPointer(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 72));
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemPointer()", *(_QWORD *)(a1 + 72), 4);
}
