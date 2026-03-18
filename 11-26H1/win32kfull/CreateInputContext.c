/*
 * XREFs of CreateInputContext @ 0x1401DE0D0
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserCreateInputContext @ 0x1401DE040 (NtUserCreateInputContext.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall CreateInputContext(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  char *v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = PtiCurrent(a1);
  v5 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v4 + 130, 0, 0) & 0x2000000) != 0
    || (**(_DWORD **)(W32GetUserSessionState(v3, v2) + 19904) & 4) == 0
    || a1 && !*((_QWORD *)v4 + 103) )
  {
    return 0LL;
  }
  v7 = *((_QWORD *)v4 + 61);
  if ( !v7 )
    return 0LL;
  LOBYTE(v6) = 17;
  v8 = (_QWORD *)HMAllocObject(v4, v7, v6, 72LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = (char *)v4 + 824;
  if ( a1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 56LL);
    if ( v12 )
      v5 = *(_QWORD *)(v12 + 48);
    *(_QWORD *)(v8[5] + 16LL) = v5;
    v8[7] = v12;
    v13 = *(_QWORD *)v10;
    *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL) = v8[6];
    *(_QWORD *)(v13 + 56) = v8;
  }
  else
  {
    v14[0] = (char *)v4 + 824;
    v14[1] = v8;
    HMAssignmentLock(v14, 0LL);
    *(_QWORD *)(*((_QWORD *)v4 + 64) + 256LL) = v9[6];
    *(_QWORD *)(v9[5] + 16LL) = 0LL;
    v9[7] = 0LL;
  }
  *(_QWORD *)(v9[5] + 24LL) = a1;
  return v9;
}
