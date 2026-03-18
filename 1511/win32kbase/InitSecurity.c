/*
 * XREFs of InitSecurity @ 0x1C013C36C
 * Callers:
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     AllocAce @ 0x1C00210E0 (AllocAce.c)
 *     CreateSecurityDescriptor @ 0x1C006D450 (CreateSecurityDescriptor.c)
 */

__int64 InitSecurity()
{
  void *v0; // rax
  unsigned int v1; // ebx
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax
  ULONG AceListLength; // [rsp+40h] [rbp+8h] BYREF

  v0 = (void *)AllocAce(0LL, 0, 14, 983935, SeExports->SeWorldSid, &AceListLength);
  v1 = 0;
  if ( v0 )
  {
    v2 = (void *)AllocAce(v0, 0, 14, 983935, SeExports->SeRestrictedSid, &AceListLength);
    if ( v2 )
    {
      v3 = (void *)AllocAce(v2, 0, 9, 0x10000000, SeExports->SeWorldSid, &AceListLength);
      if ( v3 )
      {
        v4 = (void *)AllocAce(v3, 0, 9, 0x10000000, SeExports->SeRestrictedSid, &AceListLength);
        if ( v4 )
        {
          v5 = (void *)AllocAce(v4, 0, 0, 5, SeExports->SeAliasAdminsSid, &AceListLength);
          if ( v5 )
          {
            v6 = (void *)AllocAce(v5, 0, 0, 2, SeExports->SeWorldSid, &AceListLength);
            if ( v6 )
            {
              v7 = (void *)AllocAce(v6, 0, 0, 2, SeExports->SeRestrictedSid, &AceListLength);
              if ( v7 )
              {
                gpsdInitWinSta = (__int64)CreateSecurityDescriptor(v7, AceListLength, 0);
                Win32FreePool();
                LOBYTE(v1) = gpsdInitWinSta != 0;
                return v1;
              }
            }
          }
        }
      }
    }
    Win32FreePool();
  }
  return 0LL;
}
