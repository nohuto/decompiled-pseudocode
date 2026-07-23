/*
 * XREFs of LdrpInitializePolicy @ 0x18005DE1C
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     AppModelPolicy_GetPolicy @ 0x18005DF34 (AppModelPolicy_GetPolicy.c)
 *     LdrSetDefaultDllDirectories @ 0x18005E890 (LdrSetDefaultDllDirectories.c)
 */

char LdrpInitializePolicy()
{
  struct _PEB *v0; // rbx
  _UNICODE_STRING *ProcessParameters; // rdi
  __int64 v2; // rcx
  int Policy; // eax
  _UNICODE_STRING v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v0 = NtCurrentPeb();
  ProcessParameters = (_UNICODE_STRING *)v0->ProcessParameters;
  RtlInitUnicodeString(&LdrpAppPackagesPath, 0LL);
  LOBYTE(Policy) = v0->BitField;
  if ( (Policy & 0x10) != 0 && ProcessParameters[5].Length )
  {
    v4 = ProcessParameters[5];
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = v4;
    if ( (int)AppModelPolicy_GetPolicy(v2, 4LL, &v9) < 0 || v9 == 262145 )
      LdrSetDefaultDllDirectories(0x1000u);
    else
      LdrpPolicyBits &= ~1u;
    if ( (int)AppModelPolicy_GetPolicy(v5, 7LL, &v9) >= 0 && v9 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( (int)AppModelPolicy_GetPolicy(v6, 19LL, &v9) >= 0 && v9 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    Policy = AppModelPolicy_GetPolicy(v7, 32LL, &v9);
    if ( Policy >= 0 && v9 == 2097153 )
      LdrpPolicyBits |= 4u;
  }
  else if ( (Policy & 2) != 0 )
  {
    ProcessParameters[5].Length = 0;
  }
  else if ( ProcessParameters[5].Length )
  {
    LOBYTE(Policy) = LdrSetDllDirectory(ProcessParameters + 5);
  }
  return Policy;
}
