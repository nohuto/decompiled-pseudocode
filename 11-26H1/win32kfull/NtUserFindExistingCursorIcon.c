/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x14001FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x14001E2C8 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  struct tagCURSOR *v8; // rsi
  unsigned __int64 ULong64FromUser; // rdi
  ULONG64 v10; // rcx
  unsigned __int64 v11; // rax
  ULONG64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r8
  _WORD *v16; // rax
  NTSTATUS v17; // r9d
  __int64 v18; // rdx
  __int16 v19; // r11
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // rax
  int v23[10]; // [rsp+38h] [rbp-300h] BYREF
  __int64 v24; // [rsp+60h] [rbp-2D8h]
  struct _UNICODE_STRING v25; // [rsp+70h] [rbp-2C8h]
  __int128 v26; // [rsp+80h] [rbp-2B8h]
  _BYTE *v27; // [rsp+90h] [rbp-2A8h]
  __int64 v28; // [rsp+98h] [rbp-2A0h]
  struct tagCURSOR *v29; // [rsp+A0h] [rbp-298h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-290h]
  __int64 v31; // [rsp+B0h] [rbp-288h]
  __int64 v32; // [rsp+B8h] [rbp-280h]
  struct _UNICODE_STRING v33; // [rsp+C0h] [rbp-278h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-268h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-258h]
  __int128 v36; // [rsp+F0h] [rbp-248h]
  _BYTE v37[512]; // [rsp+100h] [rbp-238h] BYREF

  v33 = 0LL;
  v6 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v23, 1LL);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v34 = *(_OWORD *)a3;
  v35 = *(_QWORD *)(a3 + 16);
  if ( (_QWORD)v34 )
  {
    LOBYTE(v7) = 3;
    v8 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(v34, v7);
    v29 = v8;
    if ( !v8 )
    {
      v24 = 0LL;
      goto LABEL_37;
    }
  }
  else
  {
    v8 = 0LL;
    v29 = 0LL;
  }
  v26 = 0LL;
  LODWORD(v26) = RtlReadULongFromUser(a1);
  ULong64FromUser = RtlReadULong64FromUser(a1 + 8);
  *((_QWORD *)&v26 + 1) = ULong64FromUser;
  v36 = v26;
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = ULong64FromUser + (unsigned __int16)v26 + 2LL;
  if ( v10 <= ULong64FromUser || v10 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v26 > WORD1(v26) )
  {
    if ( (v26 & 1) == 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( (v26 & 1) != 0 )
  {
LABEL_26:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8057LL);
LABEL_27:
    ExRaiseAccessViolation();
  }
  v25 = 0LL;
  *(_DWORD *)&v25.Length = RtlReadULongFromUser(a2);
  v11 = RtlReadULong64FromUser(a2 + 8);
  v25.Buffer = (PWSTR)v11;
  v33 = v25;
  if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + v25.Length + 2LL;
    if ( v12 <= v11 || v12 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( v25.Length > v25.MaximumLength || (v25.Length & 1) != 0 )
    {
      if ( (v25.Length & 1) != 0 )
      {
        v23[0] = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8060LL);
      }
      ExRaiseAccessViolation();
    }
  }
  v14 = 2147483646LL;
  v32 = 2147483646LL;
  v30 = ULong64FromUser;
  v15 = 256LL;
  v31 = 256LL;
  v16 = v37;
  v27 = v37;
  v17 = 0;
  v18 = 0LL;
  v28 = 0LL;
  while ( v15 )
  {
    if ( !v14 )
      goto LABEL_33;
    v19 = *(_WORD *)ULong64FromUser;
    if ( !*(_WORD *)ULong64FromUser )
      goto LABEL_33;
    ULong64FromUser += 2LL;
    v30 = ULong64FromUser;
    *v16++ = v19;
    v27 = v16;
    v31 = --v15;
    v32 = --v14;
    v28 = ++v18;
  }
  v27 = --v16;
  v28 = --v18;
  v17 = -2147483643;
LABEL_33:
  *v16 = 0;
  if ( v17 >= 0 )
  {
    Atom = UserFindAtom(v37, v18);
    if ( Atom )
    {
      ExistingCursorIcon = _FindExistingCursorIcon(Atom, &v33, v8, (struct tagCURSORFIND *)&v34);
      if ( ExistingCursorIcon )
        v6 = *(_QWORD *)ExistingCursorIcon;
    }
  }
  else
  {
    v24 = 0LL;
    UserSetLastStatus(v17, 1);
  }
LABEL_37:
  UserSessionSwitchLeaveCrit(v13);
  return v6;
}
