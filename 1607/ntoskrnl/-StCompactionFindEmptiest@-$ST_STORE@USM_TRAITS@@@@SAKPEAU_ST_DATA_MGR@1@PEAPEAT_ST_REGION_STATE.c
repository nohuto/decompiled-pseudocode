/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140120948
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  _QWORD *v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rsi
  unsigned __int16 *v13; // r13
  unsigned __int16 v14; // ax
  unsigned int v15; // ecx
  unsigned __int16 **v16; // rbx
  unsigned int v17; // r8d
  __int16 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v19 |= 0x1FFFu;
  v7 = a2;
  v8 = (unsigned __int64)&a2[a3];
  v9 = 0LL;
  v10 = (8 * (unsigned __int64)a3 + 7) >> 3;
  if ( (unsigned __int64)a2 > v8 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      ++v9;
      *v7++ = &v19;
    }
    while ( v9 < v10 );
  }
  v11 = 0;
  LODWORD(v12) = -1;
LABEL_6:
  while ( 1 )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (_DWORD)v12 == *(_DWORD *)(a1 + 788) )
      return v11;
    v13 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1016) + 2 * v12);
    v14 = *v13;
    if ( (*v13 & 0x1FFF) != 0 && (v14 & 0x1FFFu) <= a4 )
    {
      v15 = (unsigned __int8)*(_DWORD *)(a1 + 776) ? 0 : v14 >> 13;
      if ( (_DWORD)v12 != *(_DWORD *)(a1 + 16 * (v15 + 76LL)) )
      {
        v16 = (unsigned __int16 **)a2;
        if ( (unsigned __int64)a2 < v8 )
        {
          while ( (unsigned __int16)(*v13 & 0x1FFF) >= (unsigned __int16)(**v16 & 0x1FFF) )
          {
            if ( (unsigned __int64)++v16 >= v8 )
              goto LABEL_6;
          }
          memmove(v16 + 1, v16, v8 - (_QWORD)v16 - 8);
          v17 = v20;
          *v16 = v13;
          if ( v11 >= v17 || (++v11, v11 >= v17) )
            a4 = (**(_WORD **)(v8 - 8) & 0x1FFF) - 1;
        }
      }
    }
  }
}
