/*
 * XREFs of MiIsNextVaTrimCandidate @ 0x1400B64B0
 * Callers:
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiTryLocateWsle @ 0x140058C40 (MiTryLocateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsNextVaTrimCandidate(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v8; // r9
  unsigned __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 Wsle; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *i; // rax
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v8 = *(_QWORD *)(*(unsigned int *)(v4 + 64) * *(_QWORD *)&a2[2 * a3 + 2] + *(_QWORD *)(v4 + 496));
  if ( (v8 & 0x800000000000LL) != 0 )
    v9 = v8 | 0xFFFF000000000000uLL;
  else
    v9 = v8 & 0xFFFFFFFFFFFFLL;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v10 << 25 >> 16;
  v12 = (a4 >> 7) & 1;
  if ( v12 )
  {
    v13 = v10 + 8;
    if ( (unsigned __int64)(v13 + 0x90482413000LL) <= 0xFFF || (v13 & 0xFFF) == 0 )
      return 0xFFFFFFFFFLL;
  }
  else
  {
    if ( (unsigned __int64)(v10 + 0x90482413000LL) <= 0xFFF || (v10 & 0xFFF) == 0 )
      return 0xFFFFFFFFFLL;
    v13 = v10 - 8;
  }
  v15 = *(_QWORD *)v13;
  v24 = v15;
  if ( (v15 & 1) == 0 || (v15 & 0x80u) != 0LL || v13 == 0xFFFFF6FB7DBEDF68uLL )
    return 0xFFFFFFFFFLL;
  v16 = MI_READ_PTE_LOCK_FREE(&v24);
  if ( !MI_IS_PFN((v16 >> 12) & 0xFFFFFFFFFLL) )
    return 0xFFFFFFFFFLL;
  v18 = 48 * v17 - 0x58000000000LL;
  if ( !*(_QWORD *)v18 || (*(_BYTE *)(v18 + 35) & 8) != 0 )
    return 0xFFFFFFFFFLL;
  v19 = v12 ? v11 + 4096 : v11 - 4096;
  Wsle = MiTryLocateWsle(v19, a1, *(_QWORD *)v18);
  v21 = Wsle;
  if ( Wsle == 0xFFFFFFFFFLL || Wsle < *(_QWORD *)(v4 + 8) )
    return 0xFFFFFFFFFLL;
  v22 = 0LL;
  if ( *a2 )
  {
    for ( i = a2 + 2; *i != v21; ++i )
    {
      if ( ++v22 >= (unsigned __int64)(unsigned int)*a2 )
        return v21;
    }
    return 0xFFFFFFFFFLL;
  }
  return v21;
}
