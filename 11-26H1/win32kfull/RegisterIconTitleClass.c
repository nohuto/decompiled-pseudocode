/*
 * XREFs of RegisterIconTitleClass @ 0x1402A2E30
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     NtUserGetClassInfoEx @ 0x1402B2550 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1402B9700 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 */

__int64 __fastcall RegisterIconTitleClass(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _DWORD v5[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+28h] [rbp-58h]
  int v7; // [rsp+30h] [rbp-50h]
  int v8; // [rsp+34h] [rbp-4Ch]
  void *v9; // [rsp+38h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+78h] [rbp-8h]
  int v18; // [rsp+7Ch] [rbp-4h]

  v5[0] = 0;
  v1 = PtiCurrent(a1);
  v7 = 0;
  v9 = hModuleWin;
  v10 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v5[1] = 0;
  v6 = 0LL;
  v8 = 0;
  v17 = 0;
  v18 = 1;
  if ( *(_QWORD *)(W32GetUserSessionState(hModuleWin, hModuleWin) + 21912) )
    v11 = **(_QWORD **)(W32GetUserSessionState(v3, v2) + 21912);
  else
    v11 = 0LL;
  v12 = 0LL;
  v14 = 32772LL;
  v16 = 32772LL;
  result = InternalRegisterClassEx((__int64)v5, 0x29Bu, 0x41u, 0LL);
  if ( result )
  {
    result = 1LL;
    *(_DWORD *)(*((_QWORD *)v1 + 57) + 12LL) |= 0x10000000u;
  }
  return result;
}
