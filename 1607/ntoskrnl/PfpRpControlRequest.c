/*
 * XREFs of PfpRpControlRequest @ 0x1403EBEEC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EA8E8 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfpRpControlRequestVerify @ 0x14000715C (PfpRpControlRequestVerify.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfpRpControlRequestPerform @ 0x1403EBFA0 (PfpRpControlRequestPerform.c)
 *     PfpRpControlRequestCopy @ 0x1403EC014 (PfpRpControlRequestCopy.c)
 */

__int64 __fastcall PfpRpControlRequest(__int64 a1, char a2)
{
  int v2; // ebx

  if ( (dword_140328670 & 1) != 0 )
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
          return (unsigned int)PfpRpControlRequestPerform(&unk_1403285D8, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741696;
  }
  return (unsigned int)v2;
}
