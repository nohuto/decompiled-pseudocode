/*
 * XREFs of ExDisableResourceBoostLite @ 0x1401397D0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1400F1B2C (CcAllocateInitializeBcb.c)
 * Callees:
 *     ExpLockResource @ 0x14009D730 (ExpLockResource.c)
 *     ExpUnlockResource @ 0x1400C66F0 (ExpUnlockResource.c)
 */

void __stdcall ExDisableResourceBoostLite(PERESOURCE Resource)
{
  __int64 v2; // rcx
  volatile signed __int64 *v3[5]; // [rsp+20h] [rbp-28h] BYREF

  ExpLockResource((__int64)Resource, v3);
  Resource->Flag |= 8u;
  ExpUnlockResource(v2, v3);
}
