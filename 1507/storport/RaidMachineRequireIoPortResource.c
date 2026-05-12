/*
 * XREFs of RaidMachineRequireIoPortResource @ 0x1C0039FC0
 * Callers:
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C004CFA8 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

bool RaidMachineRequireIoPortResource()
{
  char v0; // bl
  int v2[4]; // [rsp+20h] [rbp-148h] BYREF
  _DWORD VersionInformation[72]; // [rsp+30h] [rbp-138h] BYREF

  v0 = 1;
  v2[0] = 1;
  EmClientQueryRuleState(&GUID_KEEP_IO_PORT_RESOURCE_REQUIREMENT_RULE, v2);
  if ( v2[0] != 2 )
  {
    memset(&VersionInformation[1], 0, 0x118uLL);
    VersionInformation[0] = 284;
    RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
    return (unsigned __int8)(BYTE2(VersionInformation[70]) - 2) > 1u;
  }
  return v0;
}
