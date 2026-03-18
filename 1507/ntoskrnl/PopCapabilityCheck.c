/*
 * XREFs of PopCapabilityCheck @ 0x140236E18
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1406C97D8 (RtlCapabilityCheck.c)
 */

char PopCapabilityCheck()
{
  const wchar_t *v0; // rcx
  __int64 v1; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&SourceString.Length = 0;
  v0 = L"ID_CAP_SCREENOFF";
  SourceString.Buffer = 0LL;
  v1 = 0x7FFFLL;
  do
  {
    if ( !*v0 )
      break;
    ++v0;
    --v1;
  }
  while ( v1 );
  if ( v1 )
  {
    SourceString.Buffer = L"ID_CAP_SCREENOFF";
    SourceString.Length = 2 * (0x7FFF - v1);
    SourceString.MaximumLength = SourceString.Length + 2;
    RtlCapabilityCheck(0LL, &SourceString);
  }
  return 0;
}
