/*
 * XREFs of NtUserFillWindow @ 0x1C00B3680
 * Callers:
 *     <none>
 * Callees:
 *     xxxFillWindow @ 0x1C00B28A4 (xxxFillWindow.c)
 */

__int64 __fastcall NtUserFillWindow(__int64 a1, __int64 a2, HDC a3, HBRUSH a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a2);
  v11 = 0;
  v12 = v8;
  if ( v8 )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v16;
    v16[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( a3 )
    {
      if ( !a1 )
      {
        v10 = 0LL;
        goto LABEL_5;
      }
      v10 = ValidateHwnd(a1);
      if ( v10 )
      {
LABEL_5:
        v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v17;
        v17[1] = v10;
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v11 = xxxFillWindow(v10, v12, a3, a4);
        ThreadUnlock1(v14, v13);
      }
    }
    ThreadUnlock1(v10, v9);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
