/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C02125F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     _GetAltTabInfo @ 0x1C01F8510 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, unsigned __int64 a3, volatile void *a4, ULONG a5, int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  _BYTE *v13; // rdx
  SIZE_T v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  INT v28; // ebx
  INT v29; // edi
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  _BYTE v32[40]; // [rsp+68h] [rbp-70h] BYREF

  memset(v32, 0, sizeof(v32));
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
      AltTabInfo = 0;
      goto LABEL_25;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 || (struct tagWND *)v12 == gspwndAltTab )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (_BYTE *)a3;
    if ( a3 >= W32UserProbeAddress )
      v13 = (_BYTE *)W32UserProbeAddress;
    *v13 = *v13;
    v13[39] = v13[39];
    v14 = a5;
    if ( !a6 )
      v14 = 2LL * a5;
    ProbeForWrite(a4, v14, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      *(_DWORD *)v32 = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)v32, (CHAR *)a4, a5, a6);
      if ( v12 )
      {
        v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v15, v16) + 432);
        if ( (*(_BYTE *)(v10 + 224) & 1) == 0 )
        {
          v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v17, v18) + 432);
          if ( (*(_BYTE *)(v10 + 224) & 0x20) == 0 )
          {
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10, v11, v19, v20);
            v10 = *(_DWORD *)(v12 + 352) & 0xF;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v10 )
            {
              v24 = ValidateHmonitorNoRip(*(_QWORD *)(v12 + 344));
              if ( v24 )
              {
                v27 = W32GetCurrentThreadDpiAwarenessContext(v23, v22, v25, v26);
                v28 = (unsigned __int16)MonitorDpiFromDpiAwarenessContext(v24, v27);
                v29 = (unsigned __int16)MonitorDpiFromDpiAwarenessContext(v24, *(unsigned int *)(v12 + 352));
                *(_DWORD *)&v32[24] = EngMulDiv(*(INT *)&v32[24], v28, v29);
                *(_DWORD *)&v32[28] = EngMulDiv(*(INT *)&v32[28], v28, v29);
              }
              TransformPointBetweenCoordinateSpaces(&v32[32], &v32[32], 0LL, v12);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = *(_OWORD *)v32;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v32[16];
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v32[32];
      }
    }
    else
    {
      UserSetLastError(87LL);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL);
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v10, v11);
  return AltTabInfo;
}
