/*
 * XREFs of xxxSetThreadDesktop @ 0x1C0099B20
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C0098C50 (xxxSetCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C00999E0 (NtUserSetThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00DD140 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C0057510 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C009A3E0 (MapDesktop.c)
 *     RemovePtiFromShellMiPList @ 0x1C009B130 (RemovePtiFromShellMiPList.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 *     MagContextThreadCallout @ 0x1C01F4CC0 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(void *a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+38h] [rbp-10h]
  int v18; // [rsp+3Ch] [rbp-Ch]

  v4 = *(__int64 **)(gptiCurrent + 376LL);
  if ( !a2 || (v5 = *v4, v14 = 1, v15 = v5, v16 = a2, v17 = 0, v18 = 1, result = MapDesktop(&v14), (int)result >= 0) )
  {
    if ( PsGetCurrentProcess(a1) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 780LL)
        || *(_DWORD *)(gptiCurrent + 600LL)
        || (v8 = *(_QWORD *)(gptiCurrent + 408LL)) != 0
        && (v9 = *(_QWORD *)(v8 + 208)) != 0
        && *(_QWORD *)(v9 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL);
        return 2147483665LL;
      }
      RemovePtiFromShellMiPList(gptiCurrent);
      if ( !v4[38] && a1 )
      {
        LockObjectAssignment(v4 + 38, a2);
        v4[45] = (__int64)a1;
      }
    }
    if ( *(_QWORD *)(gptiCurrent + 408LL) != a2 && (*(_DWORD *)(gptiCurrent + 1096LL) & 8) != 0 )
      MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
    v10 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v10 != a2 )
    {
      v11 = *(_QWORD *)(gptiCurrent + 384LL);
      if ( *(_DWORD *)(v11 + 344) > 1u )
      {
        v13 = AllocQueue(0LL);
        if ( !v13 )
        {
          UserSetLastError(8LL);
          return 3221225495LL;
        }
        ++*(_DWORD *)(v13 + 344);
        zzzAttachToQueue(gptiCurrent, (struct tagQ *)v13);
      }
      else if ( v11 == gpqForeground )
      {
        xxxSetForegroundWindow2(0LL);
      }
      else if ( !v10 )
      {
        v12 = ((gdwGTERMFlags & 1) != 0) - 1;
        *(_DWORD *)(gptiCurrent + 672LL) = v12;
        *(_DWORD *)(v11 + 336) = v12;
      }
    }
    return zzzSetDesktop(gptiCurrent, a2, a1, v7);
  }
  return result;
}
