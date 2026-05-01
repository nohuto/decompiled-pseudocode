/*
 * XREFs of ?RmpLookupDefAppsAccount@@YAJXZ @ 0x180021324
 * Callers:
 *     RmpInitializeDefaultAccountSid @ 0x180021214 (RmpInitializeDefaultAccountSid.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 */

__int64 RmpLookupDefAppsAccount(void)
{
  unsigned int v0; // ebx
  WCHAR *ReferencedDomainName; // rdi
  DWORD cchReferencedDomainName; // [rsp+50h] [rbp+8h] BYREF
  DWORD cbSid; // [rsp+58h] [rbp+10h] BYREF
  enum _SID_NAME_USE peUse; // [rsp+60h] [rbp+18h] BYREF

  cchReferencedDomainName = 0;
  cbSid = 68;
  LookupAccountNameW(0LL, L"DefApps", (char *)RmSvcGlobals + 2020, &cbSid, 0LL, &cchReferencedDomainName, &peUse);
  if ( GetLastError() == 122 )
  {
    ReferencedDomainName = (WCHAR *)RmpAllocateHeap(2LL * cchReferencedDomainName);
    if ( ReferencedDomainName )
    {
      cbSid = 68;
      v0 = !LookupAccountNameW(
              0LL,
              L"DefApps",
              (char *)RmSvcGlobals + 2020,
              &cbSid,
              ReferencedDomainName,
              &cchReferencedDomainName,
              &peUse)
         ? 0xC0000001
         : 0;
      RmpFreeHeap(ReferencedDomainName);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
