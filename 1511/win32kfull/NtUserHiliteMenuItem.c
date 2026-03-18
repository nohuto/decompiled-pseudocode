/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C021C970
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxHiliteMenuItem @ 0x1C0244814 (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]
  _QWORD v21[3]; // [rsp+38h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v8;
  if ( v8 )
  {
    v19 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v19;
    v20 = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004);
    }
    else
    {
      v15 = ValidateHmenu(a2);
      v13 = v15;
      if ( v15 && (*(_DWORD *)(v15 + 40) & 0x40) == 0 )
      {
        v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v21;
        v21[1] = v15;
        ++*(_DWORD *)(v15 + 8);
        v11 = xxxHiliteMenuItem(v12, v15, a3, a4, v19, v20);
        ThreadUnlock1(v17, v16);
      }
    }
    ThreadUnlock1(v14, v13);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
