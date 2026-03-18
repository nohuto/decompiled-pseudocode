/*
 * XREFs of _SetWinEventHook @ 0x1C0087C88
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C0087BC0 (NtUserSetWinEventHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 *     AddHmodDependency @ 0x1C00848A8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00848C0 (GetHmodTableIndex.c)
 *     CategoryMaskFromEventRange @ 0x1C0087E54 (CategoryMaskFromEventRange.c)
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
  int HmodTableIndex; // esi
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // eax
  int v15; // edx
  int v16; // eax
  __int64 v17; // r8
  __int64 v19; // rax
  int v20; // ecx

  v8 = a3;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v20 = 1427;
    goto LABEL_19;
  }
  if ( a1 > a2 )
  {
    v20 = 1426;
    goto LABEL_19;
  }
  if ( (a8 & 4) != 0 )
  {
    if ( !a3 )
    {
      v20 = 1428;
      goto LABEL_19;
    }
    if ( !a4 )
    {
      v20 = 1157;
      goto LABEL_19;
    }
    HmodTableIndex = GetHmodTableIndex(a4);
    if ( HmodTableIndex == -1 )
    {
      v20 = 126;
LABEL_19:
      UserSetLastError(v20);
      return 0LL;
    }
  }
  else
  {
    HmodTableIndex = -1;
    v8 = 0LL;
  }
  if ( a7 )
  {
    v19 = PtiFromThreadId(a7);
    if ( !v19 || (*(_DWORD *)(v19 + 440) & 0x1000000) == 0 )
    {
      v20 = 1444;
      goto LABEL_19;
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
  return v13;
}
