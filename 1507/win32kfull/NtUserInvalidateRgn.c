/*
 * XREFs of NtUserInvalidateRgn @ 0x1C00F6E70
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1, HRGN a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v13;
    v13[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    v9 = xxxRedrawWindow((struct tagWND *)v6, 0LL, a2, a3 != 0 ? 5 : 1);
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
