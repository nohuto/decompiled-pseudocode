/*
 * XREFs of NtUserUnregisterClass @ 0x1401C4010
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _UnregisterClass @ 0x1401C4174 (_UnregisterClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserUnregisterClass(__int64 a1, __int64 a2, void *a3)
{
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v7; // r8
  __int64 v8; // rcx
  int v9; // ebx
  int ULongFromUser; // [rsp+40h] [rbp-48h]
  __int128 Src; // [rsp+60h] [rbp-28h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h]

  Src = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  ULongFromUser = RtlReadULongFromUser(a1);
  ULong64FromUser = RtlReadULong64FromUser(a1 + 8);
  if ( (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = ULong64FromUser + (unsigned __int16)ULongFromUser + 2LL;
    if ( v7 <= ULong64FromUser || v7 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)ULongFromUser > HIWORD(ULongFromUser) || (ULongFromUser & 1) != 0 )
    {
      if ( (ULongFromUser & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10908LL);
      ExRaiseAccessViolation();
    }
  }
  v9 = UnregisterClass(ULong64FromUser, a2, &Src);
  if ( v9 )
    RtlCopyToUser(a3, &Src, 0x18uLL);
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
