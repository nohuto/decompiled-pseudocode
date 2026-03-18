/*
 * XREFs of NtUserFillWindow @ 0x1C0086260
 * Callers:
 *     <none>
 * Callees:
 *     xxxFillWindow @ 0x1C0087340 (xxxFillWindow.c)
 */

__int64 __fastcall NtUserFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  _QWORD v18[3]; // [rsp+38h] [rbp-30h] BYREF

  EnterCrit(1LL);
  v8 = ValidateHwnd(a2);
  v11 = 0;
  v12 = v8;
  if ( v8 )
  {
    v16 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v16;
    v17 = v8;
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
        v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v18;
        v18[1] = v10;
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v11 = xxxFillWindow(v10, v12, a3, a4, v16, v17);
        ThreadUnlock1(v14, v13);
      }
    }
    ThreadUnlock1(v10, v9);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
