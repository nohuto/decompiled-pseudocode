/*
 * XREFs of MiEliminatePageTablesOfOnes @ 0x14074A504
 * Callers:
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReturnSplitPageCharges @ 0x14013226C (MiReturnSplitPageCharges.c)
 *     MiReturnPfnList @ 0x140132B4C (MiReturnPfnList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

_QWORD *__fastcall MiEliminatePageTablesOfOnes(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  _QWORD *result; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  _KPROCESS *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-108h] BYREF
  int v16; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+34h] [rbp-F4h]
  int v18; // [rsp+38h] [rbp-F0h]
  int v19; // [rsp+3Ch] [rbp-ECh]
  __int64 v20; // [rsp+40h] [rbp-E8h]
  __int64 v21; // [rsp+48h] [rbp-E0h]

  v2 = 0LL;
  v19 = 0;
  v16 = 0;
  v3 = a1;
  v20 = 0LL;
  v21 = 0LL;
  v4 = qword_140381310;
  v6 = a1 << 25 >> 16;
  v7 = qword_140381308 ^ (qword_140381308 ^ (qword_1402FF238 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  v17 = 0;
  v18 = 20;
  if ( v6 + 0x904C0000000LL <= 0x3FFFFFFF )
    v7 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v6 >= 0xFFFFF68000000000uLL
    || v6 >= 0xFFFFF6FB40000000uLL
    && v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v6 >= 0xFFFFF6FB7DA00000uLL
    && v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v7 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v6) )
    v7 |= 0x100uLL;
  result = (_QWORD *)0x8000000000000000LL;
  v9 = 0LL;
  v10 = ~v4 & (v7 | 0x8000000000000000uLL);
  if ( a2 )
  {
    do
    {
      do
      {
        result = (_QWORD *)MI_READ_PTE_LOCK_FREE((__int64 *)v6);
        if ( result != (_QWORD *)v10 )
          break;
        v6 += 8LL;
      }
      while ( (v6 & 0xFFF) != 0 );
      if ( (v6 & 0xFFF) != 0 )
      {
        v6 = ((v3 << 25) + 0x10000000) >> 16;
      }
      else
      {
        v12 = MI_READ_PTE_LOCK_FREE((__int64 *)v3);
        v13 = qword_1402FF2C0;
        v15 = v12;
        *(_QWORD *)v3 = qword_1402FF2C0;
        if ( MiPteInShadowRange(v3) )
          MiWritePteShadow(v3, v13);
        MiInsertTbFlushEntry((__int64)&v16, v3 << 25 >> 16, 1LL, 0);
        result = (_QWORD *)MI_GET_PFN_FROM_PTE((__int64)&v15);
        *result = v2;
        v2 = (__int64)result;
      }
      v3 += 8LL;
      ++v9;
    }
    while ( v9 < a2 );
    if ( v2 )
    {
      MiFlushTbList((__int64)&v16, v11);
      v14 = MiReturnPfnList(v2);
      return (_QWORD *)MiReturnSplitPageCharges(v14);
    }
  }
  return result;
}
