/*
 * XREFs of MiDeletePageTablesForPhysicalRange @ 0x1401EFDC8
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiDecreaseUsedPtesCount @ 0x1400E46BC (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiDeletePageTablesForPhysicalRange(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r9
  _KPROCESS *v3; // rdx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbp
  __int64 v6; // r8
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  ULONG_PTR UsedPtesHandle; // rbx
  int v13; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v14; // [rsp+24h] [rbp-E4h]
  __int64 v15; // [rsp+28h] [rbp-E0h]
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+38h] [rbp-D0h]

  v1 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v2 = 0x7FFFFFFFF8LL;
  v14 = 0;
  v3 = (_KPROCESS *)a1;
  v16 = 0LL;
  v17 = 0LL;
  v4 = *(unsigned int *)(a1 + 24) | v1;
  v15 = 20LL;
  v5 = v4 << 12;
  v13 = 1;
  v6 = 0xFFFFF68000000000uLL;
  v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x97FFFFFFFF8LL;
  v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( v7 < v8 )
  {
    v10 = 512 - ((v7 >> 3) & 0x1FF);
    if ( v10 > (__int64)(v8 - v7) >> 3 )
      v10 = (__int64)(v8 - v7) >> 3;
    v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v9) - 0x58000000000LL;
    MiLockPageAtDpcInline(v11);
    *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    UsedPtesHandle = MiGetUsedPtesHandle(v5);
    MiDecreaseUsedPtesCount(UsedPtesHandle, 1u);
    if ( (*(_DWORD *)(UsedPtesHandle + 16) & 0x3FF0000) == 0 )
      MiDeletePageTableHierarchy(&v13, v7);
    v7 += 8 * v10;
    v9 += 8LL;
    v5 += v10 << 12;
  }
  MiFlushTbList((__int64)&v13, v3, v6, v2);
}
