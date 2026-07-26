/*
 * XREFs of ndisFakeFilterSendHandler @ 0x1C0053FF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0054578 (ndisInvokeNextSendCompleteHandler.c)
 */

__int64 __fastcall ndisFakeFilterSendHandler(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *i; // r8
  __int64 v3; // r8

  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = *(_DWORD *)(a1 + 96);
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
    return ndisInvokeNextSendCompleteHandler(a2, *(_QWORD *)(v3 + 472), *(void (**)(void))(v3 + 464));
  else
    return ndisInvokeNextSendCompleteHandler(
             a2,
             *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2584LL),
             *(void (**)(void))(*(_QWORD *)(a1 + 32) + 2624LL));
}
