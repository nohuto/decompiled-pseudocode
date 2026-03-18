/*
 * XREFs of CmpCheckKeyOwnerForPca @ 0x140602154
 * Callers:
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140440140 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140489DD8 (RtlGetOwnerSecurityDescriptor.c)
 */

BOOLEAN __fastcall CmpCheckKeyOwnerForPca(__int64 a1, __int64 a2)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  BOOLEAN OwnerDefaulted; // [rsp+40h] [rbp+18h] BYREF
  PSID Owner; // [rsp+48h] [rbp+20h] BYREF

  if ( CmpTrustedInstallerSid
    && (SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL),
        RtlGetOwnerSecurityDescriptor(
          (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
          &Owner,
          &OwnerDefaulted) >= 0)
    && Owner )
  {
    return RtlEqualSid(CmpTrustedInstallerSid, Owner);
  }
  else
  {
    return 0;
  }
}
