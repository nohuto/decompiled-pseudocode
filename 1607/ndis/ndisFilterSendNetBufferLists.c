/*
 * XREFs of ndisFilterSendNetBufferLists @ 0x1C000D780
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C001E204 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C00268AC (ndisFLoopbackNetBufferLists.c)
 */

void __fastcall ndisFilterSendNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r8
  _DWORD *v8; // rcx
  __int64 v10; // rax
  int v11; // ebx
  struct _NET_BUFFER_LIST *v12; // rcx
  struct _NET_BUFFER_LIST **p_Next; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD **)(a1 + 456);
  if ( *(_BYTE *)v8 == 5
    && (v8[14] & 0x8000) != 0
    && !v8[84]
    && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
     || (a4 & 2) != 0
     || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
  {
    v4 = ndisFLoopbackNetBufferLists(v8, a2, (__int64)&v15);
    a2 = v15;
  }
  if ( a2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v10 = *(_QWORD *)(a1 + 424) + 96 * v4;
    if ( ndisIterativeDataPathDisabled || (a4 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v10 + 16) )
    {
      ndisInvokeNextSendHandler(
        v15,
        a3,
        a4,
        *(struct _NDIS_OBJECT_HEADER **)(a1 + 456),
        *(void **)(a1 + 440),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))(a1 + 432));
      return;
    }
    v11 = a4 | 1;
    if ( !*(_QWORD *)v10 )
    {
      v12 = v15;
      *(_QWORD *)v10 = v15;
LABEL_9:
      *(_QWORD *)(v10 + 8) = v12;
      v12->Scratch = 0LL;
      v12->ChildRefCount = v11;
      v12->Status = a3;
      return;
    }
    p_Next = *(struct _NET_BUFFER_LIST ***)(v10 + 8);
    if ( a3 != *((_DWORD *)p_Next + 35) || v11 != *((_DWORD *)p_Next + 33) || (v11 & 0x34) != 0 )
    {
      v12 = v15;
      p_Next[14] = v15;
      goto LABEL_9;
    }
    for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
      p_Next = &i->Next;
    *p_Next = v15;
  }
}
