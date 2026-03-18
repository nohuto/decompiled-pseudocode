/*
 * XREFs of _SetWatermarkStrings @ 0x140251AC0
 * Callers:
 *     NtUserSetWatermarkStrings @ 0x140251A80 (NtUserSetWatermarkStrings.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetProductVersionInfo@@YAHXZ @ 0x1402D1D94 (-SetProductVersionInfo@@YAHXZ.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall SetWatermarkStrings(__int64 a1, __int64 a2)
{
  HANDLE v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // r14
  int i; // esi
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  UNICODE_STRING v13; // [rsp+30h] [rbp-48h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-38h] BYREF

  SourceString = 0LL;
  v3 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63536);
  if ( PsGetCurrentProcessId() != v3 )
    return 0LL;
  v7 = W32GetUserSessionState(v5, v4) + 66264;
  for ( i = 0; !i; i = 1 )
  {
    *(_DWORD *)(&v13.MaximumLength + 1) = 0;
    *(_DWORD *)&v13.Length = RtlReadULongFromUser(a1);
    ULong64FromUser = RtlReadULong64FromUser(a1 + 8);
    v13.Buffer = (PWSTR)ULong64FromUser;
    SourceString = v13;
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = ULong64FromUser + v13.Length + 2LL;
    if ( v10 <= ULong64FromUser || v10 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( v13.Length > v13.MaximumLength )
    {
      if ( (v13.Length & 1) != 0 )
LABEL_15:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 84LL);
      ExRaiseAccessViolation();
    }
    if ( (v13.Length & 1) != 0 )
      goto LABEL_15;
    *(_QWORD *)(v7 + 144) = v7 + 152;
    v11 = v7 + 16LL * i;
    *(_WORD *)(v11 + 136) = 0;
    *(_WORD *)(v11 + 138) = 256;
    RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 136), &SourceString);
    v12 = *(unsigned __int16 *)(v11 + 136);
    if ( v12 >= (unsigned __int64)*(unsigned __int16 *)(v11 + 138) - 2 )
      v12 = *(unsigned __int16 *)(v7 + 16LL * i + 138) - 2LL;
    *(_WORD *)(*(_QWORD *)(v7 + 144) + 2 * (v12 >> 1)) = 0;
  }
  return SetProductVersionInfo();
}
