/*
 * XREFs of bLoadTTF_Cache @ 0x1C012C4E0
 * Callers:
 *     bLoadTTF @ 0x1C01425E4 (bLoadTTF.c)
 * Callees:
 *     vCopy_IFIV @ 0x1C0142B5C (vCopy_IFIV.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     EngFntCacheFault @ 0x1C027DE90 (EngFntCacheFault.c)
 */

__int64 __fastcall bLoadTTF_Cache(__int64 a1, PVOID *a2, __int64 a3)
{
  PVOID v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  unsigned int v8; // r14d
  __int64 (__fastcall *v9)(); // rax

  v5 = 0LL;
  *a2 = 0LL;
  if ( *(_DWORD *)(a3 + 240) >= 0xFFFFFEA0 )
    return 0LL;
  v6 = EngAllocMem(0, *(_DWORD *)(a3 + 240) + 352, 0x64667454u);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = 1;
  *a2 = v6;
  memset(v6, 0, 0x160uLL);
  v7[5] = 0LL;
  *((_DWORD *)v7 + 12) = 0;
  v7[7] = a1;
  v7[8] = 0LL;
  *((_DWORD *)v7 + 18) = 0;
  v7[10] = 0LL;
  v7[3] = 0LL;
  v7[4] = 0LL;
  v7[2] = 0LL;
  v7[12] = 0LL;
  v7[11] = 0LL;
  if ( *(_DWORD *)(a3 + 176) != 2 || (v5 = EngAllocMem(0, (*(_DWORD *)(a3 + 240) + 7) & 0xFFFFFFF8, 0x64667454u)) != 0LL )
  {
    *((_OWORD *)v7 + 7) = *(_OWORD *)(a3 + 4);
    *((_OWORD *)v7 + 8) = *(_OWORD *)(a3 + 20);
    *((_OWORD *)v7 + 9) = *(_OWORD *)(a3 + 36);
    *((_OWORD *)v7 + 10) = *(_OWORD *)(a3 + 52);
    *((_OWORD *)v7 + 11) = *(_OWORD *)(a3 + 68);
    *((_OWORD *)v7 + 12) = *(_OWORD *)(a3 + 84);
    *((_OWORD *)v7 + 13) = *(_OWORD *)(a3 + 100);
    *((_OWORD *)v7 + 14) = *(_OWORD *)(a3 + 116);
    *((_OWORD *)v7 + 15) = *(_OWORD *)(a3 + 132);
    *((_OWORD *)v7 + 16) = *(_OWORD *)(a3 + 148);
    *((_OWORD *)v7 + 17) = *(_OWORD *)(a3 + 164);
    *((_OWORD *)v7 + 18) = *(_OWORD *)(a3 + 180);
    *((_OWORD *)v7 + 19) = *(_OWORD *)(a3 + 196);
    *((_OWORD *)v7 + 20) = *(_OWORD *)(a3 + 212);
    v7[42] = *(_QWORD *)(a3 + 228);
    *((_DWORD *)v7 + 86) = *(_DWORD *)(a3 + 236);
    memmove(v7 + 44, (const void *)(a3 + 240), *(unsigned int *)(a3 + 240));
    if ( v5 )
    {
      vCopy_IFIV(v7 + 44, v5);
      v7[2] = v5;
      if ( *(_DWORD *)a3 == 1 )
      {
        v9 = SearchGsubTable;
      }
      else if ( *(_DWORD *)a3 == 2 )
      {
        v9 = SearchMortTable;
      }
      else
      {
        v9 = SearchDummyTable;
      }
      v7[1] = v9;
    }
    v7[13] = 0LL;
  }
  else
  {
    v8 = 0;
    if ( *a2 )
    {
      EngFreeMem(*a2);
      *a2 = 0LL;
    }
  }
  return v8;
}
