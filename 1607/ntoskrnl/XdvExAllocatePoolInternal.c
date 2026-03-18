/*
 * XREFs of XdvExAllocatePoolInternal @ 0x14070CE7C
 * Callers:
 *     VerifierExAllocatePool @ 0x1407020A4 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolWithTag @ 0x140702120 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140702180 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140702270 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140702364 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x14071A4B0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x14071A5A0 (VerifierPortExAllocatePoolWithTagPriority.c)
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
