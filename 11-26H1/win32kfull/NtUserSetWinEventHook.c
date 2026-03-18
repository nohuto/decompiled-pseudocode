/*
 * XREFs of NtUserSetWinEventHook @ 0x14013BB00
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013BF44 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     _SetWinEventHook @ 0x14013C5E8 (_SetWinEventHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v12; // rbx
  int v13; // r9d
  __int64 *v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v18; // rcx
  __int128 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v21; // [rsp+68h] [rbp-A0h]
  __int128 v22; // [rsp+80h] [rbp-88h]
  _BYTE v23[48]; // [rsp+90h] [rbp-78h] BYREF

  v20 = a5;
  EnterLeaveCritShared::EnterLeaveCritShared(&v19, 1LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004);
    v12 = 0LL;
    goto LABEL_6;
  }
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(v23);
  v12 = 0LL;
  v13 = 0;
  if ( (a8 & 4) != 0 && a3 && a4 )
  {
    v19 = 0LL;
    LODWORD(v19) = RtlReadULongFromUser(a4);
    ULong64FromUser = RtlReadULong64FromUser(a4 + 8);
    v13 = ULong64FromUser;
    *((_QWORD *)&v19 + 1) = ULong64FromUser;
    v22 = v19;
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = ULong64FromUser + (unsigned __int16)v19 + 2LL;
    if ( v18 <= ULong64FromUser || v18 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v19 > WORD1(v19) )
    {
      if ( (v19 & 1) == 0 )
        goto LABEL_19;
    }
    else if ( (v19 & 1) == 0 )
    {
      v21 = ULong64FromUser;
      goto LABEL_3;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3614LL);
LABEL_19:
    ExRaiseAccessViolation();
  }
LABEL_3:
  v14 = (__int64 *)SetWinEventHook(a1, a2, a3, v13, v20, (int)a6, a7, a8);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v23);
  if ( v14 )
    v12 = *v14;
  EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v12);
LABEL_6:
  UserSessionSwitchLeaveCrit(v15);
  return v12;
}
