/*
 * XREFs of ndisInvokeNextReceiveHandler @ 0x1C0011270
 * Callers:
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000EB20 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C004F050 (ndisDoLoopbackNetBufferList.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0062240 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000EE70 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0025288 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 */

void __fastcall ndisInvokeNextReceiveHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        void *a6,
        void (*a7)(void))
{
  unsigned __int64 CurrentIrql; // rax
  struct _NDIS_FILTER_BLOCK *v8; // rdi
  int v10; // esi
  struct _NET_BUFFER_LIST **v11; // rsi
  void *NextIndicateReceiveNetBufferListsContext; // r12
  void (__fastcall *NextIndicateReceiveNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r13
  unsigned __int64 v14; // rcx
  struct _NDIS_FILTER_BLOCK *v15; // r14
  __int64 v16; // rbx
  char v17; // r15
  struct _NET_BUFFER_LIST *v18; // r9
  struct _NET_BUFFER_LIST *Scratch; // r12
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v22; // eax
  struct _NET_BUFFER_LIST *v23; // r9
  struct _NET_BUFFER_LIST *v24; // rbx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // eax
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *Alignment; // rcx
  unsigned int j; // eax
  void *v31; // [rsp+48h] [rbp-41h]
  _QWORD v32[3]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp-19h] BYREF
  struct _NDIS_FILTER_BLOCK *v34; // [rsp+78h] [rbp-11h]
  void *v35; // [rsp+80h] [rbp-9h]
  void (*v36)(void); // [rsp+88h] [rbp-1h]
  struct _NET_BUFFER_LIST *v37; // [rsp+90h] [rbp+7h]
  unsigned int v38; // [rsp+98h] [rbp+Fh]
  int v39; // [rsp+9Ch] [rbp+13h]
  unsigned int v40; // [rsp+A0h] [rbp+17h]
  int v41; // [rsp+A4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  unsigned int v43; // [rsp+F8h] [rbp+6Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v8 = a5;
  if ( a5->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))a7)(a6, a1, a2, a3, a4);
  }
  else
  {
    v10 = a4 & 2;
    if ( (a4 & 2) != 0
      || ndisIterativeDataPathDisabled
      || (a4 & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2) )
    {
      v35 = a6;
      v37 = a1;
      v38 = a2;
      v36 = a7;
      v34 = a5;
      v39 = 2;
      v40 = a3;
      v41 = a4;
      if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v33) < 0 )
      {
        for ( i = a1; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
          i->Status = -1073741670;
        Alignment = a1;
        for ( j = 0; Alignment; ++j )
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        _InterlockedExchangeAdd(&a5->DroppedReceiveNbls, j);
        if ( !v10 )
          ndisQueueStackExpansionFallbackNbls(a5, a1, 0);
      }
    }
    else
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v11 = (struct _NET_BUFFER_LIST **)v32;
      NextIndicateReceiveNetBufferListsContext = a6;
      NextIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))a7;
      v31 = a6;
      v43 = CurrentIrql;
      v32[2] = 0LL;
      v32[0] = a1;
      v32[1] = a1;
      a1->Scratch = 0LL;
      a1->ChildRefCount = a4;
      a1->Status = a2;
      v14 = a1->Link.Alignment;
      if ( !v14 )
        goto LABEL_19;
      *(_QWORD *)(v14 + 112) = a3;
      while ( 1 )
      {
        CurrentIrql = v43;
LABEL_19:
        if ( v8->Header.Type != 5 )
          break;
        if ( !*v11 )
          return;
        v15 = v8;
        v16 = (__int64)v8->IterativeDataPathTracker[CurrentIrql];
        v17 = *(_BYTE *)(v16 + 64);
        *(_BYTE *)(v16 + 64) = 1;
        v18 = *v11;
        *v11 = 0LL;
        if ( v18 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v18->Scratch;
            ChildRefCount = v18->ChildRefCount;
            NdisReserved2 = v18->NdisReserved2;
            if ( v18->Link.Alignment )
              v22 = *(_DWORD *)(v18->Link.Alignment + 112);
            else
              v22 = 1;
            v18->ChildRefCount = 0;
            ndisCallReceiveHandler(
              v8,
              NextIndicateReceiveNetBufferListsHandler,
              v31,
              v18,
              NdisReserved2,
              v22,
              ChildRefCount);
            v18 = Scratch;
          }
          while ( Scratch );
          NextIndicateReceiveNetBufferListsContext = v31;
          v15 = v8;
        }
        *(_BYTE *)(v16 + 64) = 0;
        if ( v17 )
        {
          *(_BYTE *)(v16 + 64) = 1;
          break;
        }
        NextIndicateReceiveNetBufferListsContext = v15->NextIndicateReceiveNetBufferListsContext;
        v11 = (struct _NET_BUFFER_LIST **)(v16 + 48);
        NextIndicateReceiveNetBufferListsHandler = v15->NextIndicateReceiveNetBufferListsHandler;
        v8 = (struct _NDIS_FILTER_BLOCK *)v8->NextIndicateReceiveNetBufferListsObject;
        v31 = NextIndicateReceiveNetBufferListsContext;
      }
      v23 = *v11;
      if ( *v11 )
      {
        *v11 = 0LL;
        do
        {
          v24 = (struct _NET_BUFFER_LIST *)v23->Scratch;
          v25 = v23->ChildRefCount;
          v26 = v23->NdisReserved2;
          if ( v23->Link.Alignment )
            v27 = *(_DWORD *)(v23->Link.Alignment + 112);
          else
            v27 = 1;
          v23->ChildRefCount = 0;
          ndisCallReceiveHandler(
            v8,
            NextIndicateReceiveNetBufferListsHandler,
            NextIndicateReceiveNetBufferListsContext,
            v23,
            v26,
            v27,
            v25);
          v23 = v24;
        }
        while ( v24 );
      }
    }
  }
}
