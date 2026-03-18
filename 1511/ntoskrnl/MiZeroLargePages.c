/*
 * XREFs of MiZeroLargePages @ 0x140131E1C
 * Callers:
 *     MiZeroNodePages @ 0x140131668 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x140131D18 (MiZeroLargePageThread.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiZeroLargePage @ 0x1400E4A68 (MiZeroLargePage.c)
 */

__int64 __fastcall MiZeroLargePages(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // edi
  unsigned int v7; // r12d
  unsigned int v8; // r8d
  signed __int32 v9; // r14d
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  bool v15; // zf
  signed __int32 v16; // eax
  signed __int32 v18[22]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+60h] [rbp+8h]
  unsigned __int64 v20; // [rsp+68h] [rbp+10h]

  v3 = *(_QWORD *)(a2 + 32);
  v5 = 0;
  v20 = *(_QWORD *)(a2 + 48);
  v7 = 0;
  v8 = *(_DWORD *)(v3 + 64);
  v9 = *(_DWORD *)(v3 + 96);
  v19 = v8;
  v10 = __rdtsc();
  _InterlockedOr(v18, 0);
  do
  {
    v11 = MiUnlinkNodeLargePage((__int64)MiSystemPartition, v8 >> byte_1402FE6D9, 4u, 1);
    v12 = v11;
    if ( !v11 )
      break;
    MiZeroLargePage(v11, a2);
    v13 = (unsigned __int8)MiLockPageInline(v12);
    MiInsertLargePageInNodeList((v12 + 0x58000000000LL) / 48, 0x200uLL, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v13);
    --a3;
    ++v7;
    if ( v20 )
    {
      _InterlockedOr(v18, 0);
      v14 = __rdtsc();
      if ( v14 - v10 <= v20 )
      {
        v5 = 0;
      }
      else if ( (unsigned int)++v5 >= 8 )
      {
        v5 = 0;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a2 + 32) + 96LL), v9 + 1, v9);
        v15 = v9 == v16;
        v9 = v16;
        if ( v15 )
          return v7;
      }
      v10 = v14;
    }
    v8 = v19;
  }
  while ( a3 );
  return v7;
}
