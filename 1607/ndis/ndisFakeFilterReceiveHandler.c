/*
 * XREFs of ndisFakeFilterReceiveHandler @ 0x1C0058C20
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0058D80 (ndisInvokeNextReceiveCompleteHandler.c)
 */

void __fastcall ndisFakeFilterReceiveHandler(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r8

  if ( (a5 & 2) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 120);
    if ( v5 )
      ndisInvokeNextReceiveCompleteHandler(a2, *(_QWORD *)(v5 + 536), *(void (**)(void))(v5 + 528));
    else
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2536LL),
        *(void (**)(void))(*(_QWORD *)(a1 + 32) + 2648LL));
  }
}
