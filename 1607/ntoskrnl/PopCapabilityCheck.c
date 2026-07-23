/*
 * XREFs of PopCapabilityCheck @ 0x140201DDC
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140683788 (RtlCapabilityCheck.c)
 */

char __fastcall PopCapabilityCheck(__int64 a1)
{
  char v1; // bl
  const wchar_t *v2; // rcx
  __int64 v3; // rax
  NTSTATUS v4; // eax
  char v5; // cl
  UNICODE_STRING CapabilityName; // [rsp+20h] [rbp-18h] BYREF
  __int64 HasCapability; // [rsp+40h] [rbp+8h] BYREF

  HasCapability = a1;
  v1 = 0;
  LOBYTE(HasCapability) = 0;
  *(_DWORD *)&CapabilityName.Length = 0;
  v2 = L"ID_CAP_SCREENOFF";
  CapabilityName.Buffer = 0LL;
  v3 = 0x7FFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( v3 )
  {
    CapabilityName.Buffer = L"ID_CAP_SCREENOFF";
    CapabilityName.Length = 2 * (0x7FFF - v3);
    CapabilityName.MaximumLength = CapabilityName.Length + 2;
    v4 = RtlCapabilityCheck(0LL, &CapabilityName, (PBOOLEAN)&HasCapability);
    v5 = HasCapability;
    if ( v4 < 0 )
      return 0;
    return v5;
  }
  return v1;
}
