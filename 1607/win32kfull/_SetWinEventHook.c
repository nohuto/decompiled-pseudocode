/*
 * XREFs of _SetWinEventHook @ 0x1C00A9348
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00A9280 (NtUserSetWinEventHook.c)
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C00A742C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00A7444 (GetHmodTableIndex.c)
 *     CategoryMaskFromEventRange @ 0x1C00A9514 (CategoryMaskFromEventRange.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__fastcall SetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8)
{
  __int64 v8; // rbp
  int HmodTableIndex; // edi
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // eax
  int v15; // edx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v22; // rax
  __int64 v23; // rcx

  v8 = a3;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v23 = 1427LL;
    goto LABEL_18;
  }
  if ( a1 > a2 )
  {
    v23 = 1426LL;
    goto LABEL_18;
  }
  if ( (a8 & 4) != 0 )
  {
    if ( !a3 )
    {
      v23 = 1428LL;
      goto LABEL_18;
    }
    if ( !a4 )
    {
      v23 = 1157LL;
      goto LABEL_18;
    }
    HmodTableIndex = GetHmodTableIndex(a4);
    if ( HmodTableIndex == -1 )
    {
      v23 = 126LL;
      goto LABEL_18;
    }
  }
  else
  {
    HmodTableIndex = -1;
    v8 = 0LL;
  }
  if ( a7 )
  {
    v22 = PtiFromThreadId(a7);
    if ( !v22 || (*(_DWORD *)(v22 + 440) & 0x1000000) == 0 )
    {
      v23 = 1444LL;
LABEL_18:
      UserSetLastError(v23);
      return 0LL;
    }
  }
  LOBYTE(a3) = 15;
  v12 = (_DWORD *)HMAllocObject(gptiCurrent, 0LL, a3);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v12[8] = a1;
  v12[9] = a2;
  v12[10] ^= (v12[10] ^ (2 * (a8 & 1))) & 2;
  v14 = v12[10] & 0xFFFFFFFA;
  v13[14] = a7;
  v15 = v14 | (4 * ((a8 >> 1) & 1));
  v13[18] = HmodTableIndex;
  v13[10] = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(8 * ((a8 & 4) != 0))) & 8 ^ ((unsigned __int8)(v15 ^ (v15 ^ (8 * ((a8 & 4) != 0))) & 8) ^ (unsigned __int8)(16 * ((a8 & 8) != 0))) & 0x10;
  *((_QWORD *)v13 + 6) = a6;
  if ( HmodTableIndex >= 0 )
    AddHmodDependency(HmodTableIndex);
  *((_QWORD *)v13 + 8) = a5 - v8;
  *((_QWORD *)v13 + 3) = gpWinEventHooks;
  gpWinEventHooks = v13;
  v16 = CategoryMaskFromEventRange(a1, a2, gpsi);
  *(_DWORD *)(v17 + 1876) |= v16;
  v13[22] = W32GetCurrentThreadDpiAwarenessContext(v19, v18, v17, v20);
  return v13;
}
