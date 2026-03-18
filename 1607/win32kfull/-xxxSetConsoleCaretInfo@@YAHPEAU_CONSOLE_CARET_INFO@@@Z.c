/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C009B08C
 * Callers:
 *     xxxConsoleControl @ 0x1C009A9BC (xxxConsoleControl.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = ValidateHwnd(*(_QWORD *)a1);
  v3 = v2;
  if ( v2 && (v4 = *(_QWORD *)(v2 + 24)) != 0 )
  {
    *(_OWORD *)(v4 + 136) = *(_OWORD *)a1;
    *(_QWORD *)(v4 + 152) = *((_QWORD *)a1 + 2);
    v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v8;
    v8[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    xxxWindowEvent(0x800Bu, (__int64 *)v3, -8, 0, 4);
    ThreadUnlock1(v6, v5);
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
