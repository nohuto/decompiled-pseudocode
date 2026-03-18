/*
 * XREFs of NtUserSetProcessDpiAwareness @ 0x1C006F150
 * Callers:
 *     <none>
 * Callees:
 *     FreeHwndList_0 @ 0x1C0001F88 (FreeHwndList_0.c)
 *     IsBuildHwndListSupported_0 @ 0x1C0002BA8 (IsBuildHwndListSupported_0.c)
 *     BuildHwndList_0 @ 0x1C0002BB0 (BuildHwndList_0.c)
 *     IsUpdateWindowMonitorSupported_0 @ 0x1C0002BB8 (IsUpdateWindowMonitorSupported_0.c)
 *     UpdateWindowMonitor_0 @ 0x1C0002BC0 (UpdateWindowMonitor_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwareness(__int64 a1, int a2)
{
  int v3; // r15d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  unsigned int v5; // ebx
  struct tagTHREADINFO *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // ecx
  LARGE_INTEGER v10; // rdi
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r13
  _QWORD *v20; // r12
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r14
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rdx

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 1;
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v7);
  if ( v8 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v9) = byte_1C01020C8 - 1;
      Template_xqx(v9, (unsigned int)&AcquiredExclusiveUserCritEvent, v11, v10.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v10.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v11,
        0,
        1000 * v10.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  v12 = 0LL;
  gbValidateHandleForIL = 1;
  v13 = 0x4000LL;
  v14 = *((_QWORD *)v6 + 47);
  if ( a2 )
  {
    if ( v3 == 1 )
    {
      v15 = *(_DWORD *)(v14 + 776);
      if ( (v15 & 0x4000) != 0 )
      {
        v16 = v15 & 0xFFFFBFFF;
LABEL_18:
        v12 = 1LL;
        *(_DWORD *)(v14 + 776) = v16 | 0x2000;
        goto LABEL_24;
      }
    }
  }
  v16 = *(_DWORD *)(v14 + 776);
  if ( (v16 & 0x6000) == 0 )
  {
    if ( v3 == 1 )
      goto LABEL_18;
    if ( v3 == 2 )
    {
      v12 = 1LL;
      *(_DWORD *)(v14 + 776) = v16 | 0x4000;
    }
  }
  if ( v3 == 1 )
  {
LABEL_24:
    if ( (*(_DWORD *)(v14 + 776) & 0x2000) != 0 )
      goto LABEL_29;
  }
  if ( (v3 != 2 || (*(_DWORD *)(v14 + 776) & 0x4000) == 0) && (v3 || (*(_DWORD *)(v14 + 776) & 0x6000) != 0) )
  {
    v5 = 0;
    goto LABEL_58;
  }
LABEL_29:
  if ( (_DWORD)v12 )
  {
    v17 = *(_QWORD *)(v14 + 640);
    if ( v17 )
      goto LABEL_54;
    v17 = 0LL;
    while ( v17 )
    {
      if ( (int)IsBuildHwndListSupported_0() < 0 )
        v19 = 0LL;
      else
        v19 = BuildHwndList_0();
      if ( v19 )
      {
        v20 = (_QWORD *)(v19 + 32);
        v21 = *(_QWORD *)(v19 + 32);
        if ( v21 != 1 )
        {
          do
          {
            PsGetThreadWin32Thread(KeGetCurrentThread(), v13, v18);
            v13 = (unsigned __int16)v21;
            if ( (unsigned __int64)(unsigned __int16)v21 < *((_QWORD *)gpsi + 1) )
            {
              v23 = v21 >> 16;
              v24 = qword_1C0102D48 + (unsigned int)(v13 * dword_1C0102D50);
              if ( ((_WORD)v23 == *(_WORD *)(v24 + 18)
                 || (_WORD)v23 == 0xFFFF
                 || !(_WORD)v23 && PsGetCurrentProcessWow64Process(v22, v13, v18))
                && (*(_BYTE *)(v24 + 17) & 1) == 0
                && *(_BYTE *)(v24 + 16) == 1 )
              {
                v25 = *(_QWORD *)v24;
                if ( v25 )
                {
                  if ( (int)IsUpdateWindowMonitorSupported_0() >= 0 && *(_QWORD *)(*(_QWORD *)(v25 + 16) + 376LL) == v14 )
                  {
                    v27 = *(_QWORD *)(v25 + 352);
                    *(_DWORD *)(v25 + 344) = v3;
                    *(_DWORD *)(v25 + 288) ^= (*(_DWORD *)(v25 + 288) ^ ((v3 <= 0) << 7)) & 0x80;
                    if ( (unsigned __int64)(unsigned __int16)v27 < *((_QWORD *)gpsi + 1) )
                    {
                      v28 = dword_1C0102D50 * (unsigned int)(unsigned __int16)v27;
                      v29 = v27 >> 16;
                      if ( (_WORD)v29 != *(_WORD *)(qword_1C0102D48 + (unsigned int)v28 + 18) && !(_WORD)v29 )
                        PsGetCurrentProcessWow64Process(v26, v29, v28);
                    }
                    UpdateWindowMonitor_0();
                  }
                }
              }
            }
            v21 = *++v20;
          }
          while ( *v20 != 1LL );
        }
        FreeHwndList_0();
LABEL_54:
        v17 = *(_QWORD *)(v17 + 16);
      }
    }
  }
LABEL_58:
  UserSessionSwitchLeaveCrit(v12, v13);
  return v5;
}
