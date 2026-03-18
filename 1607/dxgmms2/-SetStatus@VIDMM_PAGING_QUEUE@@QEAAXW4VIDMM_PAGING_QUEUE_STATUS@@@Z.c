/*
 * XREFs of ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C004561C
 * Callers:
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0045914 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ?Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045AC8 (-Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BF94 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C008748C (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall VIDMM_PAGING_QUEUE::SetStatus(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v6; // rdi
  int v7; // edi
  __int64 **v8; // rcx
  __int64 *v9; // rcx
  __int64 **v10; // rax
  struct _KEVENT *v11; // rcx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  bool v14; // zf
  __int64 *v15; // rax
  __int64 **v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 **v19; // rax

  LODWORD(v4) = *(_DWORD *)&g_IsInternalReleaseOrDbg;
  v6 = (int)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = (__int64 *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    v4[3] = (__int64)a1;
    v4[4] = *((int *)a1 + 28);
    v4[5] = v6;
  }
  if ( !(_DWORD)v6 )
  {
    v9 = (__int64 *)*a1;
    v10 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v10 != a1 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    *a1 = 0LL;
    a1[1] = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    v11 = (struct _KEVENT *)a1[15];
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((_DWORD *)a1 + 28) == 2 )
    {
      v12 = (__int64 *)*a1;
      v13 = (__int64 **)a1[1];
      if ( *(__int64 **)(*a1 + 8) != a1 || *v13 != a1 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = (__int64)v13;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v14 = *((_BYTE *)a1 + 128) == 0;
    v15 = (__int64 *)a1[10];
    *((_DWORD *)a1 + 28) = 1;
    if ( v14 )
    {
      if ( *((_BYTE *)a1 + 129) )
      {
        v16 = (__int64 **)v15[11];
        v17 = v15 + 10;
        if ( *v16 != v17 )
          __fastfail(3u);
      }
      else
      {
        v16 = (__int64 **)v15[9];
        v17 = v15 + 8;
        if ( *v16 != v17 )
          __fastfail(3u);
      }
    }
    else if ( *((_DWORD *)a1 + 29) == 3 )
    {
      v16 = (__int64 **)v15[9];
      v17 = v15 + 8;
      if ( *v16 != v17 )
        __fastfail(3u);
    }
    else
    {
      v16 = (__int64 **)v15[13];
      v17 = v15 + 12;
      if ( *v16 != v17 )
        __fastfail(3u);
    }
    *a1 = (__int64)v17;
    a1[1] = (__int64)v16;
    *v16 = a1;
    v17[1] = (__int64)a1;
    v11 = *(struct _KEVENT **)(a1[10] + 152);
LABEL_13:
    LODWORD(v4) = KeSetEvent(v11, 0, 0);
    return (int)v4;
  }
  if ( v7 == 1 )
  {
    if ( *((_DWORD *)a1 + 28) == 1 )
    {
      v18 = (__int64 *)*a1;
      v19 = (__int64 **)a1[1];
      if ( *(__int64 **)(*a1 + 8) != a1 || *v19 != a1 )
        __fastfail(3u);
      *v19 = v18;
      v18[1] = (__int64)v19;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v4 = (__int64 *)(a1[10] + 112);
    v8 = *(__int64 ***)(a1[10] + 120);
    if ( *v8 != v4 )
      __fastfail(3u);
    *a1 = (__int64)v4;
    a1[1] = (__int64)v8;
    *v8 = a1;
    v4[1] = (__int64)a1;
    *((_DWORD *)a1 + 28) = 2;
  }
  return (int)v4;
}
