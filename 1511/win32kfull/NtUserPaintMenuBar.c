/*
 * XREFs of NtUserPaintMenuBar @ 0x1C000FD50
 * Callers:
 *     <none>
 * Callees:
 *     xxxPaintMenuBar @ 0x1C000FE34 (xxxPaintMenuBar.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r10
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v13 = 0;
  v14 = v10;
  if ( v10 )
  {
    v20 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v20;
    v21 = v10;
    v15 = *(_BYTE *)(v10 + 55);
    ++*(_DWORD *)(v14 + 8);
    if ( (v15 & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v19 = 1004LL;
        goto LABEL_12;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v13 = xxxPaintMenuBar(v14, a2, (unsigned int)a3, (unsigned int)a4, a5, a6, v20, v21);
LABEL_8:
        ThreadUnlock1(v17, v16);
        goto LABEL_9;
      }
    }
    v19 = 87LL;
LABEL_12:
    UserSetLastError(v19);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v13;
}
