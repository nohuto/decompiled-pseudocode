/*
 * XREFs of ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003B2A4
 * Callers:
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C003B564 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C006164C (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00798C8 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007FAE4 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGING_QUEUE::SetStatus(__int64 *a1, int a2)
{
  int v2; // edx
  __int64 *v3; // rdx
  __int64 **v4; // rax
  __int64 v5; // rax
  __int64 **v6; // rdx
  __int64 *v7; // rdx
  __int64 **v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rdx
  __int64 **v13; // rax

  if ( !a2 )
  {
    v12 = (__int64 *)*a1;
    v13 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v13 != a1 )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = (__int64)v13;
    *a1 = 0LL;
    a1[1] = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    goto LABEL_30;
  }
  v2 = a2 - 1;
  if ( !v2 )
  {
    if ( *((_DWORD *)a1 + 28) == 2 )
    {
      v7 = (__int64 *)*a1;
      v8 = (__int64 **)a1[1];
      if ( *(__int64 **)(*a1 + 8) != a1 || *v8 != a1 )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = (__int64)v8;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v9 = (__int64 *)a1[10];
    *((_DWORD *)a1 + 28) = 1;
    if ( *((_BYTE *)a1 + 128) )
    {
      v10 = v9 + 9;
      v11 = *v10;
      *a1 = *v10;
      a1[1] = (__int64)v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
    }
    else if ( *((_BYTE *)a1 + 129) )
    {
      v10 = v9 + 7;
      v11 = *v10;
      *a1 = *v10;
      a1[1] = (__int64)v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
    }
    else
    {
      v10 = v9 + 5;
      v11 = *v10;
      *a1 = *v10;
      a1[1] = (__int64)v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
    }
    *(_QWORD *)(v11 + 8) = a1;
    *v10 = (__int64)a1;
    a1 = (__int64 *)a1[10];
LABEL_30:
    KeSetEvent((PRKEVENT)a1[15], 0, 0);
    return;
  }
  if ( v2 == 1 )
  {
    if ( *((_DWORD *)a1 + 28) == 1 )
    {
      v3 = (__int64 *)*a1;
      v4 = (__int64 **)a1[1];
      if ( *(__int64 **)(*a1 + 8) != a1 || *v4 != a1 )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = (__int64)v4;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v5 = a1[10] + 88;
    v6 = *(__int64 ***)(a1[10] + 96);
    *a1 = v5;
    a1[1] = (__int64)v6;
    if ( *v6 != (__int64 *)v5 )
      __fastfail(3u);
    *v6 = a1;
    *(_QWORD *)(v5 + 8) = a1;
    *((_DWORD *)a1 + 28) = 2;
  }
}
