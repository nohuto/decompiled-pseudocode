/*
 * XREFs of ?InitPreviousUserString@@YAXXZ @ 0x1C0054E24
 * Callers:
 *     CreateProfileUserName @ 0x1C0054DA0 (CreateProfileUserName.c)
 *     OpenCacheKeyEx @ 0x1C0055BA0 (OpenCacheKeyEx.c)
 * Callees:
 *     GetProcessLuid @ 0x1C0012450 (GetProcessLuid.c)
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
