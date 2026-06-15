/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_2_0_dll @ 0x180037010
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x180036FF0 (__imp_load_GetTokenInformation.c)
 *     __imp_load_GetSidLengthRequired @ 0x1800376B0 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x1800376D0 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x1800376F0 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x180037710 (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x180037730 (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x180037750 (__imp_load_IsValidSid.c)
 *     __imp_load_EqualSid @ 0x180037770 (__imp_load_EqualSid.c)
 *     __imp_load_InitializeAcl @ 0x180037790 (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x1800377B0 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x1800377D0 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetAce @ 0x1800377F0 (__imp_load_GetAce.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x180037810 (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x180037830 (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x180037850 (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x180037870 (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x180037890 (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_SetSecurityDescriptorSacl @ 0x1800378B0 (__imp_load_SetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x1800378D0 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x1800378F0 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x180037910 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x180037930 (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x180037950 (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AddAccessAllowedAceEx @ 0x180037970 (__imp_load_AddAccessAllowedAceEx.c)
 *     __imp_load_SetKernelObjectSecurity @ 0x180037990 (__imp_load_SetKernelObjectSecurity.c)
 *     __imp_load_CheckTokenMembership @ 0x180037B30 (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x180037B50 (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x180037B70 (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x180037B90 (__imp_load_FreeSid.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x180037BB0 (__imp_load_GetKernelObjectSecurity.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180029950 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_base_l1_2_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_base_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
