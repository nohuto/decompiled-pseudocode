/*
 * XREFs of PfpRpControlRequest @ 0x140455108
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfpRpControlRequestVerify @ 0x140025E58 (PfpRpControlRequestVerify.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfpRpControlRequestPerform @ 0x1404551BC (PfpRpControlRequestPerform.c)
 *     PfpRpControlRequestCopy @ 0x140455248 (PfpRpControlRequestCopy.c)
 */

__int64 __fastcall PfpRpControlRequest(__int64 a1, char a2)
{
  int v2; // ebx

  if ( (dword_1403535E0 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 24) < 0x18u )
    {
      return (unsigned int)-1073741306;
    }
    else
    {
      v2 = PfpRpControlRequestCopy(*(void **)(a1 + 16), a2);
      if ( v2 >= 0 )
      {
        if ( (unsigned int)PfpRpControlRequestVerify(0LL) )
          return (unsigned int)-1073741701;
        else
          return (unsigned int)PfpRpControlRequestPerform(&unk_140353548, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741696;
  }
  return (unsigned int)v2;
}
