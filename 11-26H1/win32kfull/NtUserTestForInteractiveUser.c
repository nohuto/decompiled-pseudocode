/*
 * XREFs of NtUserTestForInteractiveUser @ 0x1402C03C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserTestForInteractiveUser(void *Src)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  v2 = 0;
  LODWORD(v8) = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 8651);
  v8 = 0LL;
  RtlCopyFromUser(&v8, Src, 8uLL);
  LODWORD(Src) = v8;
  v9 = v8;
  UserSessionState = W32GetUserSessionState(v4, v3);
  if ( __PAIR64__(HIDWORD(v8), (unsigned int)Src) != *(_QWORD *)(*(_QWORD *)(UserSessionState + 63512) + 152LL) )
    v2 = -1073741790;
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
