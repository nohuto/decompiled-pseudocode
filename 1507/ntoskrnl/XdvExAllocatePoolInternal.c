/*
 * XREFs of XdvExAllocatePoolInternal @ 0x140742654
 * Callers:
 *     VerifierExAllocatePool @ 0x140736534 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolWithTag @ 0x1407365B0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140736610 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140736700 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1407367F4 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140751DD0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140751EC0 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvExAllocatePoolInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 (*a6)(void))
{
  return a6();
}
