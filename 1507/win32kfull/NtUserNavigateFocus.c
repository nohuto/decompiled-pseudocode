/*
 * XREFs of NtUserNavigateFocus @ 0x1C021E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009730 (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserNavigateFocus(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v4 = 0LL;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_12;
  if ( a2 > 6 )
  {
    v8 = 87;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(gptiCurrent + 392LL) != gpqForeground
    || !(unsigned int)CoreWindowProp::IsHostOrComponentThreadOf(gptiCurrent, (struct tagWND *)v7) )
  {
    v8 = 5;
LABEL_11:
    UserSetLastError(v8);
    goto LABEL_12;
  }
  v14[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v14;
  v14[1] = v7;
  ++*(_DWORD *)(v7 + 8);
  v9 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
  if ( v9 )
    v10 = *v9;
  else
    v10 = 0LL;
  v4 = v10 & -(__int64)((unsigned int)xxxSetForegroundWindow2((struct tagWND *)v7, gptiCurrent, 8LL, a2) != 0);
  ThreadUnlock1(v12, v11);
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
