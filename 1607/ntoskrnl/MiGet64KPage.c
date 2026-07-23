/*
 * XREFs of MiGet64KPage @ 0x1401FB5F0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 *     MiGetClusterPage @ 0x1401F6144 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiReplenishFromNodeLargePages @ 0x140089BD0 (MiReplenishFromNodeLargePages.c)
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertLargePageInNodeList @ 0x1401FB978 (MiInsertLargePageInNodeList.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 */

__int64 __fastcall MiGet64KPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned int i; // ebp
  int v17; // r8d
  unsigned __int64 v18; // rbp
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // [rsp+38h] [rbp-A0h]
  __int64 v22; // [rsp+40h] [rbp-98h]
  __int64 v23; // [rsp+48h] [rbp-90h]
  unsigned __int64 v24; // [rsp+50h] [rbp-88h]
  __int64 v25; // [rsp+60h] [rbp-78h]
  unsigned __int64 v26; // [rsp+68h] [rbp-70h]
  char v27[16]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-58h] BYREF
  char v29; // [rsp+92h] [rbp-46h]
  int v31; // [rsp+F8h] [rbp+20h]

  v5 = 3;
  while ( 1 )
  {
    result = MiReplenishFromNodeLargePages(a1, --v5, 2, a2, 4u);
    v22 = result;
    v7 = result;
    if ( result )
      break;
    if ( !v5 )
      return result;
  }
  v8 = MiLargePageSizes[v5];
  v9 = *(_BYTE *)(result + 34) & 7;
  v21 = v9;
  if ( v8 != 16 )
  {
    v10 = (unsigned int)(v5 + 1);
    v31 = v5 + 1;
    do
    {
      v11 = MiLargePageSizes[v10];
      v12 = 0LL;
      v24 = 0LL;
      v13 = (v7 + 0x58000000000LL) / 48;
      v26 = v8 / v11;
      v23 = v13;
      if ( v8 / v11 )
      {
        v14 = 48 * v11;
        v25 = v8 / v11 - 1;
        do
        {
          v15 = v7 + 48;
          if ( v11 > 1 )
          {
            for ( i = 1; i < v11; ++i )
            {
              MiLockPageAtDpcInline(v15);
              *(_QWORD *)(v15 + 40) ^= (MiLargePageContainingFrames[(unsigned int)v10] ^ *(_QWORD *)(v15 + 40)) & 0xFFFFFFFFFLL;
              *(_QWORD *)(v15 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v15 += 48LL;
            }
            v7 = v22;
            v9 = v21;
            v13 = v23;
            v12 = v24;
            v14 = 48 * v11;
          }
          MiLockPageAtDpcInline(v7);
          *(_QWORD *)(v7 + 40) ^= (MiLargePageContainingFrames[(unsigned int)v10] ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
          if ( v12 != v25 )
          {
            *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
            *(_BYTE *)(v7 + 34) ^= (*(_BYTE *)(v7 + 34) ^ v9) & 7;
            MiInsertLargePageInNodeList(v13, v11, v9);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v13 += v11;
          v7 += v14;
          ++v12;
          v23 = v13;
          v22 = v7;
          v24 = v12;
        }
        while ( v12 < v26 );
        LODWORD(v10) = v31;
      }
      v10 = (unsigned int)(v10 + 1);
      v7 += -48LL * v11;
      v31 = v10;
      v22 = v7;
      v8 = v11;
    }
    while ( v11 != 16 );
  }
  v17 = MiProtectionToCacheAttribute(a3);
  v28 = 0LL;
  v29 = v29 & 0x3F | 0x40;
  if ( v9 )
    MiSetOriginalPtePfnFromFreeList(&v28);
  if ( v17 != 1 || MiPfnZeroingNeeded((__int64)v27) )
    MiZeroAndConvertLargePage(v7, v8);
  v18 = ((__int64)((unsigned __int128)((v7 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)
      + 1
      + ((unsigned __int64)((unsigned __int128)((v7 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63);
  v19 = (_QWORD *)(v7 + 40);
  do
  {
    MiLockPageAtDpcInline((__int64)(v19 - 5));
    *(v19 - 5) = 0LL;
    *v19 &= 0xFFFFFFF000000000uLL;
    *(v19 - 3) = 0LL;
    v20 = 0xFFFFFFFFFLL;
    if ( v8 != 1 )
      v20 = v18;
    MiSetPfnBlink((__int64)(v19 - 5), v20, 1);
    *((_BYTE *)v19 - 6) = *((_BYTE *)v19 - 6) & 0xF8 | 5;
    _InterlockedAnd64(v19 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    ++v18;
    v19 += 6;
    --v8;
  }
  while ( v8 );
  return v7;
}
