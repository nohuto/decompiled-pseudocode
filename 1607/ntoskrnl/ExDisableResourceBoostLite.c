/*
 * XREFs of ExDisableResourceBoostLite @ 0x1401118F4
 * Callers:
 *     CcAllocateInitializeBcb @ 0x14006C9C4 (CcAllocateInitializeBcb.c)
 * Callees:
 *     ExpLockResource @ 0x14005DB60 (ExpLockResource.c)
 *     ExpUnlockResource @ 0x140066CF0 (ExpUnlockResource.c)
 */

void __stdcall ExDisableResourceBoostLite(PERESOURCE Resource)
{
  __int64 v2; // rcx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  ExpLockResource((__int64)Resource, (__int64)v3);
  Resource->Flag |= 8u;
  ExpUnlockResource(v2, (__int64)v3);
}
