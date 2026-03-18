/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1401B2760
 * Callers:
 *     NtUserSwitchDesktop @ 0x14025C610 (NtUserSwitchDesktop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     PrepareGammaRampData @ 0x14023C4E0 (PrepareGammaRampData.c)
 *     FadeDesktop @ 0x1402A4ED0 (FadeDesktop.c)
 */

__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v5; // r12d
  ULONG_PTR v6; // rsi
  int v9; // r13d
  BOOL v10; // r14d
  HANDLE v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  int v17; // r14d
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v27; // rax
  int v28; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+50h] [rbp-20h]
  unsigned int v33; // [rsp+C0h] [rbp+50h] BYREF

  v5 = 0;
  v6 = 0LL;
  v33 = 0;
  BugCheckParameter3 = 0LL;
  v28 = 0;
  v9 = 0;
  v10 = 1;
  v11 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63536);
  if ( PsGetCurrentProcessId() != v11 )
    return 3221225506LL;
  if ( a2 == *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19176) )
    return 0LL;
  v16 = a5;
  if ( a2 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19176) )
    {
      v15 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
      {
        v15 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 19176) + 8LL);
        if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
          v10 = v16 == 0;
      }
    }
  }
  v31 = -1LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  if ( !v10 )
    goto LABEL_9;
  if ( !*(_DWORD *)(W32GetUserSessionState(v15, v14) + 43000) )
  {
    v9 = 1;
    *(_DWORD *)(W32GetUserSessionState(v24, v23) + 43000) = 1;
    if ( (int)PrepareGammaRampData(&v33, &BugCheckParameter3, &v28) < 0 )
    {
      v6 = BugCheckParameter3;
    }
    else
    {
      if ( v31 != -1 )
      {
        BugCheckParameter4 = PtiCurrent(v25);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      }
      v27 = PtiCurrent(v25);
      v6 = BugCheckParameter3;
      BugCheckParameter2[0] = *((_QWORD *)v27 + 47);
      *((_QWORD *)v27 + 47) = BugCheckParameter2;
      v31 = (__int64)RestoreGammaRamp;
      BugCheckParameter2[1] = v6;
    }
    v5 = v33;
  }
  if ( v28 )
  {
    LOBYTE(v23) = 1;
    v18 = a4 >> 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v33, v23);
    FadeDesktop(v5, v6, v18, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v33);
    v17 = 1;
  }
  else
  {
LABEL_9:
    v17 = 0;
    v18 = a4 >> 1;
  }
  v21 = xxxSwitchDesktop(a1, a2, 0LL);
  if ( v17 )
  {
    LOBYTE(v19) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v33, v19);
    FadeDesktop(v5, v6, v18, 1LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v33);
  }
  if ( v9 )
    *(_DWORD *)(W32GetUserSessionState(v20, v19) + 43000) = 0;
  if ( v31 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
  return v21;
}
