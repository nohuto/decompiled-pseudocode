/*
 * XREFs of ndisInvokeNextReceiveCompleteHandler @ 0x1C0058D80
 * Callers:
 *     NdisFReturnNetBufferLists @ 0x1C000E480 (NdisFReturnNetBufferLists.c)
 *     ndisFakeFilterReceiveHandler @ 0x1C0058C20 (ndisFakeFilterReceiveHandler.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00671E8 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00045B0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeNextReceiveCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        struct _NDIS_FILTER_BLOCK *a3,
        _BYTE *a4,
        void *a5,
        void (*a6)(void))
{
  _QWORD *v6; // rdi
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v10; // rsi
  void (*v11)(void); // r13
  void *v12; // r8
  bool v13; // zf
  _QWORD *v14; // r15
  __int64 v15; // r14
  char v16; // r12
  struct _NET_BUFFER_LIST *v17; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v19; // r9
  struct _NET_BUFFER_LIST *v20; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-59h]
  unsigned int v22; // [rsp+38h] [rbp-59h]
  unsigned int v23; // [rsp+48h] [rbp-49h]
  void *v24; // [rsp+50h] [rbp-41h]
  struct _NET_BUFFER_LIST *v25; // [rsp+60h] [rbp-31h] BYREF
  struct _NET_BUFFER_LIST *v26; // [rsp+68h] [rbp-29h]
  __int64 v27; // [rsp+70h] [rbp-21h]
  _BYTE v28[8]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v29; // [rsp+80h] [rbp-11h]
  __int64 v30; // [rsp+88h] [rbp-9h]
  void (*v31)(void); // [rsp+90h] [rbp-1h]
  struct _NET_BUFFER_LIST *v32; // [rsp+98h] [rbp+7h]
  int v33; // [rsp+A0h] [rbp+Fh]
  __int64 v34; // [rsp+A4h] [rbp+13h]
  unsigned int v35; // [rsp+ACh] [rbp+1Bh]

  v6 = a4;
  if ( *a4 == 17 )
    goto LABEL_20;
  if ( ndisIterativeDataPathDisabled || (a2 & 1) == 0 && KeGetCurrentIrql() != 2 )
  {
    if ( a3->Header.Type == 5 )
    {
      v30 = (__int64)a5;
      v32 = a1;
      v35 = a2;
      v31 = a6;
      v29 = a4;
      v34 = 3LL;
      v33 = 0;
      if ( ndisExpandStack((void (*)(void *))ndisDataPathExpandStackCallback, v28) < 0 )
        ndisQueueStackExpansionFallbackNbls(a3, a1, 0);
      return;
    }
LABEL_20:
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, a2);
    return;
  }
  Number = KeGetPcr()->Prcb.Number;
  v10 = &v25;
  v11 = a6;
  v12 = a5;
  v26 = 0LL;
  v25 = 0LL;
  a1->Scratch = 0LL;
  a1->ChildRefCount = a2;
  v13 = *a4 == 5;
  v26 = a1;
  v23 = Number;
  v27 = 0LL;
  v25 = a1;
  while ( 1 )
  {
    v24 = v12;
    if ( !v13 )
      break;
    if ( !*v10 )
      return;
    v14 = v6;
    v15 = v6[53] + 96LL * Number;
    v16 = *(_BYTE *)(v15 + 88);
    *(_BYTE *)(v15 + 88) = 1;
    v17 = *v10;
    *v10 = 0LL;
    if ( v17 )
    {
      do
      {
        Scratch = (struct _NET_BUFFER_LIST *)v17->Scratch;
        ChildRefCount = v17->ChildRefCount;
        v17->ChildRefCount = 0;
        ndisCallReceiveCompleteHandler(v6, v11, v24, v17, 0, 0, ChildRefCount);
        v17 = Scratch;
      }
      while ( Scratch );
      v14 = v6;
      v12 = v24;
    }
    *(_BYTE *)(v15 + 88) = 0;
    if ( v16 )
    {
      *(_BYTE *)(v15 + 88) = 1;
      break;
    }
    v6 = (_QWORD *)v6[69];
    v10 = (struct _NET_BUFFER_LIST **)(v15 + 72);
    v11 = (void (*)(void))v14[66];
    v12 = (void *)v14[67];
    Number = v23;
    v13 = *(_BYTE *)v6 == 5;
  }
  v19 = *v10;
  if ( *v10 )
  {
    *v10 = 0LL;
    do
    {
      v20 = (struct _NET_BUFFER_LIST *)v19->Scratch;
      v22 = v19->ChildRefCount;
      v19->ChildRefCount = 0;
      ndisCallReceiveCompleteHandler(v6, v11, v12, v19, 0, 0, v22);
      v12 = v24;
      v19 = v20;
    }
    while ( v20 );
  }
}
