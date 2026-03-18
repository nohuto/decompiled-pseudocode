/*
 * XREFs of NtUserSetTargetForResourceBrokering @ 0x1402BE150
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdi
  struct tagTHREADINFO *v7; // rsi
  __int64 v8; // rbp
  int v9; // ecx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx

  EnterCrit(0LL, 0LL);
  v5 = PtiCurrent(v4);
  v6 = 0LL;
  v7 = v5;
  v8 = 0LL;
  if ( a1 )
    goto LABEL_2;
  if ( (*(_BYTE *)(*((_QWORD *)v5 + 57) + 808LL) & 0x30) != 0x10 )
  {
LABEL_5:
    v9 = 5;
    goto LABEL_3;
  }
  if ( !a2 )
    goto LABEL_13;
  v11 = PtiFromThreadId(a2);
  v8 = v11;
  if ( v11 )
  {
    if ( (struct tagTHREADINFO *)v11 == v7 )
    {
      v12 = (__int64 *)((char *)v7 + 1680);
      v10 = (char *)v7 + 1680;
      goto LABEL_14;
    }
    v13 = *(_QWORD *)(v11 + 456);
    if ( (*(_BYTE *)(v13 + 808) & 0x30) != 0x10
      || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v13)
      && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**(_QWORD **)(v8 + 456)) )
    {
      goto LABEL_5;
    }
LABEL_13:
    v12 = (__int64 *)((char *)v7 + 1680);
    v10 = (char *)v7 + 1680;
    if ( v8 )
    {
      *((_QWORD *)v7 + 170) |= 0x8000000uLL;
      *v12 = v8;
      *(_QWORD *)(v8 + 1360) &= ~0x8000000uLL;
      *(_QWORD *)(v8 + 1680) = v7;
LABEL_18:
      v6 = 1LL;
      goto LABEL_19;
    }
LABEL_14:
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(*(_QWORD *)v10 + 1680LL) = 0LL;
      *v12 = 0LL;
    }
    *((_QWORD *)v7 + 170) &= ~0x8000000uLL;
    goto LABEL_18;
  }
LABEL_2:
  v9 = 87;
LABEL_3:
  UserSetLastError(v9);
LABEL_19:
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
