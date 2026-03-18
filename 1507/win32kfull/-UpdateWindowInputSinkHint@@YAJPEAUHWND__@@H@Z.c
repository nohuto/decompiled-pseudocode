/*
 * XREFs of ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C00F7184
 * Callers:
 *     NtUserUpdateWindowInputSinkHints @ 0x1C00F70D0 (NtUserUpdateWindowInputSinkHints.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     UpdateGlobalInputSinkHint @ 0x1C00F7258 (UpdateGlobalInputSinkHint.c)
 */

__int64 __fastcall UpdateWindowInputSinkHint(HWND a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  bool v11; // zf
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 && (v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v13;
    v13[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( (unsigned int)IsTopLevelWindow(v4) )
    {
      v9 = *(unsigned int *)(v10 + 288);
      v11 = a2 == -__CFSHR__(*(_DWORD *)(v10 + 288), 21);
      v8 = a2 ^ -__CFSHR__(*(_DWORD *)(v10 + 288), 21);
      *(_DWORD *)(v10 + 288) = v9 ^ (v9 ^ (a2 << 20)) & 0x100000;
      if ( !v11 )
        UpdateGlobalInputSinkHint(a2);
    }
    else
    {
      v7 = -1073741811;
    }
    ThreadUnlock1(v9, v8);
  }
  else
  {
    v7 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
