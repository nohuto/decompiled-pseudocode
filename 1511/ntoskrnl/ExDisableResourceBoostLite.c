/*
 * XREFs of ExDisableResourceBoostLite @ 0x14010672C
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1400A0330 (CcAllocateInitializeBcb.c)
 * Callees:
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     ExpLockResource @ 0x14007F3A0 (ExpLockResource.c)
 */

void __stdcall ExDisableResourceBoostLite(PERESOURCE Resource)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  ExpLockResource((__int64)Resource, v5);
  Resource->Flag |= 8u;
  ExpUnlockResource(v2, (__int64)v5, v3, v4);
}
