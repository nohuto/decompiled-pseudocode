/*
 * XREFs of xxxSetThreadDesktop @ 0x1C007EA90
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C007B50C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007C660 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007D1D0 (xxxRestoreCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C007EA10 (NtUserSetThreadDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 * Callees:
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     MapDesktop @ 0x1C007EF40 (MapDesktop.c)
 *     RemovePtiFromShellMiPList @ 0x1C007F240 (RemovePtiFromShellMiPList.c)
 *     zzzSetDesktop @ 0x1C008BDA0 (zzzSetDesktop.c)
 *     MagContextThreadCallout @ 0x1C01FD210 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-10h]
  int v17; // [rsp+3Ch] [rbp-Ch]

  v4 = *(__int64 **)(gptiCurrent + 384LL);
  if ( !a2 || (v5 = *v4, v13 = 1, v14 = v5, v15 = a2, v16 = 0, v17 = 1, result = MapDesktop(&v13), (int)result >= 0) )
  {
    if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 780LL)
        || *(_DWORD *)(gptiCurrent + 608LL)
        || (v7 = *(_QWORD *)(gptiCurrent + 416LL)) != 0
        && (v8 = *(_QWORD *)(v7 + 208)) != 0
        && *(_QWORD *)(v8 + 32) == gptiCurrent )
      {
        UserSetLastError(170);
        return 2147483665LL;
      }
      RemovePtiFromShellMiPList(gptiCurrent);
      if ( !v4[39] && a1 )
      {
        LockObjectAssignment(v4 + 39, a2);
        v4[46] = a1;
      }
    }
    if ( *(_QWORD *)(gptiCurrent + 416LL) != a2 && (*(_DWORD *)(gptiCurrent + 1080LL) & 8) != 0 )
      MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
    v9 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( v9 != a2 )
    {
      v10 = *(_QWORD *)(gptiCurrent + 392LL);
      if ( *(_DWORD *)(v10 + 336) > 1u )
      {
        v12 = AllocQueue(0LL);
        if ( !v12 )
        {
          UserSetLastError(8);
          return 3221225495LL;
        }
        ++*(_DWORD *)(v12 + 336);
        zzzAttachToQueue(gptiCurrent, (struct tagQ *)v12, 0LL, 0);
      }
      else if ( v10 == gpqForeground )
      {
        xxxSetForegroundWindow2(0LL, gptiCurrent, 0LL, 0);
      }
      else if ( !v9 )
      {
        v11 = ((gdwGTERMFlags & 1) != 0) - 1;
        *(_DWORD *)(gptiCurrent + 680LL) = v11;
        *(_DWORD *)(v10 + 328) = v11;
      }
    }
    return zzzSetDesktop(gptiCurrent);
  }
  return result;
}
