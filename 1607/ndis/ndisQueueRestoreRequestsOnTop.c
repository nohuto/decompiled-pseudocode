/*
 * XREFs of ndisQueueRestoreRequestsOnTop @ 0x1C0048090
 * Callers:
 *     ndisMRestoreFilterSettings @ 0x1C0011FF0 (ndisMRestoreFilterSettings.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisQueueWorkItem @ 0x1C001B848 (ndisQueueWorkItem.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisFQueueOidRequest @ 0x1C0045470 (ndisFQueueOidRequest.c)
 *     ndisMQueueOidRequest @ 0x1C00463C8 (ndisMQueueOidRequest.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueueRestoreRequestsOnTop(__int64 a1, __int64 **a2, int a3, char a4)
{
  __int64 v4; // rbx
  char v6; // r13
  unsigned int v7; // r12d
  __int64 v9; // rbp
  unsigned int v10; // r15d
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbp
  char v15; // al
  int v16; // ebx
  _LIST_ENTRY *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  void *v20; // r10
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rbx
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = a1;
  v10 = -1073741823;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(0x3Bu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a3);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_49;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a4 )
  {
    v13 = v9;
  }
  else
  {
    v13 = *(_QWORD *)(v9 + 2608);
    if ( *(_BYTE *)v13 == 5 )
    {
      while ( 1 )
      {
        v6 = ndisReferenceRef((PKSPIN_LOCK)(v13 + 312), 0xFu);
        if ( v6 == 1 )
          break;
        v13 = *(_QWORD *)(v13 + 416);
        if ( *(_BYTE *)v13 != 5 )
          goto LABEL_10;
      }
      v16 = 1;
      if ( v7 > 1 )
      {
        while ( 1 )
        {
          v6 = ndisReferenceRef((PKSPIN_LOCK)(v13 + 312), 0xFu);
          if ( !v6 )
            break;
          if ( ++v16 >= v7 )
            goto LABEL_22;
        }
        for ( ; v16; --v16 )
          ndisDereferenceRef((PKSPIN_LOCK)(v13 + 312), 0xFu);
      }
LABEL_22:
      if ( *(_BYTE *)v13 != 5 )
      {
LABEL_10:
        v4 = 0LL;
        goto LABEL_11;
      }
      v4 = v13;
    }
  }
LABEL_11:
  v14 = 0LL;
  if ( *(_BYTE *)v13 == 17 )
    v14 = v13;
  if ( v4 )
  {
    if ( !v6 )
      goto LABEL_47;
    v15 = ndisReferenceRef((PKSPIN_LOCK)(v4 + 312), 0xCu);
  }
  else
  {
    v15 = ndisReferenceMiniport(a1, 0x47u);
  }
  if ( v15 )
  {
    v17 = (_LIST_ENTRY *)v14;
    if ( v4 )
      v17 = (_LIST_ENTRY *)v4;
    v12[3].Blink = v17;
    if ( v4 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 160) = 2298087;
      while ( 1 )
      {
        v18 = *a2;
        if ( *a2 == (__int64 *)a2 )
          break;
        v19 = *v18;
        if ( (__int64 **)v18[1] != a2 || *(__int64 **)(v19 + 8) != v18 )
          __fastfail(3u);
        *a2 = (__int64 *)v19;
        *(_QWORD *)(v19 + 8) = a2;
        if ( (unsigned int)ndisFQueueOidRequest(v4, (__int64)(v18 - 9)) )
          ExFreePoolWithTag(v20, 0);
      }
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    }
    else
    {
      while ( 1 )
      {
        v21 = *a2;
        if ( *a2 == (__int64 *)a2 )
          break;
        v22 = *v21;
        if ( (__int64 **)v21[1] != a2 || *(__int64 **)(v22 + 8) != v21 )
          __fastfail(3u);
        *a2 = (__int64 *)v22;
        v23 = v21 - 9;
        *(_QWORD *)(v22 + 8) = a2;
        if ( (unsigned int)ndisMQueueOidRequest(v14, (__int64)(v21 - 9)) )
          ExFreePoolWithTag(v23, 0);
      }
    }
    v12[2].Blink = 0LL;
    v12[2].Flink = retaddr;
    v12->Flink = 0LL;
    v12[1].Flink = (_LIST_ENTRY *)ndisDoOidRequests;
    v12[1].Blink = v12;
    ndisQueueWorkItem(v12);
    v10 = 259;
    goto LABEL_48;
  }
  if ( v6 && v7 )
  {
    do
    {
      ndisDereferenceRef((PKSPIN_LOCK)(v4 + 312), 0xFu);
      --v7;
    }
    while ( v7 );
  }
LABEL_47:
  ExFreePoolWithTag(v12, 0);
LABEL_48:
  v9 = a1;
LABEL_49:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(60LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v9, a2, v10);
  return v10;
}
