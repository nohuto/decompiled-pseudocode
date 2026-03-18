/*
 * XREFs of ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003E0BC
 * Callers:
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00361B4 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C003DF4C (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C003E20C (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0059518 (-ResumePagingQueues@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0059608 (-SuspendPagingQueues@VIDMM_DEVICE@@IEAAXXZ.c)
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
  struct _KEVENT *v12; // rcx
  __int64 *v13; // rdx
  __int64 **v14; // rax

  if ( !a2 )
  {
    v13 = (__int64 *)*a1;
    v14 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v14 != a1 )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = (__int64)v14;
    *a1 = 0LL;
    a1[1] = 0LL;
    *((_DWORD *)a1 + 26) = 0;
    v12 = (struct _KEVENT *)a1[14];
    goto LABEL_30;
  }
  v2 = a2 - 1;
  if ( !v2 )
  {
    if ( *((_DWORD *)a1 + 26) == 2 )
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
    *((_DWORD *)a1 + 26) = 1;
    if ( *((_BYTE *)a1 + 120) )
    {
      v10 = v9 + 9;
      v11 = *v10;
      *a1 = *v10;
      a1[1] = (__int64)v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
    }
    else if ( *((_BYTE *)a1 + 121) )
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
    v12 = *(struct _KEVENT **)(a1[10] + 120);
LABEL_30:
    KeSetEvent(v12, 0, 0);
    return;
  }
  if ( v2 == 1 )
  {
    if ( *((_DWORD *)a1 + 26) == 1 )
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
    *((_DWORD *)a1 + 26) = 2;
  }
}
