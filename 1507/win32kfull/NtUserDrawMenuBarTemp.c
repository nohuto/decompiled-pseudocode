/*
 * XREFs of NtUserDrawMenuBarTemp @ 0x1C0219550
 * Callers:
 *     <none>
 * Callees:
 *     xxxDrawMenuBarTemp @ 0x1C0240598 (xxxDrawMenuBarTemp.c)
 */

__int64 __fastcall NtUserDrawMenuBarTemp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-38h] BYREF

  EnterCrit(1LL);
  v7 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v7;
  v11 = 0;
  if ( v7 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v18;
    v18[1] = v7;
    ++*(_DWORD *)(v7 + 8);
    v12 = ValidateHmenu(a4);
    if ( v12 )
    {
      v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v19;
      v19[1] = v12;
      ++*(_DWORD *)(v12 + 8);
      v11 = xxxDrawMenuBarTemp(v10, a5);
      ThreadUnlock1(v16, v15);
    }
    ThreadUnlock1(v14, v13);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v11;
}
