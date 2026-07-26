/*
 * XREFs of ndisInvokeNextSendCompleteHandler @ 0x1C00104B8
 * Callers:
 *     NdisFSendNetBufferListsComplete @ 0x1C000D870 (NdisFSendNetBufferListsComplete.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0055774 (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0055B4C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisFakeFilterSendHandler @ 0x1C0058CA0 (ndisFakeFilterSendHandler.c)
 * Callees:
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0002230 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeNextSendCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        struct _NDIS_FILTER_BLOCK *a3,
        _BYTE *a4,
        void *a5,
        void (*a6)(void))
{
  _QWORD *v6; // rdi
  _QWORD *v9; // r15
  __int64 v10; // r14
  char v11; // r12
  struct _NET_BUFFER_LIST *v12; // r9
  void *v13; // r15
  struct _NET_BUFFER_LIST *v14; // r9
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v16; // rsi
  void (*v17)(void); // r13
  void *v18; // r8
  bool v19; // zf
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v21; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-59h]
  unsigned int v23; // [rsp+38h] [rbp-59h]
  unsigned int v24; // [rsp+48h] [rbp-49h]
  void *v25; // [rsp+50h] [rbp-41h]
  struct _NET_BUFFER_LIST *v26; // [rsp+60h] [rbp-31h] BYREF
  struct _NET_BUFFER_LIST *v27; // [rsp+68h] [rbp-29h]
  __int64 v28; // [rsp+70h] [rbp-21h]
  _BYTE v29[8]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v30; // [rsp+80h] [rbp-11h]
  void *v31; // [rsp+88h] [rbp-9h]
  void (*v32)(void); // [rsp+90h] [rbp-1h]
  struct _NET_BUFFER_LIST *v33; // [rsp+98h] [rbp+7h]
  int v34; // [rsp+A0h] [rbp+Fh]
  __int64 v35; // [rsp+A4h] [rbp+13h]
  unsigned int v36; // [rsp+ACh] [rbp+1Bh]

  v6 = a4;
  if ( *a4 == 17 )
    goto LABEL_2;
  if ( !ndisIterativeDataPathDisabled && ((a2 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    Number = KeGetPcr()->Prcb.Number;
    v16 = &v26;
    v17 = a6;
    v18 = a5;
    v27 = 0LL;
    v26 = 0LL;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a2;
    v19 = *a4 == 5;
    v27 = a1;
    v24 = Number;
    v28 = 0LL;
    v26 = a1;
    while ( 1 )
    {
      v25 = v18;
      if ( !v19 )
        break;
      if ( !*v16 )
        return;
      v9 = v6;
      v10 = v6[53] + 96LL * Number;
      v11 = *(_BYTE *)(v10 + 40);
      *(_BYTE *)(v10 + 40) = 1;
      v12 = *v16;
      *v16 = 0LL;
      if ( v12 )
      {
        v13 = v18;
        do
        {
          Scratch = (struct _NET_BUFFER_LIST *)v12->Scratch;
          ChildRefCount = v12->ChildRefCount;
          v12->ChildRefCount = 0;
          ndisCallSendCompleteHandler(v6, v17, v13, v12, 0, 0, ChildRefCount);
          v12 = Scratch;
        }
        while ( Scratch );
        v9 = v6;
        v18 = v25;
      }
      *(_BYTE *)(v10 + 40) = 0;
      if ( v11 )
      {
        *(_BYTE *)(v10 + 40) = 1;
        break;
      }
      v6 = (_QWORD *)v6[61];
      v16 = (struct _NET_BUFFER_LIST **)(v10 + 24);
      v17 = (void (*)(void))v9[58];
      v18 = (void *)v9[59];
      Number = v24;
      v19 = *(_BYTE *)v6 == 5;
    }
    v14 = *v16;
    if ( *v16 )
    {
      *v16 = 0LL;
      do
      {
        v21 = (struct _NET_BUFFER_LIST *)v14->Scratch;
        v23 = v14->ChildRefCount;
        v14->ChildRefCount = 0;
        ndisCallSendCompleteHandler(v6, v17, v18, v14, 0, 0, v23);
        v18 = v25;
        v14 = v21;
      }
      while ( v21 );
    }
  }
  else
  {
    if ( a3->Header.Type != 5 )
    {
LABEL_2:
      ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, a2);
      return;
    }
    v31 = a5;
    v33 = a1;
    v36 = a2;
    v32 = a6;
    v30 = a4;
    v35 = 1LL;
    v34 = 0;
    if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v29) < 0 )
      ndisQueueStackExpansionFallbackNbls(a3, a1, 1u);
  }
}
