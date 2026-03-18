/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C0057FA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngMulDiv @ 0x1C0038200 (EngMulDiv.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0057E4C (DrvGetCurrentDpiInfoFromHDev.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     UserSetLastStatus @ 0x1C00E30B4 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(unsigned __int64 a1, int a2, INT *a3, INT *a4)
{
  INT v6; // r14d
  INT v7; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // r13
  __int64 v10; // rcx
  LONGLONG v11; // rcx
  __int64 v12; // rdi
  LARGE_INTEGER v13; // rbx
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // r15
  _OWORD *v18; // rcx
  int v19; // r15d
  INT *v20; // rcx
  INT *v21; // rcx
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  bool v24; // al
  INT v25; // edi
  INT v26; // ebx
  INT v27; // eax
  INT v28; // r8d
  INT v29; // edx
  INT v30; // ebx
  INT v31; // edi
  INT v32; // ebx
  INT v33; // eax
  INT v34; // r8d
  INT v35; // edx
  INT v36; // ebx
  INT v37; // eax
  char v39[40]; // [rsp+50h] [rbp-98h] BYREF
  INT a; // [rsp+78h] [rbp-70h]
  INT v41; // [rsp+7Ch] [rbp-6Ch]
  INT v42; // [rsp+88h] [rbp-60h]
  INT v43; // [rsp+8Ch] [rbp-5Ch]
  char v44; // [rsp+ACh] [rbp-3Ch]

  v6 = 0;
  v7 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v10);
  if ( v12 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      v24 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
         && (qword_1C0118B10 & 0x200000010000000LL) != 0
         && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
      if ( v24 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v11, (unsigned int)&AcquiredExclusiveUserCritEvent, v14, v13.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
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
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  v15 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v16 = qword_1C011A128 + (unsigned int)(unsigned __int16)a1 * dword_1C011A130;
    v17 = a1 >> 16;
    if ( ((_WORD)v17 == *(_WORD *)(v16 + 18)
       || (_WORD)v17 == 0xFFFF
       || !(_WORD)v17 && PsGetCurrentProcessWow64Process(v11))
      && (*(_BYTE *)(v16 + 17) & 1) == 0
      && *(_BYTE *)(v16 + 16) == 12 )
    {
      v15 = *(_QWORD *)v16;
    }
  }
  if ( !v15 )
  {
    UserSetLastError(1461LL);
    goto LABEL_67;
  }
  v18 = *(_OWORD **)(v15 + 160);
  if ( !v18 )
  {
LABEL_67:
    v19 = 0;
    UserSetLastError(6LL);
    goto LABEL_23;
  }
  if ( a2 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v18, (__int64)v39);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v19 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_23;
    }
    v19 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v6 = a;
        v7 = v41;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          v25 = *(unsigned __int16 *)(v15 + 154);
          v26 = *((unsigned __int16 *)gpsi + 4339);
          v27 = EngMulDiv(a, v26, v25);
          v28 = v25;
          v29 = v26;
        }
        else
        {
          v30 = *(unsigned __int16 *)(v15 + 154);
          v27 = EngMulDiv(a, 96, v30);
          v28 = v30;
          v29 = 96;
        }
        v6 = v27;
        v7 = EngMulDiv(v41, v29, v28);
      }
      if ( (v44 & 1) != 0 || (v44 & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL);
        v19 = 0;
      }
      goto LABEL_32;
    }
    if ( a2 == 1 )
    {
      if ( !v42 || (v44 & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v42, 96, 100);
        v7 = EngMulDiv(v43, 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v31 = *(unsigned __int16 *)(v15 + 154);
        v32 = *((unsigned __int16 *)gpsi + 4339);
        v33 = EngMulDiv(v6, v32, v31);
        v34 = v31;
        v35 = v32;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_32;
        v36 = *(unsigned __int16 *)(v15 + 154);
        v33 = EngMulDiv(v6, 96, v36);
        v34 = v36;
        v35 = 96;
      }
      v6 = v33;
      v7 = EngMulDiv(v7, v35, v34);
    }
LABEL_32:
    if ( v44 < 0 )
    {
      v37 = v7;
      v7 = v6;
      v6 = v37;
    }
    goto LABEL_18;
  }
  v19 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v7 = *(unsigned __int16 *)(v15 + 154);
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 1 )
    {
      v7 = 96;
      v6 = 96;
      goto LABEL_18;
    }
    v7 = *((unsigned __int16 *)gpsi + 4339);
  }
  v6 = v7;
LABEL_18:
  v20 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v20 = (INT *)W32UserProbeAddress;
  *v20 = *v20;
  v21 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v21 = (INT *)W32UserProbeAddress;
  *v21 = *v21;
  *a3 = v6;
  *a4 = v7;
LABEL_23:
  UserSessionSwitchLeaveCrit();
  return v19;
}
