/*
 * XREFs of ?SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z @ 0x1402570EC
 * Callers:
 *     SmWdProcessStore @ 0x1402586CC (SmWdProcessStore.c)
 *     SmWdWritesApcRoutine @ 0x140258BC0 (SmWdWritesApcRoutine.c)
 * Callees:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14013ED50 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 */

void __fastcall SmWdCompleteWorkItems(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PF_QUEUE *v4; // rbx
  __int64 *v5; // r8
  __int64 *v6; // r10
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v4 = (struct _PF_QUEUE *)a1;
  while ( 1 )
  {
    v5 = (__int64 *)*((_QWORD *)v4 + 1);
    if ( v5 == (__int64 *)v4 )
      break;
    v6 = *(__int64 **)v4;
    *(_QWORD *)v4 = **(_QWORD **)v4 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v6 == v5 )
    {
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = v4;
    }
    else
    {
      a1 = *v5 & 7;
      *v5 = a1 | (8 * ((unsigned __int64)*v5 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(a1, a2, (__int64)v6, &v7);
  }
}
