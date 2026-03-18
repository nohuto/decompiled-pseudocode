/*
 * XREFs of NtUserGetControlColor @ 0x1C021A1E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlColor @ 0x1C0086354 (xxxGetControlColor.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ControlColor; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-30h] BYREF

  EnterCrit(1LL);
  v8 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v12 = v8;
  if ( v8 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v18;
    v18[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    v13 = ValidateHwnd(a2);
    if ( v13 && a3 && a4 - 306 <= 6 )
    {
      v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v19;
      v19[1] = v13;
      ++*(_DWORD *)(v13 + 8);
      ControlColor = xxxGetControlColor(v12, (__int64 *)v13, a3, a4);
      ThreadUnlock1(v16, v15);
    }
    ThreadUnlock1(v14, v13);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return ControlColor;
}
