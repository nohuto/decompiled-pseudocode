/*
 * XREFs of MiIsNextVaTrimCandidate @ 0x140081960
 * Callers:
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 * Callees:
 *     MiTryLocateWsle @ 0x140095390 (MiTryLocateWsle.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiIsNextVaTrimCandidate(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v6; // r10
  unsigned __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r11
  int v14; // r9d
  __int64 v15; // r11
  __int64 v16; // rdi
  __int64 v17; // rax
  ULONG_PTR v18; // rsi
  _QWORD *i; // rcx
  unsigned __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v6 = *(_QWORD *)(*(unsigned int *)(v4 + 64) * *(_QWORD *)&a2[2 * a3 + 2] + *(_QWORD *)(v4 + 496));
  if ( (v6 & 0x800000000000LL) != 0 )
    v7 = v6 | 0xFFFF000000000000uLL;
  else
    v7 = v6 & 0xFFFFFFFFFFFFLL;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = v8 << 25 >> 16;
  if ( ((a4 >> 7) & 1) != 0 )
  {
    v10 = v8 + 8;
    if ( (unsigned __int64)(v10 + 0x90482413000LL) <= 0xFFF || (v10 & 0xFFF) == 0 )
      return 0xFFFFFFFFFLL;
  }
  else
  {
    if ( (unsigned __int64)(v8 + 0x90482413000LL) <= 0xFFF || (v8 & 0xFFF) == 0 )
      return 0xFFFFFFFFFLL;
    v10 = v8 - 8;
  }
  v12 = *(_QWORD *)v10;
  v13 = v12;
  v20 = *(_QWORD *)v10;
  if ( (v12 & 1) == 0 || (v12 & 0x80u) != 0LL || v10 == 0xFFFFF6FB7DBEDF68uLL )
    return 0xFFFFFFFFFLL;
  if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
    v13 = MiReadPteShadow(&v20, v12);
  v16 = 0LL;
  if ( !(unsigned int)MI_IS_PFN((v13 >> 12) & 0xFFFFFFFFFLL) )
    return 0xFFFFFFFFFLL;
  v17 = 48 * v15 - 0x58000000000LL;
  if ( !*(_QWORD *)v17 || (*(_BYTE *)(v17 + 35) & 8) != 0 )
    return 0xFFFFFFFFFLL;
  v18 = v14 ? v9 + 4096 : v9 - 4096;
  result = MiTryLocateWsle(v18);
  if ( result == 0xFFFFFFFFFLL || result < *(_QWORD *)(v4 + 8) )
    return 0xFFFFFFFFFLL;
  if ( *a2 )
  {
    for ( i = a2 + 2; *i != result; ++i )
    {
      if ( ++v16 >= (unsigned __int64)(unsigned int)*a2 )
        return result;
    }
    return 0xFFFFFFFFFLL;
  }
  return result;
}
