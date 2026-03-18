/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x14005B3C0
 * Callers:
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiUnlinkNumaStandbyPage @ 0x140145774 (MiUnlinkNumaStandbyPage.c)
 *     MiInsertNumaStandbyPage @ 0x14022D9D4 (MiInsertNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int16 v8; // ax
  __int16 *v9; // rdi
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rdi
  signed __int64 v16; // rdx
  signed __int64 v17; // r8
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  signed __int64 v22; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v5 = v3 >> 58;
  v6 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
  v7 = (v3 >> 36) & 3;
  v8 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v8 == 1023 )
    v9 = MiSystemPartition;
  else
    v9 = *(__int16 **)(qword_14034F0E8 + 8LL * v8);
  if ( (unsigned __int8)HIBYTE(*(_QWORD *)(a1 + 40)) >> 2 == (_DWORD)v5 && (_DWORD)v6 == (_DWORD)v7 )
  {
    v10 = (a2 + 0x58000000000LL) / 48;
    if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
      v11 = 5LL;
    else
      v11 = *(_BYTE *)(a1 + 35) & 7;
    v12 = *((_QWORD *)v9 + 5) + 1336LL * ((unsigned __int8)HIBYTE(*(_QWORD *)(a1 + 40)) >> 2) + 24 * (v11 + 8 * v6);
    v13 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = (v13 << 28) ^ (*(_QWORD *)a2 ^ (v13 << 28)) & 0xFFFFFFFFFLL;
    if ( v13 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v12 + 416) = v10;
    }
    else
    {
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = ((v10 >> 16) & 0xFFFFF) << 36;
      *(_WORD *)(v14 + 36) = v10;
      v16 = *(_QWORD *)(v14 + 24);
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), v15 | v16 & 0xFF00000FFFFFFFFFuLL, v16);
      if ( v16 != v17 )
      {
        do
        {
          v22 = v17;
          v17 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v14 + 24),
                  v15 | v17 & 0xFF00000FFFFFFFFFuLL,
                  v17);
        }
        while ( v22 != v17 );
      }
    }
    v18 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v18 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v18 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v12 + 408) = v10;
    }
    else
    {
      v20 = 48 * v18 - 0x58000000000LL;
      v21 = *(_QWORD *)v20 ^ (v10 << 28);
      *(_BYTE *)(v20 + 39) = v10;
      result = (v10 << 28) ^ v21 & 0xFFFFFFFFFLL;
      *(_QWORD *)v20 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1, v7, v6);
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
