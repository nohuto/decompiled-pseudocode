/*
 * XREFs of ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0006E54
 * Callers:
 *     NtUserUpdateWindowInputSinkHints @ 0x1C0006DA0 (NtUserUpdateWindowInputSinkHints.c)
 * Callees:
 *     UpdateGlobalInputSinkHint @ 0x1C0006F28 (UpdateGlobalInputSinkHint.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 */

__int64 __fastcall UpdateWindowInputSinkHint(HWND a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  bool v9; // zf
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v5 = 0;
  if ( v4 && (((*(_WORD *)(v4 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( (unsigned int)IsTopLevelWindow(v4) )
    {
      v7 = *(unsigned int *)(v8 + 288);
      v9 = a2 == -__CFSHR__(*(_DWORD *)(v8 + 288), 21);
      v6 = a2 ^ -__CFSHR__(*(_DWORD *)(v8 + 288), 21);
      *(_DWORD *)(v8 + 288) = v7 ^ (v7 ^ (a2 << 20)) & 0x100000;
      if ( !v9 )
        UpdateGlobalInputSinkHint(a2, v6);
    }
    else
    {
      v5 = -1073741811;
    }
    ThreadUnlock1(v7, v6);
  }
  else
  {
    v5 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
