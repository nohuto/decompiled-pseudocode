/*
 * XREFs of NtUserRegisterWindowMessage @ 0x140189D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserRegisterWindowMessage(__int64 a1)
{
  unsigned __int64 ULong64FromUser; // rax
  __int16 *v3; // rdx
  ULONG64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // r11
  __int64 v7; // r10
  _WORD *v8; // rax
  NTSTATUS v9; // ecx
  __int64 v10; // r9
  __int16 v11; // di
  int ULongFromUser; // [rsp+40h] [rbp-268h]
  __int128 v14; // [rsp+80h] [rbp-228h]
  _BYTE v15[512]; // [rsp+90h] [rbp-218h] BYREF

  ULongFromUser = RtlReadULongFromUser(a1);
  ULong64FromUser = RtlReadULong64FromUser(a1 + 8);
  v3 = (__int16 *)ULong64FromUser;
  HIWORD(v14) = HIWORD(ULong64FromUser);
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = ULong64FromUser + (unsigned __int16)ULongFromUser + 2LL;
  if ( v4 <= ULong64FromUser || v4 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)ULongFromUser > HIWORD(ULongFromUser) )
  {
    if ( (ULongFromUser & 1) == 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (ULongFromUser & 1) != 0 )
  {
LABEL_15:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10666LL);
LABEL_16:
    ExRaiseAccessViolation();
  }
  v5 = 0;
  v6 = 2147483646LL;
  v7 = 256LL;
  v8 = v15;
  v9 = 0;
  v10 = 0LL;
  while ( v7 )
  {
    if ( !v6 )
      goto LABEL_11;
    v11 = *v3;
    if ( !*v3 )
      goto LABEL_11;
    ++v3;
    *v8++ = v11;
    --v7;
    --v6;
    ++v10;
  }
  --v8;
  v9 = -2147483643;
LABEL_11:
  *v8 = 0;
  if ( v9 < 0 )
    UserSetLastStatus(v9, 1);
  else
    return (unsigned __int16)UserAddAtomEx(v15, 0LL, 2LL);
  return v5;
}
