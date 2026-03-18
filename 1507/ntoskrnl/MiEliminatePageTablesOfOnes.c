/*
 * XREFs of MiEliminatePageTablesOfOnes @ 0x1407CB738
 * Callers:
 *     MiBuildPagedPool @ 0x1407C9C28 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
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
__int64 __fastcall MiEliminatePageTablesOfOnes(unsigned __int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v2; // r12
  unsigned __int64 v3; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+28h] [rbp-A9h] BYREF
  int v24; // [rsp+38h] [rbp-99h] BYREF
  int v25; // [rsp+3Ch] [rbp-95h]
  __int64 v26; // [rsp+40h] [rbp-91h]
  __int64 v27; // [rsp+48h] [rbp-89h]
  __int64 v28; // [rsp+50h] [rbp-81h]

  v2 = 0LL;
  v24 = 0;
  v3 = a1;
  v27 = 0LL;
  v28 = 0LL;
  v5 = qword_1403D0218 ^ (qword_1403D0218 ^ (qword_14034F6F8 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  v6 = (__int64)(a1 << 25) >> 16;
  LOWORD(v25) = 0;
  v26 = 20LL;
  if ( v6 + 0x904C0000000LL <= 0x3FFFFFFF )
    v5 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v6 >= 0xFFFFF68000000000uLL
    || v6 >= 0xFFFFF6FB40000000uLL
    && v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v6 >= 0xFFFFF6FB7DA00000uLL
    && v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v5 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v6) )
    v5 |= 0x100uLL;
  result = 0x8000000000000000uLL;
  v9 = 0LL;
  v10 = ~v7 & (v5 | 0x8000000000000000uLL);
  if ( a2 )
  {
    v11 = 2040LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)v6;
      result = v6 + 0x90482413000LL;
      if ( v6 + 0x90482413000LL <= v11 )
      {
        result = MiPteHasShadow();
        if ( (_DWORD)result )
        {
          if ( (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
          {
            result = (__int64)KeGetCurrentThread();
            v14 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1520LL);
            if ( v14 )
            {
              result = *(_QWORD *)(v14 + 8 * (v13 & (v6 >> 3)));
              if ( (result & 0x20) != 0 )
                v12 |= 0x20uLL;
              if ( (result & 0x42) != 0 )
                v12 |= 0x42uLL;
            }
          }
        }
      }
      if ( v12 == v10 )
      {
        v6 += 8LL;
        if ( (v6 & 0xFFF) != 0 )
          continue;
      }
      if ( (v6 & 0xFFF) != 0 )
      {
        v6 = (__int64)((v3 << 25) + 0x10000000) >> 16;
      }
      else
      {
        v15 = *(_QWORD *)v3;
        v16 = v3 + 0x90482413000LL;
        if ( v3 + 0x90482413000LL <= v11
          && (unsigned int)MiPteHasShadow()
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          v18 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * (v17 & (v3 >> 3)));
            if ( (v19 & 0x20) != 0 )
              v15 |= 0x20uLL;
            if ( (v19 & 0x42) != 0 )
              v15 |= 0x42uLL;
          }
        }
        v20 = qword_14034F770;
        v23 = v15;
        *(_QWORD *)v3 = qword_14034F770;
        if ( v16 <= v11 )
          MiWritePteShadow(v3, v20);
        MiInsertTbFlushEntry((__int64)&v24, (__int64)(v3 << 25) >> 16, 1LL, 0);
        v11 = 2040LL;
        if ( (unsigned __int64)&STACK[0x90482413028] <= 0x7F8
          && (unsigned int)MiPteHasShadow()
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)&v23 >> 3) & 0x1FF));
            if ( (v22 & 0x20) != 0 )
              v15 |= 0x20uLL;
            if ( (v22 & 0x42) != 0 )
              v15 |= 0x42uLL;
          }
        }
        result = 48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        *(_QWORD *)result = v2;
        v2 = (volatile signed __int32 *)result;
      }
      v3 += 8LL;
      if ( ++v9 >= a2 )
        break;
    }
    if ( v2 )
    {
      MiFlushTbList((__int64)&v24);
      return MiReturnSplitPages(v2);
    }
  }
  return result;
}
