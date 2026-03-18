/*
 * XREFs of NtUserFindWindowEx @ 0x1400208F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int16 Atom; // di
  _BYTE *v15; // rsi
  unsigned int ULongFromUser; // eax
  unsigned __int16 v17; // bx
  unsigned int v18; // r14d
  unsigned __int64 ULong64FromUser; // rax
  __int16 *v20; // rdx
  ULONG64 v21; // r8
  ULONG64 v22; // rcx
  __int64 v23; // rax
  _WORD *v24; // r8
  int v25; // r11d
  __int64 v26; // r10
  __int16 v27; // r9
  unsigned int v28; // eax
  unsigned __int16 v29; // r14
  unsigned int v30; // r15d
  unsigned __int64 v31; // rax
  const void *v32; // rbx
  unsigned __int64 v33; // rdx
  __int64 *v34; // r14
  unsigned __int64 v35; // r14
  __int64 v36; // rax
  bool v37; // r15
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rbx
  const wchar_t *v41; // rdx
  __int64 *v43; // rax
  __int64 v44; // rax
  char v45; // [rsp+20h] [rbp-318h]
  _QWORD v47[3]; // [rsp+38h] [rbp-300h] BYREF
  _BYTE *v48; // [rsp+50h] [rbp-2E8h]
  _BYTE *v49; // [rsp+58h] [rbp-2E0h]
  __int64 v50; // [rsp+60h] [rbp-2D8h]
  __int128 v51; // [rsp+70h] [rbp-2C8h]
  __int128 v52; // [rsp+80h] [rbp-2B8h]
  __int16 *v53; // [rsp+90h] [rbp-2A8h]
  __int64 v54; // [rsp+98h] [rbp-2A0h]
  __int64 v55; // [rsp+A0h] [rbp-298h]
  __int64 v56; // [rsp+A8h] [rbp-290h]
  __int64 v57; // [rsp+B0h] [rbp-288h]
  _BYTE v58[8]; // [rsp+B8h] [rbp-280h] BYREF
  ULONG64 v59; // [rsp+C0h] [rbp-278h]
  __int128 v60; // [rsp+D0h] [rbp-268h]
  __int128 v61; // [rsp+E0h] [rbp-258h]
  _BYTE v62[512]; // [rsp+F0h] [rbp-248h] BYREF

  v7 = 0LL;
  v56 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v47, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v58);
  if ( a1 == -3 )
  {
    v9 = 0LL;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v8);
    if ( CurrentThreadWin32Thread )
      v11 = *CurrentThreadWin32Thread;
    else
      v11 = 0LL;
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 488);
      if ( v12 )
        v9 = *(_QWORD *)(v12 + 112);
    }
  }
  else if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_73;
  }
  else
  {
    v9 = 0LL;
  }
  if ( a2 )
  {
    v13 = ValidateHwnd(a2);
    if ( !v13 )
      goto LABEL_73;
  }
  else
  {
    v13 = 0LL;
  }
  Atom = 0;
  v15 = 0LL;
  v48 = 0LL;
  v45 = 0;
  v51 = 0LL;
  ULongFromUser = RtlReadULongFromUser(a3);
  v17 = ULongFromUser;
  LODWORD(v51) = ULongFromUser;
  v18 = HIWORD(ULongFromUser);
  ULong64FromUser = RtlReadULong64FromUser(a3 + 8);
  v20 = (__int16 *)ULong64FromUser;
  *((_QWORD *)&v51 + 1) = ULong64FromUser;
  v60 = v51;
  if ( (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = ULong64FromUser + v17 + 2LL;
    if ( v21 <= ULong64FromUser || v21 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( v17 > (unsigned __int16)v18 || (v17 & 1) != 0 )
    {
      if ( (v51 & 1) != 0 )
      {
        LODWORD(v47[0]) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10100LL);
      }
      ExRaiseAccessViolation();
    }
  }
  if ( ULong64FromUser && (ULong64FromUser & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v7 = 0LL;
    v22 = 2147483646LL;
    v55 = 2147483646LL;
    v53 = (__int16 *)ULong64FromUser;
    v23 = 256LL;
    v54 = 256LL;
    v24 = v62;
    v49 = v62;
    v25 = 0;
    v26 = 0LL;
    v50 = 0LL;
    while ( v23 )
    {
      if ( !v22 )
        goto LABEL_22;
      v27 = *v20;
      if ( !*v20 )
        goto LABEL_22;
      v53 = ++v20;
      *v24++ = v27;
      v49 = v24;
      v54 = --v23;
      v55 = --v22;
      v50 = ++v26;
    }
    v49 = --v24;
    v50 = v26 - 1;
    v25 = -2147483643;
LABEL_22:
    *v24 = 0;
    if ( v25 >= 0 )
      Atom = UserFindAtom(v62, v20);
    if ( !Atom )
    {
      v57 = 0LL;
      goto LABEL_73;
    }
  }
  else
  {
    Atom = WORD4(v51);
  }
  v52 = 0LL;
  v28 = RtlReadULongFromUser(a4);
  v29 = v28;
  LODWORD(v52) = v28;
  v30 = HIWORD(v28);
  v31 = RtlReadULong64FromUser(a4 + 8);
  v32 = (const void *)v31;
  *((_QWORD *)&v52 + 1) = v31;
  v61 = v52;
  if ( (v31 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v33 = v29;
  v22 = v31 + v29 + 2LL;
  if ( v22 <= v31 || v22 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( v29 > (unsigned __int16)v30 || (v29 & 1) != 0 )
  {
    if ( (v29 & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10125LL);
    ExRaiseAccessViolation();
  }
  if ( v31 )
  {
    v35 = (unsigned __int64)v29 >> 1;
    if ( (unsigned int)(v33 >> 1) + 1 > 0x100 )
    {
      v15 = (_BYTE *)Win32AllocPoolWithQuotaZInit(v33 + 2, 2020897621LL);
      v48 = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      v45 = 1;
    }
    else
    {
      v15 = v62;
      v48 = v62;
    }
    memmove(v15, v32, (unsigned __int16)v52);
    v36 = (unsigned int)v35;
    v34 = 0LL;
    *(_WORD *)&v15[2 * v36] = 0;
  }
  else
  {
    v34 = 0LL;
  }
  v37 = 0;
  if ( !v9 )
  {
    v9 = 0LL;
    v38 = (__int64 *)PsGetCurrentThreadWin32Thread(v22);
    if ( v38 )
      v39 = *v38;
    else
      v39 = 0LL;
    if ( v39 )
    {
      v22 = *(_QWORD *)(v39 + 496);
      if ( v22 )
        v9 = *(_QWORD *)(v22 + 24);
    }
    v37 = v13 == 0;
  }
  while ( 1 )
  {
    if ( !v13 )
    {
      v40 = *(__int64 **)(v9 + 112);
      goto LABEL_60;
    }
    if ( *(_QWORD *)(v13 + 104) != v9 )
      break;
    v40 = *(__int64 **)(v13 + 88);
LABEL_60:
    while ( v40 )
    {
      if ( !Atom || (v22 = *(_QWORD *)(v40[17] + 8), Atom == *(_WORD *)(v22 + 2)) )
      {
        if ( !v15
          || (!*(_DWORD *)(v40[5] + 184) ? (v41 = (const wchar_t *)szNull) : (v41 = (const wchar_t *)v40[23]),
              !_wcsicmp((const wchar_t *)v15, v41)) )
        {
          v34 = v40;
          break;
        }
      }
      v40 = (__int64 *)v40[11];
    }
    if ( v34 )
    {
      v7 = *v34;
      goto LABEL_71;
    }
    if ( !v37 )
      break;
    v37 = 0;
    v34 = 0LL;
    v9 = 0LL;
    v43 = (__int64 *)PsGetCurrentThreadWin32Thread(v22);
    if ( v43 )
      v44 = *v43;
    else
      v44 = 0LL;
    if ( v44 )
    {
      v22 = *(_QWORD *)(v44 + 488);
      if ( v22 )
        v9 = *(_QWORD *)(v22 + 112);
    }
    v13 = 0LL;
  }
  v7 = 0LL;
LABEL_71:
  if ( v45 )
    Win32FreePool(v15);
LABEL_73:
  if ( v58[0] )
  {
    v22 = v59;
    --*(_DWORD *)(v59 + 28);
  }
  UserSessionSwitchLeaveCrit(v22);
  return v7;
}
