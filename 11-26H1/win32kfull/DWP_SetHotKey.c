/*
 * XREFs of DWP_SetHotKey @ 0x1400446DC
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x140044848 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     HotKeyToWindow @ 0x140246178 (HotKeyToWindow.c)
 */

__int64 __fastcall DWP_SetHotKey(struct tagWND *a1, unsigned int a2)
{
  BOOL v2; // esi
  struct tagHOTKEYSTRUCT **v5; // r14
  struct tagHOTKEYSTRUCT *v6; // rdi
  struct tagWND *v8; // rax
  __int64 v9; // rax
  struct tagHOTKEYSTRUCT *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( (_BYTE)a2 == 27 || (_BYTE)a2 == 32 || (_BYTE)a2 == 9 || (_BYTE)a2 == 0xE7 )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
  {
    if ( a2 )
    {
      v8 = (struct tagWND *)HotKeyToWindow(a2);
      if ( v8 )
        v2 = v8 != a1;
    }
    v5 = HotKeyHelper(a1);
    v6 = *v5;
    if ( *v5 )
    {
      if ( a2 )
      {
        *((_DWORD *)v6 + 2) = a2;
      }
      else
      {
        *v5 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v6 + 2);
        HMAssignmentUnlock(v6);
        Win32FreePool(v6);
        UserSessionState = W32GetUserSessionState(v15, v14);
        --*(_DWORD *)(UserSessionState + 16304);
      }
      return (unsigned int)(v2 + 1);
    }
    if ( !a2 )
      return 1LL;
    v9 = Win32AllocPoolZInit(24LL, 1802007381LL);
    v10 = (struct tagHOTKEYSTRUCT *)v9;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 8) = a2;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_QWORD *)v9 = 0LL;
      v17[0] = v9;
      v17[1] = a1;
      HMAssignmentLock(v17, 0LL);
      *v5 = v10;
      v13 = W32GetUserSessionState(v12, v11);
      ++*(_DWORD *)(v13 + 16304);
      return (unsigned int)(v2 + 1);
    }
  }
  return 0LL;
}
