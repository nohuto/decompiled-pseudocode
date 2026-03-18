/*
 * XREFs of xxxSetThreadDesktop @ 0x1C00CEE94
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00CE740 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50 (xxxRestoreCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C00CEE10 (NtUserSetThreadDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     zzzSetDesktop @ 0x1C00644C0 (zzzSetDesktop.c)
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     MapDesktop @ 0x1C00CF780 (MapDesktop.c)
 *     RemovePtiFromShellMiPList @ 0x1C00CFA80 (RemovePtiFromShellMiPList.c)
 *     MagContextThreadCallout @ 0x1C01FD690 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+3Ch] [rbp-Ch]

  v6 = *(__int64 **)(gptiCurrent + 376LL);
  if ( !a2 || (v7 = *v6, v15 = 1, v16 = v7, v17 = a2, v18 = 0, v19 = 1, result = MapDesktop(&v15), (int)result >= 0) )
  {
    if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 772LL)
        || *(_DWORD *)(gptiCurrent + 600LL)
        || (v9 = *(_QWORD *)(gptiCurrent + 408LL)) != 0
        && (v10 = *(_QWORD *)(v9 + 208)) != 0
        && *(_QWORD *)(v10 + 32) == gptiCurrent )
      {
        UserSetLastError(170);
        return 2147483665LL;
      }
      RemovePtiFromShellMiPList(gptiCurrent);
      if ( !v6[39] && a1 )
      {
        LockObjectAssignment(v6 + 39, a2);
        v6[46] = (__int64)a1;
      }
    }
    if ( *(_QWORD *)(gptiCurrent + 408LL) != a2 && (*(_DWORD *)(gptiCurrent + 1072LL) & 8) != 0 )
      MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
    v11 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v11 != a2 )
    {
      v12 = *(_QWORD *)(gptiCurrent + 384LL);
      if ( *(_DWORD *)(v12 + 336) > 1u )
      {
        v14 = AllocQueue(0LL, 0LL);
        if ( !v14 )
        {
          UserSetLastError(8);
          return 3221225495LL;
        }
        ++*(_DWORD *)(v14 + 336);
        zzzAttachToQueue(gptiCurrent, (struct tagQ *)v14, 0LL, 0);
      }
      else if ( v12 == gpqForeground )
      {
        xxxSetForegroundWindow2(0LL, gptiCurrent, 0, 0);
      }
      else if ( !v11 )
      {
        v13 = ((gdwGTERMFlags & 1) != 0) - 1;
        *(_DWORD *)(gptiCurrent + 672LL) = v13;
        *(_DWORD *)(v12 + 328) = v13;
      }
    }
    return zzzSetDesktop(gptiCurrent, a2, a1);
  }
  return result;
}
