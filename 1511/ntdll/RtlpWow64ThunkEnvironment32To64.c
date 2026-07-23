/*
 * XREFs of RtlpWow64ThunkEnvironment32To64 @ 0x18004DAAC
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18004D7D8 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004DB80 (RtlQueryEnvironmentVariable_U.c)
 *     RtlSetEnvironmentVariable @ 0x18004DBF0 (RtlSetEnvironmentVariable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

NTSTATUS RtlpWow64ThunkEnvironment32To64()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rdi
  NTSTATUS result; // eax
  _UNICODE_STRING Value; // [rsp+20h] [rbp-258h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-248h] BYREF
  _UNICODE_STRING Name; // [rsp+40h] [rbp-238h] BYREF
  char v6; // [rsp+50h] [rbp-228h] BYREF

  v0 = (PCWSTR *)&unk_180106EB8;
  v1 = 3LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(v0 - 1));
    *(_DWORD *)&Value.Length = 34078720;
    Value.Buffer = (unsigned __int16 *)&v6;
    result = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
    if ( result >= 0 )
    {
      if ( !*(_BYTE *)v0 )
        RtlSetEnvironmentVariable(0LL, &DestinationString, 0LL);
      RtlInitUnicodeString(&Name, *(v0 - 3));
      result = RtlSetEnvironmentVariable(0LL, &Name, &Value);
    }
    v0 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
