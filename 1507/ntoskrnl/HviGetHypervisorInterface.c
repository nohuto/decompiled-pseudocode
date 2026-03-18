/*
 * XREFs of HviGetHypervisorInterface @ 0x14016F48C
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14016F450 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlpHvIdentityInfoCallback @ 0x1401E56BC (HvlpHvIdentityInfoCallback.c)
 *     HvlQueryDetailInfo @ 0x1406703D4 (HvlQueryDetailInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall HviGetHypervisorInterface(_DWORD *a1)
{
  __int64 result; // rax

  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
