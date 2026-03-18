/*
 * XREFs of XdvExAllocatePoolInternal @ 0x1406C0E14
 * Callers:
 *     VerifierExAllocatePool @ 0x1406B6244 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1406B62C0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1406B63B0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x1406B64A4 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1406B6504 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1406CE3F8 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x1406CE4E8 (VerifierPortExAllocatePoolWithTagPriority.c)
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
