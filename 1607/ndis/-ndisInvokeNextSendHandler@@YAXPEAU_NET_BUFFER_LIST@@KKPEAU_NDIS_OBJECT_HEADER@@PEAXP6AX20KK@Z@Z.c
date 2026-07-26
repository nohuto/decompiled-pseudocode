/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C001E204
 * Callers:
 *     ndisFilterSendNetBufferLists @ 0x1C000D780 (ndisFilterSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C000DFF0 (NdisFSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C0058FE0 (ndisSendNBLToFilter.c)
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0004C40 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeNextSendHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        struct _NDIS_FILTER_BLOCK *a4,
        void *a5,
        void (*a6)(void))
{
  struct _NDIS_FILTER_BLOCK *v6; // rdi
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v9; // r14
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r13
  void *NextSendNetBufferListsContext; // r10
  bool v12; // zf
  struct _NDIS_FILTER_BLOCK *v13; // r15
  __int64 v14; // rsi
  char v15; // r12
  struct _NET_BUFFER_LIST *v16; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v18; // r9
  struct _NET_BUFFER_LIST *v19; // rbx
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *Alignment; // rcx
  unsigned int j; // eax
  unsigned int NdisReserved2; // [rsp+28h] [rbp-69h]
  unsigned int v24; // [rsp+28h] [rbp-69h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-59h]
  unsigned int v26; // [rsp+38h] [rbp-59h]
  unsigned int v27; // [rsp+48h] [rbp-49h]
  void *v28; // [rsp+50h] [rbp-41h]
  struct _NET_BUFFER_LIST *v29; // [rsp+60h] [rbp-31h] BYREF
  struct _NET_BUFFER_LIST *v30; // [rsp+68h] [rbp-29h]
  __int64 v31; // [rsp+70h] [rbp-21h]
  _BYTE v32[8]; // [rsp+78h] [rbp-19h] BYREF
  struct _NDIS_OBJECT_HEADER *p_Header; // [rsp+80h] [rbp-11h]
  void *v34; // [rsp+88h] [rbp-9h]
  void (*v35)(void); // [rsp+90h] [rbp-1h]
  struct _NET_BUFFER_LIST *v36; // [rsp+98h] [rbp+7h]
  unsigned int v37; // [rsp+A0h] [rbp+Fh]
  __int64 v38; // [rsp+A4h] [rbp+13h]
  unsigned int v39; // [rsp+ACh] [rbp+1Bh]

  v6 = a4;
  if ( a4->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, a3);
  }
  else if ( !ndisIterativeDataPathDisabled && ((a3 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    Number = KeGetPcr()->Prcb.Number;
    v9 = &v29;
    NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))a6;
    NextSendNetBufferListsContext = a5;
    v30 = 0LL;
    v29 = 0LL;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a3;
    a1->Status = a2;
    v12 = a4->Header.Type == 5;
    v30 = a1;
    v27 = Number;
    v31 = 0LL;
    v29 = a1;
    while ( 1 )
    {
      v28 = NextSendNetBufferListsContext;
      if ( !v12 )
        break;
      if ( !*v9 )
        return;
      v13 = v6;
      v14 = (__int64)v6->IterativeDataPathTracker[Number];
      v15 = *(_BYTE *)(v14 + 16);
      *(_BYTE *)(v14 + 16) = 1;
      v16 = *v9;
      *v9 = 0LL;
      if ( v16 )
      {
        do
        {
          Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
          ChildRefCount = v16->ChildRefCount;
          NdisReserved2 = v16->NdisReserved2;
          v16->ChildRefCount = 0;
          ndisCallSendHandler(v6, NextSendNetBufferListsHandler, v28, v16, NdisReserved2, 0, ChildRefCount);
          v16 = Scratch;
        }
        while ( Scratch );
        v13 = v6;
        NextSendNetBufferListsContext = v28;
        Number = v27;
      }
      *(_BYTE *)(v14 + 16) = 0;
      if ( v15 )
      {
        *(_BYTE *)(v14 + 16) = 1;
        break;
      }
      v6 = (struct _NDIS_FILTER_BLOCK *)v6->NextSendNetBufferListsObject;
      v9 = (struct _NET_BUFFER_LIST **)v14;
      NextSendNetBufferListsHandler = v13->NextSendNetBufferListsHandler;
      NextSendNetBufferListsContext = v13->NextSendNetBufferListsContext;
      v12 = v6->Header.Type == 5;
    }
    v18 = *v9;
    if ( *v9 )
    {
      *v9 = 0LL;
      do
      {
        v19 = (struct _NET_BUFFER_LIST *)v18->Scratch;
        v26 = v18->ChildRefCount;
        v24 = v18->NdisReserved2;
        v18->ChildRefCount = 0;
        ndisCallSendHandler(v6, NextSendNetBufferListsHandler, NextSendNetBufferListsContext, v18, v24, 0, v26);
        NextSendNetBufferListsContext = v28;
        v18 = v19;
      }
      while ( v19 );
    }
  }
  else
  {
    v34 = a5;
    v36 = a1;
    v37 = a2;
    v35 = a6;
    p_Header = &a4->Header;
    v38 = 0LL;
    v39 = a3;
    if ( ndisExpandStack((void (*)(void *))ndisDataPathExpandStackCallback, v32) < 0 )
    {
      for ( i = a1; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        i->Status = -1073741670;
      Alignment = a1;
      for ( j = 0; Alignment; ++j )
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      _InterlockedExchangeAdd(&v6->DroppedSendNbls, j);
      ndisQueueStackExpansionFallbackNbls(v6, a1, 1u);
    }
  }
}
