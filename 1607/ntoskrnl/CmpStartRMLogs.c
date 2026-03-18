/*
 * XREFs of CmpStartRMLogs @ 0x1404DA6EC
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1404DA4B8 (CmpTransInitializeTransaction.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpUuidCreate @ 0x14049F598 (CmpUuidCreate.c)
 *     CmpStartRMLog @ 0x1404DAAE0 (CmpStartRMLog.c)
 */

__int64 __fastcall CmpStartRMLogs(_DWORD *a1)
{
  int v1; // eax
  unsigned int v3; // ebx
  unsigned int *v5; // rsi
  bool v6; // bp
  int started; // eax
  UUID Uuid; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1[26];
  v3 = 0;
  if ( (v1 & 8) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( (v1 & 1) == 0 )
  {
    v5 = a1 + 28;
    v6 = CmpUuidCreate(&Uuid) >= 0;
    if ( (a1[26] & 2) == 0 )
      v5 = a1 + 27;
    CmpLockRegistryFreezeAware(0);
    started = CmpStartRMLog(a1, 0LL);
    v3 = started;
    if ( started < 0 && started != -1073741697 && started != -1073741757 && started != -1073741670 && v6 )
    {
      a1[26] &= ~2u;
      v3 = CmpStartRMLog(a1, &Uuid);
    }
    CmpUnlockRegistry();
    *v5 = v3;
  }
  return v3;
}
