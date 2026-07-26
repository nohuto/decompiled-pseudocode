/*
 * XREFs of ndisInvokeNextReceiveHandler @ 0x1C0010604
 * Callers:
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000E750 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0053AA0 (ndisDoLoopbackNetBufferList.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0066480 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0003F00 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
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
  struct _NET_BUFFER_LIST *v10; // r9
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *Alignment; // rcx
  unsigned int j; // eax
  struct _NDIS_FILTER_BLOCK *v14; // r14
  __int64 v15; // rbx
  char v16; // r15
  struct _NET_BUFFER_LIST *v17; // r9
  int v18; // esi
  struct _NET_BUFFER_LIST **v19; // rsi
  void *NextIndicateReceiveNetBufferListsContext; // r12
  void (__fastcall *NextIndicateReceiveNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r13
  unsigned __int64 v22; // rcx
  struct _NET_BUFFER_LIST *Scratch; // r12
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v26; // eax
  struct _NET_BUFFER_LIST *v27; // rbx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // eax
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
    v18 = a4 & 2;
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
        if ( !v18 )
          ndisQueueStackExpansionFallbackNbls(a5, a1, 0);
      }
    }
    else
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v19 = (struct _NET_BUFFER_LIST **)v32;
      NextIndicateReceiveNetBufferListsContext = a6;
      NextIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))a7;
      v32[1] = a1;
      v32[0] = a1;
      a1->Scratch = 0LL;
      a1->ChildRefCount = a4;
      a1->Status = a2;
      v22 = a1->Link.Alignment;
      v31 = a6;
      v43 = CurrentIrql;
      v32[2] = 0LL;
      if ( !v22 )
        goto LABEL_15;
      *(_QWORD *)(v22 + 112) = a3;
      while ( 1 )
      {
        CurrentIrql = v43;
LABEL_15:
        if ( v8->Header.Type != 5 )
          break;
        if ( !*v19 )
          return;
        v14 = v8;
        v15 = (__int64)v8->IterativeDataPathTracker[CurrentIrql];
        v16 = *(_BYTE *)(v15 + 64);
        *(_BYTE *)(v15 + 64) = 1;
        v17 = *v19;
        *v19 = 0LL;
        if ( v17 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v17->Scratch;
            ChildRefCount = v17->ChildRefCount;
            NdisReserved2 = v17->NdisReserved2;
            if ( v17->Link.Alignment )
              v26 = *(_DWORD *)(v17->Link.Alignment + 112);
            else
              v26 = 1;
            v17->ChildRefCount = 0;
            ndisCallReceiveHandler(
              v8,
              NextIndicateReceiveNetBufferListsHandler,
              v31,
              v17,
              NdisReserved2,
              v26,
              ChildRefCount);
            v17 = Scratch;
          }
          while ( Scratch );
          NextIndicateReceiveNetBufferListsContext = v31;
          v14 = v8;
        }
        *(_BYTE *)(v15 + 64) = 0;
        if ( v16 )
        {
          *(_BYTE *)(v15 + 64) = 1;
          break;
        }
        NextIndicateReceiveNetBufferListsContext = v14->NextIndicateReceiveNetBufferListsContext;
        v19 = (struct _NET_BUFFER_LIST **)(v15 + 48);
        NextIndicateReceiveNetBufferListsHandler = v14->NextIndicateReceiveNetBufferListsHandler;
        v8 = (struct _NDIS_FILTER_BLOCK *)v8->NextIndicateReceiveNetBufferListsObject;
        v31 = NextIndicateReceiveNetBufferListsContext;
      }
      v10 = *v19;
      if ( *v19 )
      {
        *v19 = 0LL;
        do
        {
          v27 = (struct _NET_BUFFER_LIST *)v10->Scratch;
          v28 = v10->ChildRefCount;
          v29 = v10->NdisReserved2;
          if ( v10->Link.Alignment )
            v30 = *(_DWORD *)(v10->Link.Alignment + 112);
          else
            v30 = 1;
          v10->ChildRefCount = 0;
          ndisCallReceiveHandler(
            v8,
            NextIndicateReceiveNetBufferListsHandler,
            NextIndicateReceiveNetBufferListsContext,
            v10,
            v29,
            v30,
            v28);
          v10 = v27;
        }
        while ( v27 );
      }
    }
  }
}
