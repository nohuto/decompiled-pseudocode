/*
 * XREFs of RtlIsLongPathAwareProcessByManifest @ 0x1800CFC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryActivationContextApplicationSettings @ 0x180080A40 (RtlQueryActivationContextApplicationSettings.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

char RtlIsLongPathAwareProcessByManifest()
{
  struct _PEB *v0; // rax
  WCHAR v2[8]; // [rsp+40h] [rbp-28h] BYREF

  if ( !byte_180153515 )
  {
    if ( RtlQueryActivationContextApplicationSettings(
           0,
           0LL,
           (PWSTR)L"http://schemas.microsoft.com/SMI/2016/WindowsSettings",
           (PWSTR)L"longPathAware",
           v2,
           8uLL,
           0LL) < 0
      || ((v2[0] - 84) & 0xFFDF) != 0 )
    {
      byte_180153514 = 0;
    }
    else
    {
      v0 = NtCurrentPeb();
      byte_180153514 = 1;
      NtCurrentPeb()->BitField = v0->BitField | 0x80;
    }
    byte_180153515 = 1;
  }
  return byte_180153514;
}
