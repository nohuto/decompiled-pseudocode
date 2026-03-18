/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C0047150
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0047008 (DrvGetCurrentDpiInfoFromHDev.c)
 *     EngMulDiv @ 0x1C0048860 (EngMulDiv.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     UserSetLastStatus @ 0x1C00D5A5C (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(unsigned __int64 a1, int a2, INT *a3, INT *a4)
{
  INT v6; // r15d
  INT v7; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  unsigned int v9; // esi
  __int64 v10; // rcx
  LONGLONG v11; // rcx
  __int64 v12; // rdi
  LARGE_INTEGER v13; // rbx
  int v14; // r8d
  char v15; // al
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned __int64 v19; // r12
  __int64 v20; // rcx
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  INT v25; // edi
  INT v26; // ebx
  INT v27; // eax
  INT v28; // r8d
  INT v29; // edx
  INT v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx
  INT v33; // edi
  INT v34; // ebx
  INT v35; // eax
  INT v36; // r8d
  INT v37; // edx
  INT v38; // ebx
  INT v39; // eax
  INT *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  INT *v43; // rcx
  char v47[40]; // [rsp+50h] [rbp-98h] BYREF
  INT a; // [rsp+78h] [rbp-70h]
  INT v49; // [rsp+7Ch] [rbp-6Ch]
  INT v50; // [rsp+88h] [rbp-60h]
  INT v51; // [rsp+8Ch] [rbp-5Ch]
  char v52; // [rsp+ACh] [rbp-3Ch]
  struct tagTHREADINFO *v53; // [rsp+F0h] [rbp+8h]

  v6 = 0;
  v7 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 1;
  v53 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v10);
  if ( v12 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8 )
      {
        v15 = 1;
        v11 = 0LL;
      }
      else
      {
        v11 = 0LL;
        v15 = 0;
      }
      if ( v15 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(0, (unsigned int)&AcquiredExclusiveUserCritEvent, v14, v13.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v11 = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        Template_xqx(
          v11,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v14,
          0,
          1000 * v13.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v53;
  gbValidateHandleForIL = 1;
  v16 = 0LL;
  v17 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v18 = qword_1C0102D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0102D50;
    v19 = a1 >> 16;
    if ( ((_WORD)v19 == *(_WORD *)(v18 + 18)
       || (_WORD)v19 == 0xFFFF
       || !(_WORD)v19 && PsGetCurrentProcessWow64Process(v11, v17, 0LL))
      && (*(_BYTE *)(v18 + 17) & 1) == 0
      && *(_BYTE *)(v18 + 16) == 12 )
    {
      v16 = *(_QWORD *)v18;
    }
  }
  if ( !v16 )
  {
    UserSetLastError(1461LL, v17);
    v9 = 0;
    UserSetLastError(6LL, v41);
    goto LABEL_64;
  }
  if ( a2 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_OWORD **)(v16 + 160), (__int64)v47);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v9 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_64;
    }
    if ( a2 == 2 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0 )
      {
        v6 = a;
        v7 = v49;
      }
      else
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0 )
        {
          v25 = *(unsigned __int16 *)(v16 + 152);
          v26 = *((unsigned __int16 *)gpsi + 3643);
          v27 = EngMulDiv(a, v26, v25);
          v28 = v25;
          v29 = v26;
        }
        else
        {
          v30 = *(unsigned __int16 *)(v16 + 152);
          v27 = EngMulDiv(a, 96, v30);
          v28 = v30;
          v29 = 96;
        }
        v6 = v27;
        v7 = EngMulDiv(v49, v29, v28);
      }
      if ( (v52 & 1) != 0 || (v52 & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL, v23);
        v9 = 0;
      }
      goto LABEL_56;
    }
    if ( a2 == 1 )
    {
      v31 = (unsigned int)v50;
      if ( !v50 || (v52 & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v50, 96, 100);
        v7 = EngMulDiv(v51, 96, 100);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0 )
      {
        v33 = *(unsigned __int16 *)(v16 + 152);
        v34 = *((unsigned __int16 *)gpsi + 3643);
        v35 = EngMulDiv(v6, v34, v33);
        v36 = v33;
        v37 = v34;
      }
      else
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0 )
          goto LABEL_56;
        v38 = *(unsigned __int16 *)(v16 + 152);
        v35 = EngMulDiv(v6, 96, v38);
        v36 = v38;
        v37 = 96;
      }
      v6 = v35;
      v7 = EngMulDiv(v7, v37, v36);
    }
LABEL_56:
    if ( v52 < 0 )
    {
      v39 = v7;
      v7 = v6;
      v6 = v39;
    }
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) != 0 )
  {
    v7 = *(unsigned __int16 *)(v16 + 152);
  }
  else
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) == 0 )
    {
      v7 = 96;
      v6 = 96;
      goto LABEL_58;
    }
    v7 = *((unsigned __int16 *)gpsi + 3643);
  }
  v6 = v7;
LABEL_58:
  v42 = (__int64)a3;
  v40 = a3;
  if ( a3 >= W32UserProbeAddress )
    v40 = (INT *)W32UserProbeAddress;
  *v40 = *v40;
  v43 = a4;
  if ( a4 >= W32UserProbeAddress )
    v43 = (INT *)W32UserProbeAddress;
  *v43 = *v43;
  *a3 = v6;
  *a4 = v7;
LABEL_64:
  UserSessionSwitchLeaveCrit((__int64)v43, v42);
  return v9;
}
