/*
 * XREFs of WerpEscalationIsDisabled @ 0x18008C7D0
 * Callers:
 *     WerEscalationLazyInit @ 0x18008C318 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D1398 (WerpEscalationReadUlongFromKey.c)
 */

__int64 WerpEscalationIsDisabled()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  __int128 v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+70h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  Handle = 0LL;
  v10 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation");
  v5 = 48;
  p_DestinationString = &DestinationString;
  v6 = 0LL;
  v8 = 64;
  v9 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v5) >= 0 )
  {
    v3 = WerpEscalationReadUlongFromKey(Handle, L"DisableEscalation", &v10);
    v1 = v10;
    if ( v3 < 0 )
      v1 = 0;
  }
  else
  {
    v1 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  LOBYTE(v0) = v1 != 0;
  return v0;
}
