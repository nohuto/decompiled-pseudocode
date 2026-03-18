/*
 * XREFs of _RegisterUserApiHook @ 0x140237F88
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x140237F00 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetHmodTableIndex @ 0x140026E70 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x140027098 (AddHmodDependency.c)
 *     RemoveHmodDependency @ 0x140027130 (RemoveHmodDependency.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140250434 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall RegisterUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 UserSessionState; // rax
  __int64 v18; // rbx
  unsigned __int64 ULong64FromUser; // rsi
  ULONG64 v20; // rcx
  char *v21; // r8
  ULONG64 v22; // rcx
  unsigned __int64 v23; // rdi
  ULONG64 v24; // rcx
  char *v25; // r8
  ULONG64 v26; // rcx
  int HmodTableIndex; // eax
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v35; // [rsp+30h] [rbp-A8h]
  int v36; // [rsp+40h] [rbp-98h]
  int v37; // [rsp+50h] [rbp-88h]
  int ULongFromUser; // [rsp+60h] [rbp-78h]

  if ( IsInsideUserApiHook(a1, a2) || (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_66;
  if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( *(_DWORD *)(CurrentProcessWin32Process + 764) != luidSystem[0] )
      goto LABEL_66;
    v10 = PsGetCurrentProcessWin32Process(*(_QWORD *)luidSystem);
    if ( v10 )
      v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
    if ( *(_DWORD *)(v10 + 768) != luidSystem[1] )
      goto LABEL_66;
    v11 = (unsigned __int8)HasTcbPrivilege() == 0;
  }
  else
  {
    v14 = PsGetCurrentProcessWin32Process(v8);
    if ( v14 )
      v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
    if ( *(_DWORD *)(v14 + 764) != luidSystem[0] )
      goto LABEL_66;
    v15 = PsGetCurrentProcessWin32Process(*(_QWORD *)luidSystem);
    if ( v15 )
      v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
    v16 = luidSystem[1];
    if ( *(_DWORD *)(v15 + 768) != (_DWORD)v16 )
      goto LABEL_66;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)luidSystem, v16);
    v11 = (unsigned int)IsPrivileged(UserSessionState + 42568) == 0;
  }
  if ( v11 )
  {
LABEL_66:
    v28 = 5;
    goto LABEL_67;
  }
  v18 = W32GetUserSessionState(v13, v12);
  ULongFromUser = RtlReadULongFromUser(a1);
  ULong64FromUser = RtlReadULong64FromUser(a1 + 8);
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v20 = ULong64FromUser + (unsigned __int16)ULongFromUser + 2LL;
  if ( v20 <= ULong64FromUser || v20 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)ULongFromUser > HIWORD(ULongFromUser) )
  {
    if ( (ULongFromUser & 1) == 0 )
      goto LABEL_64;
    goto LABEL_63;
  }
  if ( (ULongFromUser & 1) != 0 )
  {
LABEL_63:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2952LL);
LABEL_64:
    ExRaiseAccessViolation();
  }
  v37 = RtlReadULongFromUser(a2);
  v21 = (char *)RtlReadULong64FromUser(a2 + 8);
  if ( ((unsigned __int8)v21 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = (ULONG64)&v21[(unsigned __int16)v37 + 2];
  if ( v22 <= (unsigned __int64)v21 || v22 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v37 > HIWORD(v37) )
  {
    if ( (v37 & 1) == 0 )
      goto LABEL_60;
    goto LABEL_59;
  }
  if ( (v37 & 1) != 0 )
  {
LABEL_59:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2955LL);
LABEL_60:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyW((char *)(v18 + 64212), 260LL, v21);
  v36 = RtlReadULongFromUser(a3);
  v23 = RtlReadULong64FromUser(a3 + 8);
  if ( (v23 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = v23 + (unsigned __int16)v36 + 2LL;
  if ( v24 <= v23 || v24 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v36 > HIWORD(v36) )
  {
    if ( (v36 & 1) == 0 )
      goto LABEL_56;
    goto LABEL_55;
  }
  if ( (v36 & 1) != 0 )
  {
LABEL_55:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2961LL);
LABEL_56:
    ExRaiseAccessViolation();
  }
  v35 = RtlReadULongFromUser(a4);
  v25 = (char *)RtlReadULong64FromUser(a4 + 8);
  if ( ((unsigned __int8)v25 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v26 = (ULONG64)&v25[(unsigned __int16)v35 + 2];
  if ( v26 <= (unsigned __int64)v25 || v26 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v35 > HIWORD(v35) )
  {
    if ( (v35 & 1) == 0 )
      goto LABEL_52;
    goto LABEL_51;
  }
  if ( (v35 & 1) != 0 )
  {
LABEL_51:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2964LL);
LABEL_52:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyW((char *)(v18 + 64736), 260LL, v25);
  HmodTableIndex = GetHmodTableIndex(ULong64FromUser);
  *(_DWORD *)(v18 + 64208) = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v28 = 126;
LABEL_67:
    UserSetLastError(v28);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v29 = GetHmodTableIndex(v23);
  *(_DWORD *)(v18 + 64732) = v29;
  if ( v29 == -1 )
  {
    UserSetLastError(126);
    RemoveHmodDependency(*(_DWORD *)(v18 + 64208));
    *(_DWORD *)(v18 + 64208) = -1;
    return 0LL;
  }
  AddHmodDependency(v29);
  v31 = PsGetCurrentProcessWin32Process(v30);
  if ( v31 )
  {
    v33 = -*(_QWORD *)v31;
    v32 = -(__int64)(*(_QWORD *)v31 != 0LL);
    v31 &= v32;
  }
  *(_QWORD *)(v18 + 64200) = v31;
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v33, v32) + 19904), 0x10u);
  return 1LL;
}
