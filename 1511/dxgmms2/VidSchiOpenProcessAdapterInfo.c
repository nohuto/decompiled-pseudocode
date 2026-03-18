/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C0038C50
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0038994 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rcx
  void *v6; // rcx
  __int64 v7; // r14
  void *v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 i; // rbx
  void *v16; // rcx
  __int64 j; // rbx
  void *v18; // rcx
  void *v19; // rcx

  v2 = a2[1];
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v5 )
  {
    ++*v5;
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = ExAllocatePoolWithTag((POOL_TYPE)512, 0x298uLL, 0x68536956u);
  v6 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v6 )
  {
    memset(v6, 0, 0x298uLL);
    v7 = 0LL;
    for ( **(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2) = 1; (unsigned int)v7 < a2[14]; v7 = (unsigned int)(v7 + 1) )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v7 + 8) = ExAllocatePoolWithTag(
                                                                               (POOL_TYPE)512,
                                                                               0xD8uLL,
                                                                               0x68536956u);
      v8 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v7 + 8);
      if ( !v8 )
        goto LABEL_14;
      memset(v8, 0, 0xD8uLL);
    }
    v9 = 0LL;
    if ( a2[10] )
    {
      while ( 1 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v9 + 520) = ExAllocatePoolWithTag(
                                                                                   (POOL_TYPE)512,
                                                                                   0xCuLL,
                                                                                   0x68536956u);
        v8 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
        v10 = *((_QWORD *)v8 + v9 + 65);
        if ( !v10 )
          break;
        v9 = (unsigned int)(v9 + 1);
        *(_QWORD *)v10 = 0LL;
        *(_DWORD *)(v10 + 8) = 0;
        if ( (unsigned int)v9 >= a2[10] )
          goto LABEL_9;
      }
LABEL_14:
      v14 = WdLogNewEntry5_WdWarning(v8);
      WdLogEvent5_WdWarning(v14);
      for ( i = 0LL; (unsigned int)i < a2[10]; i = (unsigned int)(i + 1) )
      {
        v16 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520);
        if ( v16 )
        {
          ExFreePoolWithTag(v16, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520) = 0LL;
        }
      }
      for ( j = 0LL; (unsigned int)j < a2[14]; j = (unsigned int)(j + 1) )
      {
        v18 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8);
        if ( v18 )
        {
          ExFreePoolWithTag(v18, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8) = 0LL;
        }
      }
      v19 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
      if ( v19 )
      {
        ExFreePoolWithTag(v19, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = 0LL;
      }
      return 3221225495LL;
    }
LABEL_9:
    v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 648LL);
    v11[1] = v11;
    *v11 = v11;
    return 0LL;
  }
  v13 = WdLogNewEntry5_WdWarning(0LL);
  WdLogEvent5_WdWarning(v13);
  return 3221225495LL;
}
