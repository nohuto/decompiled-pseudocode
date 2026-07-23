/*
 * XREFs of PnprAllocateMappingReserves @ 0x140644040
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnprFreeMappingReserve @ 0x140644578 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x14064499C (PnprInitializeMappingReserve.c)
 */

__int64 __fastcall PnprAllocateMappingReserves(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  SIZE_T v6; // rbx
  _QWORD *PoolWithTag; // rsi
  int v8; // ebx
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  SIZE_T v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx

  v6 = 24 * a3;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x51706E50u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v9 = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x51706E50u);
  if ( v9 )
  {
    memset(PoolWithTag, 0, v6);
    memset(v9, 0, v6);
    v10 = 0LL;
    if ( a3 )
    {
      while ( 1 )
      {
        v8 = PnprInitializeMappingReserve(2LL, &PoolWithTag[3 * v10]);
        if ( v8 < 0 )
          break;
        v8 = PnprInitializeMappingReserve(2050LL, &v9[3 * v10]);
        if ( v8 < 0 )
        {
          PnprFreeMappingReserve(&PoolWithTag[3 * v10]);
          goto LABEL_10;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= a3 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v8 = 0;
LABEL_10:
      if ( v8 >= 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( v9 && *PoolWithTag && *v9 )
  {
    v11 = PnprContext;
    v12 = *(unsigned int *)(PnprContext + 180);
    if ( !PoolWithTag[3 * v12] )
    {
      *(_OWORD *)&PoolWithTag[3 * v12] = *(_OWORD *)PoolWithTag;
      PoolWithTag[3 * v12 + 2] = PoolWithTag[2];
      v13 = 3LL * *(unsigned int *)(v11 + 180);
      *(_OWORD *)&v9[v13] = *(_OWORD *)v9;
      v9[v13 + 2] = v9[2];
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
    }
    v8 = 0;
LABEL_17:
    *a1 = PoolWithTag;
    *a2 = v9;
    return (unsigned int)v8;
  }
  ExFreePoolWithTag(PoolWithTag, 0x51706E50u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x51706E50u);
  return (unsigned int)v8;
}
