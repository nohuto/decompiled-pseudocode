/*
 * XREFs of NtUserSetCursorIconDataEx @ 0x140027F50
 * Callers:
 *     NtUserSetCursorIconData @ 0x1402BC750 (NtUserSetCursorIconData.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

_BOOL8 __fastcall NtUserSetCursorIconDataEx(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  struct tagCURSOR *v12; // r14
  unsigned __int64 ULong64FromUser; // rdx
  WCHAR *v14; // r9
  unsigned int v15; // ebx
  ULONG64 v16; // rcx
  BOOL v17; // ebx
  struct _UNICODE_STRING v19; // [rsp+40h] [rbp-138h]
  struct _UNICODE_STRING v20; // [rsp+50h] [rbp-128h] BYREF
  struct _UNICODE_STRING v21; // [rsp+60h] [rbp-118h]
  struct _UNICODE_STRING v22; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v23[8]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+88h] [rbp-F0h]
  __int128 v25; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v26; // [rsp+B0h] [rbp-C8h]
  __int128 v27; // [rsp+C0h] [rbp-B8h]
  __int128 v28; // [rsp+D0h] [rbp-A8h]
  __int128 v29; // [rsp+E0h] [rbp-98h]
  __int128 v30; // [rsp+F0h] [rbp-88h]
  __int128 v31; // [rsp+100h] [rbp-78h]
  __int128 v32; // [rsp+110h] [rbp-68h]
  __int64 v33; // [rsp+120h] [rbp-58h]

  v20 = 0LL;
  v22 = 0LL;
  memset_0(&v25, 0, 0x88uLL);
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  LOBYTE(v9) = 3;
  v10 = HMValidateHandleWithDescriptor(a1, v9);
  v12 = (struct tagCURSOR *)v10;
  if ( !v10 )
  {
    v17 = 0;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v10 + 80) & 0x800) == 0 )
  {
    v17 = 0;
    UserSetLastError(0);
    goto LABEL_36;
  }
  *(_DWORD *)(&v21.MaximumLength + 1) = 0;
  *(_DWORD *)&v21.Length = RtlReadULongFromUser(a2);
  v21.Buffer = (PWSTR)RtlReadULong64FromUser(a2 + 8);
  v20 = v21;
  *(_DWORD *)(&v19.MaximumLength + 1) = 0;
  *(_DWORD *)&v19.Length = RtlReadULongFromUser(a3);
  ULong64FromUser = RtlReadULong64FromUser(a3 + 8);
  v19.Buffer = (PWSTR)ULong64FromUser;
  v22 = v19;
  if ( ((__int64)v21.Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (PWSTR)((char *)v20.Buffer + v20.Length + 2);
  if ( v14 <= v20.Buffer || (unsigned __int64)v14 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( v20.Length > v20.MaximumLength )
  {
    if ( (v20.Length & 1) == 0 )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( (v20.Length & 1) != 0 )
  {
LABEL_33:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8154LL);
LABEL_34:
    ExRaiseAccessViolation();
  }
  if ( (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = ULong64FromUser + v19.Length + 2LL;
    if ( v16 <= ULong64FromUser || v16 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( v19.Length > v19.MaximumLength || (v19.Length & 1) != 0 )
    {
      if ( (v19.Length & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8155LL);
      ExRaiseAccessViolation();
    }
  }
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v25 = *(_OWORD *)a4;
  v26 = *(_OWORD *)(a4 + 16);
  v27 = *(_OWORD *)(a4 + 32);
  v28 = *(_OWORD *)(a4 + 48);
  v29 = *(_OWORD *)(a4 + 64);
  v30 = *(_OWORD *)(a4 + 80);
  v31 = *(_OWORD *)(a4 + 96);
  v32 = *(_OWORD *)(a4 + 112);
  v33 = *(_QWORD *)(a4 + 128);
  if ( (DWORD2(v26) & 0xFFFFEFB0) != 0 )
  {
    UserSetLastError(1004);
    v17 = 0;
  }
  else
  {
    if ( (BYTE8(v26) & 8) == 0 )
    {
      v15 = 0;
LABEL_14:
      ProbeForRead(*((volatile void **)&v31 + 1), v15, 4u);
      v17 = _SetCursorIconDataEx(v12, &v20, &v22, (struct tagCURSORDATA *)&v25, v15, a5);
      goto LABEL_36;
    }
    v11 = (unsigned __int64)SDWORD1(v31) >> 16;
    LOWORD(v11) = WORD1(v31) | WORD3(v31);
    if ( WORD1(v31) | WORD3(v31) )
    {
      v17 = 0;
    }
    else
    {
      v11 = *((_QWORD *)&v32 + 1);
      if ( v32 == __PAIR128__(8LL * (int)v31, *((_QWORD *)&v32 + 1) + 4LL * SDWORD1(v31)) )
      {
        v15 = 8 * (DWORD1(v31) + v31);
        goto LABEL_14;
      }
      v17 = 0;
    }
  }
LABEL_36:
  if ( v23[0] )
    --*(_DWORD *)(v24 + 28);
  UserSessionSwitchLeaveCrit(v11);
  return v17;
}
