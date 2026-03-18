/*
 * XREFs of MiDeletePageTablesForPhysicalRange @ 0x1401DF250
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x1400E12D8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

void __fastcall MiDeletePageTablesForPhysicalRange(__int64 a1)
{
  __int64 v1; // rbp
  _KPROCESS *v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG_PTR v13; // rbx
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v16; // [rsp+24h] [rbp-E4h]
  __int64 v17; // [rsp+28h] [rbp-E0h]
  __int64 v18; // [rsp+30h] [rbp-D8h]
  __int64 v19; // [rsp+38h] [rbp-D0h]

  v1 = *(unsigned __int8 *)(a1 + 32);
  v2 = (_KPROCESS *)a1;
  v16 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v3 = *(unsigned int *)(a1 + 24);
  v4 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v5 = (v3 | (v1 << 32)) << 12;
  v17 = 20LL;
  v15 = 1;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 8 * (v4 & 0xFFFFFFFFFLL) - 0x97FFFFFFFF8LL;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( v6 < v7 )
  {
    v9 = 512 - ((v6 >> 3) & 0x1FF);
    if ( v9 > (__int64)(v7 - v6) >> 3 )
      v9 = (__int64)(v7 - v6) >> 3;
    v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v8) - 0x58000000000LL;
    MiLockPageAtDpcInline(v10, v11, v12);
    *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = MI_GET_USED_PTES_HANDLE(v5);
    MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v13, 1LL, v14);
    if ( ((*(_DWORD *)(v13 + 16) >> 14) & 0x3FF) == 0 )
      MiDeletePageTableHierarchy(&v15, v6);
    v6 += 8 * v9;
    v8 += 8LL;
    v5 += v9 << 12;
  }
  MiFlushTbList((__int64)&v15, v2);
}
