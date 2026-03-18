/*
 * XREFs of MiJoinBitmapPages @ 0x14021ED0C
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReturnSplitPages @ 0x14015FA8C (MiReturnSplitPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiJoinBitmapPages(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 Process; // rcx
  volatile signed __int32 *v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h]
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+44h] [rbp-BCh]
  int v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+4Ch] [rbp-B4h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]

  v24 = a2;
  v3 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = a3;
  v4 = qword_1403D0218 ^ (qword_1403D0218 ^ (qword_14034F6F8 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( v3 + 0x904C0000000LL <= 0x3FFFFFFF )
    v4 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v3 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v3 >= 0xFFFFF68000000000uLL
    || v3 >= 0xFFFFF6FB40000000uLL
    && v3 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v3 >= 0xFFFFF6FB7DA00000uLL
    && v3 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v4 |= 4uLL;
  }
  v5 = MI_SHOULD_PTE_BE_GLOBAL(v3);
  Process = 256LL;
  if ( v5 )
    v4 |= 0x100uLL;
  v9 = 0LL;
  v10 = (~v6 & (v4 | 0x8000000000000000uLL) ^ ((unsigned __int64)(unsigned __int8)word_14034EC18 << 8)) & 0x100 ^ ~v6 & (v4 | 0x8000000000000000uLL);
  if ( v7 )
  {
    v11 = v7;
    v12 = 2040LL;
    v13 = v3 + 0x90482413000LL;
    do
    {
      v14 = *(_QWORD *)v3;
      if ( v13 <= v12
        && (unsigned int)MiPteHasShadow(Process, v14)
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v16 = *(_QWORD *)(Process + 1520);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8 * (v15 & (v3 >> 3)));
          if ( (v17 & 0x20) != 0 )
            v14 |= 0x20uLL;
          if ( (v17 & 0x42) != 0 )
            v14 |= 0x42uLL;
        }
      }
      v22 = v14;
      if ( (unsigned __int64)&STACK[0x90482413020] <= v12
        && (unsigned int)MiPteHasShadow(Process, v14)
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 8 * (v18 & ((unsigned __int64)&v22 >> 3)));
          if ( (v20 & 0x20) != 0 )
            v14 |= 0x20uLL;
          if ( (v20 & 0x42) != 0 )
            v14 |= 0x42uLL;
        }
      }
      Process = 0x58000000000LL;
      *(_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = v9;
      v9 = (volatile signed __int32 *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      *(_QWORD *)v3 = 0LL;
      if ( v13 <= v12 )
      {
        MiWritePteShadow(v3, 0LL);
        v12 = 2040LL;
      }
      *(_QWORD *)v3 = v10;
      if ( v13 <= v12 )
      {
        MiWritePteShadow(v3, v10);
        v12 = 2040LL;
      }
      v3 += 8LL;
      v13 += 8LL;
      --v11;
    }
    while ( v11 );
    v7 = v23;
  }
  v28 = 0;
  v25 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v26 = 0;
  v27 = 20;
  MiInsertTbFlushEntry((__int64)&v25, v24, v7, 0);
  MiFlushTbList((__int64)&v25);
  return MiReturnSplitPages(v9);
}
