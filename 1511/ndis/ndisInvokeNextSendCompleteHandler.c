/*
 * XREFs of ndisInvokeNextSendCompleteHandler @ 0x1C0011578
 * Callers:
 *     NdisFSendNetBufferListsComplete @ 0x1C000DE60 (NdisFSendNetBufferListsComplete.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0050BA4 (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0050F7C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisFakeFilterSendHandler @ 0x1C00543E0 (ndisFakeFilterSendHandler.c)
 * Callees:
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000E450 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0025288 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
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
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v10; // rsi
  void *v11; // r8
  void (*v12)(void); // r13
  _QWORD *v13; // r15
  __int64 v14; // r14
  char v15; // r12
  struct _NET_BUFFER_LIST *v16; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v18; // r9
  struct _NET_BUFFER_LIST *v19; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-59h]
  unsigned int v21; // [rsp+38h] [rbp-59h]
  unsigned int v22; // [rsp+48h] [rbp-49h]
  void *v23; // [rsp+50h] [rbp-41h]
  _QWORD v24[3]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v25[8]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v26; // [rsp+80h] [rbp-11h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  void (*v28)(void); // [rsp+90h] [rbp-1h]
  struct _NET_BUFFER_LIST *v29; // [rsp+98h] [rbp+7h]
  int v30; // [rsp+A0h] [rbp+Fh]
  __int64 v31; // [rsp+A4h] [rbp+13h]
  unsigned int v32; // [rsp+ACh] [rbp+1Bh]

  v6 = a4;
  if ( *a4 == 17 )
    goto LABEL_19;
  if ( ndisIterativeDataPathDisabled || (a2 & 1) == 0 && KeGetCurrentIrql() != 2 )
  {
    if ( a3->Header.Type == 5 )
    {
      v27 = (__int64)a5;
      v29 = a1;
      v32 = a2;
      v28 = a6;
      v26 = a4;
      v31 = 1LL;
      v30 = 0;
      if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v25) < 0 )
        ndisQueueStackExpansionFallbackNbls(a3, a1, 1u);
      return;
    }
LABEL_19:
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, a2);
    return;
  }
  Number = KeGetPcr()->Prcb.Number;
  v10 = (struct _NET_BUFFER_LIST **)v24;
  v11 = a5;
  v12 = a6;
  v23 = a5;
  v22 = Number;
  v24[2] = 0LL;
  v24[0] = a1;
  v24[1] = a1;
  a1->Scratch = 0LL;
  a1->ChildRefCount = a2;
  if ( *a4 == 5 )
  {
    while ( *v10 )
    {
      v13 = v6;
      v14 = v6[53] + 96LL * Number;
      v15 = *(_BYTE *)(v14 + 40);
      *(_BYTE *)(v14 + 40) = 1;
      v16 = *v10;
      *v10 = 0LL;
      if ( v16 )
      {
        do
        {
          Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
          ChildRefCount = v16->ChildRefCount;
          v16->ChildRefCount = 0;
          ndisCallSendCompleteHandler(v6, v12, v23, v16, 0, 0, ChildRefCount);
          v16 = Scratch;
        }
        while ( Scratch );
        v13 = v6;
        v11 = v23;
      }
      *(_BYTE *)(v14 + 40) = 0;
      if ( v15 )
      {
        *(_BYTE *)(v14 + 40) = 1;
        goto LABEL_14;
      }
      v6 = (_QWORD *)v6[61];
      v10 = (struct _NET_BUFFER_LIST **)(v14 + 24);
      v11 = (void *)v13[59];
      v12 = (void (*)(void))v13[58];
      Number = v22;
      v23 = v11;
      if ( *(_BYTE *)v6 != 5 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v18 = *v10;
    if ( *v10 )
    {
      *v10 = 0LL;
      do
      {
        v19 = (struct _NET_BUFFER_LIST *)v18->Scratch;
        v21 = v18->ChildRefCount;
        v18->ChildRefCount = 0;
        ndisCallSendCompleteHandler(v6, v12, v11, v18, 0, 0, v21);
        v11 = v23;
        v18 = v19;
      }
      while ( v19 );
    }
  }
}
