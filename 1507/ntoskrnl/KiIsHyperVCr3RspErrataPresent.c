/*
 * XREFs of KiIsHyperVCr3RspErrataPresent @ 0x140209FC8
 * Callers:
 *     KiIsBranchConfusionMitigationSupported @ 0x140208AD8 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsTsaMitigationSupported @ 0x140208CB0 (KiIsTsaMitigationSupported.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14016F420 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HviGetHypervisorVersion @ 0x1402684B0 (HviGetHypervisorVersion.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140268530 (HviIsHypervisorVendorMicrosoft.c)
 */

_BOOL8 __fastcall KiIsHyperVCr3RspErrataPresent(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+2Ch] [rbp-1Ch]

  result = 0;
  if ( *(_BYTE *)(a1 + 1597) == 1 )
  {
    if ( (unsigned __int8)HviIsHypervisorVendorMicrosoft() )
    {
      HviGetHypervisorFeatures(&v2);
      if ( (v2 & 0x100000000000LL) == 0 )
      {
        HviGetHypervisorVersion(&v2);
        if ( (unsigned int)v2 < 0x429D && ((_DWORD)v2 != 14393 || (v3 & 0xFFFFFFu) < 0x1479) )
          return 1;
      }
    }
  }
  return result;
}
