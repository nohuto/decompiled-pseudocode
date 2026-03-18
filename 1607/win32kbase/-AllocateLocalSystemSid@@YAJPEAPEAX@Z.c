/*
 * XREFs of ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0077620
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C003A440 (UserAllocDefaultCompositionSecurityDescriptor.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall AllocateLocalSystemSid(void **a1)
{
  void *v2; // rax
  void *v3; // rbx
  NTSTATUS v4; // edi
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  RtlLengthRequiredSid(1u);
  v2 = (void *)Win32AllocPoolWithQuota();
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v4 = RtlInitializeSid(v2, &IdentifierAuthority, 1u);
    if ( v4 < 0 )
    {
      Win32FreePool();
    }
    else
    {
      *RtlSubAuthoritySid(v3, 0) = 18;
      *a1 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
