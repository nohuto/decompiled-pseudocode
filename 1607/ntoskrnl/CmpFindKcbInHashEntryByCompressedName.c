/*
 * XREFs of CmpFindKcbInHashEntryByCompressedName @ 0x1401B49D8
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1404F5D50 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x140606A64 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByCompressedName(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5)
{
  __int64 v6; // rsi
  __int64 i; // rdi
  __int64 v10; // rcx
  int v11; // eax
  _WORD v13[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v6 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 2800)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v10 = *(_QWORD *)(i + 64);
      if ( (*(_DWORD *)v10 & 1) != 0 )
      {
        v11 = CmpCompareTwoCompressedNames(a4, a5, v10 + 26, *(unsigned __int16 *)(v10 + 24));
      }
      else
      {
        v14 = v10 + 26;
        v13[0] = *(_WORD *)(v10 + 24);
        v13[1] = v13[0];
        v11 = ((__int64 (__fastcall *)(_WORD *, __int64, _QWORD, __int64))CmpCompareCompressedName)(v13, a4, a5, 1LL);
      }
      if ( !v11 )
        return i - 8;
    }
  }
  return v6;
}
