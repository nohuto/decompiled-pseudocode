/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1402B6350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     GreSetHwndPresentFlags @ 0x140345514 (GreSetHwndPresentFlags.c)
 */

__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, void *a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 StyleWindow; // rax
  HWND *v13; // rbx
  __int64 v14; // rbx
  ULONG v15; // eax
  _DWORD v17[15]; // [rsp+24h] [rbp-54h] BYREF

  v8 = -1073741811;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568);
    v13 = (HWND *)StyleWindow;
    if ( StyleWindow )
    {
      v11 = *(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x2FFF;
      if ( (_DWORD)v11 != 669 )
      {
        if ( a2 == 2 )
        {
          if ( a3 )
          {
            if ( a4 >= 4 )
            {
              v17[0] = 0;
              RtlCopyFromUser(v17, a3, 4uLL);
              v17[5] = v17[0];
              v8 = GreSetHwndPresentFlags(*v13);
            }
            else
            {
              v8 = -1073741306;
            }
          }
        }
        else
        {
          v8 = -1073741821;
        }
      }
    }
  }
  if ( v8 < 0 )
  {
    v9 = 0;
    v14 = 0LL;
  }
  else
  {
    v14 = 1LL;
  }
  if ( !v9 )
  {
    v15 = RtlNtStatusToDosError(v8);
    UserSetLastError(v15);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v14;
}
