/*
 * XREFs of MiComputeFaultCluster @ 0x1400AD64C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x1400AD868 (MiAdvanceFaultList.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MI_IS_PTE_IN_STORE_EX @ 0x140123ABC (MI_IS_PTE_IN_STORE_EX.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // r11
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // r11
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  int v26; // [rsp+88h] [rbp+10h]

  v4 = a2[4];
  v5 = a2[1];
  v6 = 2LL * a2[3];
  v7 = a2[2];
  v23 = a2[3];
  v10 = *(_QWORD *)(v5 + 8 * v6) + (v4 << 12);
  v24 = v4;
  v22 = v7;
  MiAdvanceFaultList(a2);
  v12 = a2[3];
  v13 = 1LL;
  if ( v12 < v7 )
  {
    v26 = 0;
    v14 = 256LL;
    v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    if ( a4 && *(unsigned int *)(a1 + 1084) < 0x100uLL )
      v14 = *(unsigned int *)(a1 + 1084);
    if ( a3 )
    {
      if ( v14 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32))
               - (v10 >> 12)
               + 1 )
        v14 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v10 >> 12) + 1;
      v16 = *(unsigned int *)(a3 + 52);
      LODWORD(v16) = v16 & 0x7FFFFFFF;
      if ( v16 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31) )
      {
        a3 = 0LL;
        v26 = 1;
      }
    }
    if ( v14 > 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v15 & 0xFFF) == 0 || (v19 = MI_READ_PTE_LOCK_FREE(v15), v21 = v19, v20 = v19, (v19 & 1) != 0) )
          {
LABEL_13:
            v11 = v23;
            v4 = v24;
            break;
          }
          if ( v26 )
          {
            if ( (v19 & 0x400) == 0 )
              goto LABEL_13;
          }
          else if ( (v19 & 0x400) != 0
                 || (v19 & 0x800) != 0
                 || !(unsigned int)MI_GET_PAGING_FILE_OFFSET(&v21)
                 || a4 != (unsigned int)MI_IS_PTE_IN_STORE_EX(a1, v20) )
          {
            goto LABEL_13;
          }
          v15 += 8LL;
        }
        if ( ((*(_QWORD *)(a2[1] + 16 * v12) + (a2[4] << 12)) & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v13;
          MiAdvanceFaultList(a2);
          v12 = a2[3];
          if ( v12 != v22 )
          {
            v10 = v17;
            if ( v13 < v14 )
              continue;
          }
        }
        goto LABEL_13;
      }
    }
  }
  a2[4] = v4;
  result = (unsigned int)v13;
  a2[3] = v11;
  return result;
}
