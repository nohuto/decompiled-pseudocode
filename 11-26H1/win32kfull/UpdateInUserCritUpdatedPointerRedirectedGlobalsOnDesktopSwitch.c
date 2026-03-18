/*
 * XREFs of UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x1401C0858
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1401C0D6C (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // ebx

  UserSessionState = W32GetUserSessionState(a1, a2);
  UpdatePointerRedirIsAlive(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19176) + 8LL));
  v3 = 0;
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19176);
  v8 = (__int64 *)(*(_QWORD *)(v7 + 8) + 208LL);
  do
  {
    v9 = *v8;
    v10 = W32GetUserSessionState(v7, v6);
    if ( v3 )
    {
      if ( v9 )
      {
        *(_DWORD *)(v10 + 344) = 1;
        v16 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 456LL);
        v17 = *(_DWORD *)(v16 + 56);
        result = W32GetUserSessionState(v16, v11);
        *(_DWORD *)(result + 348) = v17;
      }
      else
      {
        *(_DWORD *)(v10 + 344) = 0;
        result = W32GetUserSessionState(v12, v11);
        *(_DWORD *)(result + 348) = 0;
      }
    }
    else if ( v9 )
    {
      *(_DWORD *)(v10 + 336) = 1;
      v14 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 456LL);
      v15 = *(_DWORD *)(v14 + 56);
      result = W32GetUserSessionState(v14, v11);
      *(_DWORD *)(result + 340) = v15;
    }
    else
    {
      *(_DWORD *)(v10 + 336) = 0;
      result = W32GetUserSessionState(v12, v11);
      *(_DWORD *)(result + 340) = 0;
    }
    ++v3;
    ++v8;
  }
  while ( v3 < 2 );
  return result;
}
