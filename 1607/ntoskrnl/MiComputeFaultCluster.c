/*
 * XREFs of MiComputeFaultCluster @ 0x1400BD91C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     MiIsPteInStore @ 0x1401228A0 (MiIsPteInStore.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r14
  int v13; // r12d
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // r9
  int IsPteInStore; // eax
  unsigned __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  int v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v4 = a2[3];
  v5 = a2[4];
  v6 = a2[2];
  v8 = *(_QWORD *)(a2[1] + 16 * v4) + (v5 << 12);
  v23 = v5;
  v22 = v6;
  MiAdvanceFaultList(a2);
  v11 = *(_QWORD *)(v10 + 24);
  v12 = 1LL;
  if ( v11 < v6 )
  {
    v13 = 0;
    v14 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v15 = 256LL;
    if ( v26 && *(unsigned int *)(a1 + 1068) < 0x100uLL )
      v15 = *(unsigned int *)(a1 + 1068);
    if ( a3 )
    {
      if ( v15 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12) + 1 )
        v15 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12) + 1;
      v16 = *(unsigned int *)(a3 + 52);
      LODWORD(v16) = v16 & 0x7FFFFFFF;
      if ( v16 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31) )
      {
        a3 = 0LL;
        v13 = 1;
      }
    }
    if ( v15 > 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v14 & 0xFFF) == 0 || (v19 = MI_READ_PTE_LOCK_FREE(v14), v25 = v19, (v19 & 1) != 0) )
          {
LABEL_13:
            v5 = v23;
            break;
          }
          if ( v13 )
          {
            if ( (v19 & 0x400) == 0 )
              goto LABEL_13;
          }
          else
          {
            if ( (v19 & 0x400) != 0 )
              goto LABEL_13;
            if ( (v19 & 0x800) != 0 )
              goto LABEL_13;
            if ( !(unsigned int)MiGetPagingFileOffset((__int64)&v25) )
              goto LABEL_13;
            IsPteInStore = MiIsPteInStore(a1, v20);
            if ( v26 != IsPteInStore )
              goto LABEL_13;
          }
          v14 += 8LL;
        }
        v17 = *(_QWORD *)(v9[1] + 16 * v11) + (v9[4] << 12);
        if ( (v17 & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v8 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v12;
          MiAdvanceFaultList(v9);
          v11 = v9[3];
          if ( v11 != v22 )
          {
            v8 = v17;
            if ( v12 < v15 )
              continue;
          }
        }
        goto LABEL_13;
      }
    }
  }
  result = (unsigned int)v12;
  v9[3] = v4;
  v9[4] = v5;
  return result;
}
