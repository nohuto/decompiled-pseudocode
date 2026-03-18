/*
 * XREFs of NtUserGetWOWClass @ 0x1402B5170
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _GetWOWClass @ 0x1402A4A94 (_GetWOWClass.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rdi
  char *ULong64FromUser; // rdx
  ULONG64 v7; // r8
  _QWORD *WOWClass; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  int ULongFromUser; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v5 = PtiCurrent(v4);
  ULongFromUser = RtlReadULongFromUser(a2);
  ULong64FromUser = (char *)RtlReadULong64FromUser(a2 + 8);
  if ( ((unsigned __int8)ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (ULONG64)&ULong64FromUser[(unsigned __int16)ULongFromUser + 2];
  if ( v7 <= (unsigned __int64)ULong64FromUser || v7 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)ULongFromUser > HIWORD(ULongFromUser) )
  {
    if ( (ULongFromUser & 1) == 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (ULongFromUser & 1) != 0 )
  {
LABEL_10:
    LODWORD(v13) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2984);
LABEL_11:
    ExRaiseAccessViolation();
  }
  WOWClass = GetWOWClass(a1, ULong64FromUser);
  v10 = WOWClass;
  if ( WOWClass )
    v10 = (_QWORD *)(WOWClass[1] - *((_QWORD *)v5 + 63));
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
