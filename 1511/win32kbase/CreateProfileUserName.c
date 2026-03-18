/*
 * XREFs of CreateProfileUserName @ 0x1C007A8E0
 * Callers:
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0021220 (-InitPreviousUserString@@YAXXZ.c)
 */

__int64 CreateProfileUserName()
{
  __int64 result; // rax
  struct _UNICODE_STRING *v1; // rdi

  result = Win32AllocPoolWithQuota();
  v1 = (struct _UNICODE_STRING *)result;
  if ( result )
  {
    PushW32ThreadLock_0();
    v1[32].Buffer = &v1->Length;
    v1[32].MaximumLength = 512;
    v1[32].Length = 0;
    InitPreviousUserString();
    RtlCopyUnicodeString(v1 + 32, &PreviousUserString);
    return (__int64)&v1[32];
  }
  return result;
}
