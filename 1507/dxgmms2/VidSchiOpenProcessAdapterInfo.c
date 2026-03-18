/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C0038628
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00382EC (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // r14
  PVOID PoolWithTag; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v14; // r14
  PVOID v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 i; // rbx
  void *v22; // rcx
  __int64 j; // rbx
  void *v24; // rcx
  void *v25; // rcx

  v2 = a2[1];
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v5 )
  {
    ++*v5;
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = ExAllocatePoolWithTag((POOL_TYPE)512, 0x298uLL, 0x68536956u);
  v8 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v8 )
  {
    memset(v8, 0, 0x298uLL);
    v9 = 0LL;
    for ( **(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2) = 1; (unsigned int)v9 < a2[14]; v9 = (unsigned int)(v9 + 1) )
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xD8uLL, 0x68536956u);
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2);
      *(_QWORD *)(v12 + 8 * v9 + 8) = PoolWithTag;
      v13 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v9 + 8);
      if ( !v13 )
        goto LABEL_14;
      memset(v13, 0, 0xD8uLL);
    }
    v14 = 0LL;
    if ( a2[10] )
    {
      while ( 1 )
      {
        v15 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2);
        *(_QWORD *)(v12 + 8 * v14 + 520) = v15;
        v13 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
        v16 = *((_QWORD *)v13 + v14 + 65);
        if ( !v16 )
          break;
        v14 = (unsigned int)(v14 + 1);
        *(_QWORD *)v16 = 0LL;
        *(_DWORD *)(v16 + 8) = 0;
        if ( (unsigned int)v14 >= a2[10] )
          goto LABEL_9;
      }
LABEL_14:
      v20 = WdLogNewEntry5_WdWarning(v13, v12, v11);
      WdLogEvent5_WdWarning(v20);
      for ( i = 0LL; (unsigned int)i < a2[10]; i = (unsigned int)(i + 1) )
      {
        v22 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520);
        if ( v22 )
        {
          ExFreePoolWithTag(v22, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520) = 0LL;
        }
      }
      for ( j = 0LL; (unsigned int)j < a2[14]; j = (unsigned int)(j + 1) )
      {
        v24 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8);
        if ( v24 )
        {
          ExFreePoolWithTag(v24, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8) = 0LL;
        }
      }
      v25 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
      if ( v25 )
      {
        ExFreePoolWithTag(v25, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = 0LL;
      }
      return 3221225495LL;
    }
LABEL_9:
    v17 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 648LL);
    v17[1] = v17;
    *v17 = v17;
    return 0LL;
  }
  v19 = WdLogNewEntry5_WdWarning(0LL, v6, v7);
  WdLogEvent5_WdWarning(v19);
  return 3221225495LL;
}
