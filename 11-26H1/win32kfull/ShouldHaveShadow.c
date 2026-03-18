/*
 * XREFs of ShouldHaveShadow @ 0x1402005A8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall ShouldHaveShadow(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v2 = 0;
  if ( IsTopLevelWindow((__int64)a1)
    && !*(_DWORD *)(W32GetUserSessionState(v4, v3) + 43264)
    && !*(_DWORD *)(W32GetUserSessionState(v6, v5) + 63400)
    && (*(_DWORD *)(W32GetUserSessionState(v8, v7) + 66796) & 0x80040000) == 0x80040000
    && (*(_BYTE *)(*(_QWORD *)(a1[17] + 8LL) + 10LL) & 2) != 0 )
  {
    v11 = a1[2];
    if ( *(_DWORD *)(v11 + 664) > 0x9900u || (*(_DWORD *)(v11 + 680) & 0x400000) == 0 )
    {
      v12 = a1[46];
      if ( !v12 || *(int *)(v12 + 32) <= 1 )
      {
        v13 = *(_WORD *)(a1[5] + 42LL) & 0x2FFF;
        if ( (_DWORD)v13 != 668 )
          return 1;
        if ( !*(_DWORD *)(W32GetUserSessionState(v13, v9) + 43264) )
        {
          v15 = *(_DWORD *)(W32GetUserSessionState(v15, v14) + 66796) & 0x80000200;
          if ( (_DWORD)v15 == -2147483136 )
            return 1;
        }
        if ( (*(_DWORD *)(W32GetUserSessionState(v15, v14) + 66796) & 0x80000002) != 0x80000002 )
          return 1;
      }
    }
  }
  return v2;
}
