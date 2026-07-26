/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0022578
 * Callers:
 *     ndisFilterSendNetBufferLists @ 0x1C000DD70 (ndisFilterSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C0054960 (ndisSendNBLToFilter.c)
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000E400 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0025288 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
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
  void *NextSendNetBufferListsContext; // r10
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r13
  struct _NDIS_FILTER_BLOCK *v12; // r15
  __int64 v13; // rsi
  char v14; // r12
  struct _NET_BUFFER_LIST *v15; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v17; // r9
  struct _NET_BUFFER_LIST *v18; // rbx
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *Alignment; // rcx
  unsigned int j; // eax
  unsigned int NdisReserved2; // [rsp+28h] [rbp-69h]
  unsigned int v23; // [rsp+28h] [rbp-69h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-59h]
  unsigned int v25; // [rsp+38h] [rbp-59h]
  unsigned int v26; // [rsp+48h] [rbp-49h]
  void *v27; // [rsp+50h] [rbp-41h]
  _QWORD v28[3]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-19h] BYREF
  struct _NDIS_OBJECT_HEADER *p_Header; // [rsp+80h] [rbp-11h]
  void *v31; // [rsp+88h] [rbp-9h]
  void (*v32)(void); // [rsp+90h] [rbp-1h]
  struct _NET_BUFFER_LIST *v33; // [rsp+98h] [rbp+7h]
  unsigned int v34; // [rsp+A0h] [rbp+Fh]
  __int64 v35; // [rsp+A4h] [rbp+13h]
  unsigned int v36; // [rsp+ACh] [rbp+1Bh]

  v6 = a4;
  if ( a4->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, a3);
  }
  else if ( !ndisIterativeDataPathDisabled && ((a3 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    Number = KeGetPcr()->Prcb.Number;
    v9 = (struct _NET_BUFFER_LIST **)v28;
    NextSendNetBufferListsContext = a5;
    NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))a6;
    v27 = a5;
    v26 = Number;
    v28[2] = 0LL;
    v28[0] = a1;
    v28[1] = a1;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a3;
    a1->Status = a2;
    if ( a4->Header.Type == 5 )
    {
      while ( *v9 )
      {
        v12 = v6;
        v13 = (__int64)v6->IterativeDataPathTracker[Number];
        v14 = *(_BYTE *)(v13 + 16);
        *(_BYTE *)(v13 + 16) = 1;
        v15 = *v9;
        *v9 = 0LL;
        if ( v15 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v15->Scratch;
            ChildRefCount = v15->ChildRefCount;
            NdisReserved2 = v15->NdisReserved2;
            v15->ChildRefCount = 0;
            ndisCallSendHandler(v6, NextSendNetBufferListsHandler, v27, v15, NdisReserved2, 0, ChildRefCount);
            v15 = Scratch;
          }
          while ( Scratch );
          v12 = v6;
          NextSendNetBufferListsContext = v27;
          Number = v26;
        }
        *(_BYTE *)(v13 + 16) = 0;
        if ( v14 )
        {
          *(_BYTE *)(v13 + 16) = 1;
          goto LABEL_18;
        }
        v6 = (struct _NDIS_FILTER_BLOCK *)v6->NextSendNetBufferListsObject;
        v9 = (struct _NET_BUFFER_LIST **)v13;
        NextSendNetBufferListsContext = v12->NextSendNetBufferListsContext;
        NextSendNetBufferListsHandler = v12->NextSendNetBufferListsHandler;
        v27 = NextSendNetBufferListsContext;
        if ( v6->Header.Type != 5 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v17 = *v9;
      if ( *v9 )
      {
        *v9 = 0LL;
        do
        {
          v18 = (struct _NET_BUFFER_LIST *)v17->Scratch;
          v25 = v17->ChildRefCount;
          v23 = v17->NdisReserved2;
          v17->ChildRefCount = 0;
          ndisCallSendHandler(v6, NextSendNetBufferListsHandler, NextSendNetBufferListsContext, v17, v23, 0, v25);
          NextSendNetBufferListsContext = v27;
          v17 = v18;
        }
        while ( v18 );
      }
    }
  }
  else
  {
    v31 = a5;
    v33 = a1;
    v34 = a2;
    v32 = a6;
    p_Header = &a4->Header;
    v35 = 0LL;
    v36 = a3;
    if ( (int)ndisExpandStack((void (*)(void *))ndisDataPathExpandStackCallback, v29) < 0 )
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
