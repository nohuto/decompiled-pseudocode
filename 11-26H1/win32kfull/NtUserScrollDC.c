/*
 * XREFs of NtUserScrollDC @ 0x1402BB370
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     _ScrollDC @ 0x14003EB40 (_ScrollDC.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1402574C8 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserScrollDC(HDC a1, int a2, int a3, void *a4, void *a5, HRGN a6, __int64 a7)
{
  struct tagRECT *v11; // rdi
  struct tagRECT *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rcx
  BOOL v15; // edi
  __int128 v17; // [rsp+60h] [rbp-98h] BYREF
  __int128 *v18; // [rsp+70h] [rbp-88h]
  __int128 *v19; // [rsp+78h] [rbp-80h]
  __int128 v20; // [rsp+80h] [rbp-78h] BYREF
  __int128 v21; // [rsp+90h] [rbp-68h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-58h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v17, 1LL);
  if ( a4 )
  {
    v20 = *UmpDetail::ReadFromUser<tagRECT>(&v17, a4);
    v11 = (struct tagRECT *)&v20;
    v18 = &v20;
  }
  if ( a5 )
  {
    v21 = *UmpDetail::ReadFromUser<tagRECT>(&v17, a5);
    v12 = (struct tagRECT *)&v21;
    v19 = &v21;
  }
  v13 = a7;
  v15 = ScrollDC(a1, a2, a3, v11, v12, a6, (struct tagRECT *)((unsigned __int64)&v22 & -(__int64)(a7 != 0)));
  if ( v13 )
    UserModePointer<tagRECT>::Write<tagRECT>((void **)&a7, &v22);
  UserSessionSwitchLeaveCrit(v14);
  return v15;
}
