/*
 * XREFs of ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x140234B0C
 * Callers:
 *     EditionResetIMELayout @ 0x140234A80 (EditionResetIMELayout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ClientImmLoadLayout @ 0x140234C18 (ClientImmLoadLayout.c)
 */

struct tagIMEINFOEX *__fastcall xxxImmLoadLayout(HKL a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  struct tagTHREADINFO *v9; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-28h] BYREF
  void (*v12)(void *); // [rsp+40h] [rbp-18h]

  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19904) & 4) == 0 && (WORD1(a1) & 0xF000) != 0xE000 )
    return 0LL;
  v4 = Win32AllocPoolZInit(352LL, 1835627349LL);
  if ( !v4 )
    return 0LL;
  PtiCurrent(v3);
  v6 = PtiCurrent(v5);
  BugCheckParameter2[0] = *((_QWORD *)v6 + 47);
  *((_QWORD *)v6 + 47) = BugCheckParameter2;
  v12 = Win32FreePool;
  BugCheckParameter2[1] = v4;
  if ( !(unsigned int)ClientImmLoadLayout(a1, v4) )
  {
    if ( v12 != (void (*)(void *))-1LL )
      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
    return 0LL;
  }
  if ( v12 == (void (*)(void *))-1LL )
  {
    BugCheckParameter4 = PtiCurrent(v7);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
  }
  v9 = PtiCurrent(v7);
  *((_QWORD *)v9 + 47) = BugCheckParameter2[0];
  return (struct tagIMEINFOEX *)v4;
}
