/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x14053683C
 * Callers:
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x14055453C (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x14078E258 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407A4D44 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiAllowWorkingSetExpansion @ 0x14007BEDC (MiAllowWorkingSetExpansion.c)
 *     MiQuerySystemBase @ 0x1400B3D54 (MiQuerySystemBase.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     MiTranslateWsType @ 0x1400FD000 (MiTranslateWsType.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MiInitializeWorkingSetList @ 0x14046CCB8 (MiInitializeWorkingSetList.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  ULONG_PTR *v10; // r15
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned int v14; // edx
  __int64 SystemBase; // rsi
  __int64 v16; // rdx
  int v17; // ecx
  char v18; // al

  v4 = a3;
  v8 = 0LL;
  v9 = 0LL;
  if ( a3 == 1 )
  {
    v9 = qword_140326938;
    v8 = qword_140326940;
    v10 = (ULONG_PTR *)qword_140326938;
  }
  else
  {
    v11 = (int)MiTranslateWsType(a3);
    v12 = (-(__int64)(*(_QWORD *)(a1 + 6288) < 0x4000uLL) & 0xFFFFFFFFFFFFFF20uLL) + 256;
    if ( !(unsigned int)MiChargeResident((int *)a1, v12, 20LL) )
      return 0LL;
    if ( (int *)a1 == MiSystemPartition )
    {
      if ( a4 > 0xFFFFFFFFFLL )
        a4 = 0xFFFFFFFFFLL;
      v14 = (unsigned int)ExGenRandom(1) << 12;
      if ( (_DWORD)v4 == 4 )
      {
        SystemBase = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 16) = 0LL;
        v16 = v14 & 0x3FFFFFFF;
      }
      else
      {
        v17 = 11;
        if ( (_DWORD)v4 != 3 )
          v17 = 12;
        SystemBase = MiQuerySystemBase(v17);
      }
      v9 = v16 + SystemBase;
      v10 = (ULONG_PTR *)v9;
      v8 = (v9 + 16 * (a4 + 32) + 0x3FFFFFFF) & 0xFFFFFFFFC0000000uLL;
    }
    else
    {
      a4 = *(_QWORD *)(MiState[v11 + 303] + 144);
      v10 = (ULONG_PTR *)(416 * v11 + a1 + 6784);
    }
    *(_QWORD *)(a2 + 104) = v12;
  }
  v18 = v4 ^ *(_BYTE *)(a2 + 184);
  *(_WORD *)a2 = 0;
  *(_BYTE *)(a2 + 184) ^= v18 & 7;
  *(_WORD *)(a2 + 164) = *(_WORD *)a1;
  if ( (int *)a1 == MiSystemPartition && !(unsigned int)MiMapNewWorkingSetPage(a2, v9, 0) )
  {
    if ( (_DWORD)v4 != 1 )
      MiReturnResidentAvailable(*(_QWORD *)(a2 + 104));
    return 0LL;
  }
  MiInitializeWorkingSetList(a2, v10, v4, v8, a4);
  if ( (int *)a1 == MiSystemPartition && (_DWORD)v4 != 1 )
  {
    MiState[(int)MiTranslateWsType(v4) + 303] = a2;
    MiState[v4 + 293] += 2LL;
  }
  MiAllowWorkingSetExpansion(a2);
  return 1LL;
}
