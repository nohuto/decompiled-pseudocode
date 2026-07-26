/*
 * XREFs of ndisFakeFilterReceiveHandler @ 0x1C0053F70
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0010F78 (ndisInvokeNextReceiveCompleteHandler.c)
 */

void __fastcall ndisFakeFilterReceiveHandler(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v6; // edx
  __int64 v7; // r8

  if ( (a5 & 2) == 0 )
  {
    v6 = (a5 & 1) != 0;
    v7 = *(_QWORD *)(a1 + 120);
    if ( v7 )
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        v6,
        (struct _NDIS_FILTER_BLOCK *)v7,
        *(_BYTE **)(v7 + 552),
        *(void **)(v7 + 536),
        *(void (**)(void))(v7 + 528));
    else
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        v6,
        *(struct _NDIS_FILTER_BLOCK **)(a1 + 32),
        *(_BYTE **)(*(_QWORD *)(a1 + 32) + 2552LL),
        *(void **)(*(_QWORD *)(a1 + 32) + 2536LL),
        *(void (**)(void))(*(_QWORD *)(a1 + 32) + 2648LL));
  }
}
