/*
 * XREFs of CreateProfileUserName @ 0x1C00178A0
 * Callers:
 *     NtUserSetSysColors @ 0x1C0017420 (NtUserSetSysColors.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0031568 (-InitPreviousUserString@@YAXXZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 */

__int64 CreateProfileUserName()
{
  __int64 result; // rax
  struct _UNICODE_STRING *v1; // rdi

  result = Win32AllocPoolWithQuota(528LL, 1852863317LL);
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
