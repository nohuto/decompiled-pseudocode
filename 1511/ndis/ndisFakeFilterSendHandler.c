/*
 * XREFs of ndisFakeFilterSendHandler @ 0x1C00543E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0011578 (ndisInvokeNextSendCompleteHandler.c)
 */

void __fastcall ndisFakeFilterSendHandler(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, char a4)
{
  struct _NET_BUFFER_LIST *i; // r8
  __int64 v6; // r8
  unsigned int v7; // edx

  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = *(_DWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 112);
  v7 = (a4 & 1) != 0;
  if ( v6 )
    ndisInvokeNextSendCompleteHandler(
      a2,
      v7,
      (struct _NDIS_FILTER_BLOCK *)v6,
      *(_BYTE **)(v6 + 488),
      *(void **)(v6 + 472),
      *(void (**)(void))(v6 + 464));
  else
    ndisInvokeNextSendCompleteHandler(
      a2,
      v7,
      *(struct _NDIS_FILTER_BLOCK **)(a1 + 32),
      *(_BYTE **)(*(_QWORD *)(a1 + 32) + 2600LL),
      *(void **)(*(_QWORD *)(a1 + 32) + 2584LL),
      *(void (**)(void))(*(_QWORD *)(a1 + 32) + 2624LL));
}
