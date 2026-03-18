/*
 * XREFs of ?InitPreviousUserString@@YAXXZ @ 0x1C0021220
 * Callers:
 *     OpenCacheKeyEx @ 0x1C0020130 (OpenCacheKeyEx.c)
 *     CreateProfileUserName @ 0x1C007A8E0 (CreateProfileUserName.c)
 * Callees:
 *     GetProcessLuid @ 0x1C00212D0 (GetProcessLuid.c)
 */

void InitPreviousUserString(void)
{
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF
  struct _LUID AuthenticationId; // [rsp+40h] [rbp+8h] BYREF

  AuthenticationId.LowPart = 0;
  AuthenticationId.HighPart = 0;
  GetProcessLuid(0LL, &AuthenticationId);
  if ( AuthenticationId.LowPart != luidPrevious.LowPart || AuthenticationId.HighPart != luidPrevious.HighPart )
  {
    luidPrevious = AuthenticationId;
    if ( AuthenticationId.LowPart == 999 && !AuthenticationId.HighPart || RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
    {
      RtlCopyUnicodeString(&PreviousUserString, &DefaultUserString);
    }
    else
    {
      RtlCopyUnicodeString(&PreviousUserString, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
    }
    RtlAppendUnicodeToString(&PreviousUserString, L"\\");
  }
}
