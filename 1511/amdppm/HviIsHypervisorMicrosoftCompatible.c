/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C00058F0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F2FC (ProcLibGlobalInit.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1C0005890 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface((__int64)v1);
  return v1[0] == 824407624;
}
