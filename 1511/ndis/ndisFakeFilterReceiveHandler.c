/*
 * XREFs of ndisFakeFilterReceiveHandler @ 0x1C0054360
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0054660 (ndisInvokeNextReceiveCompleteHandler.c)
 */

__int64 __fastcall ndisFakeFilterReceiveHandler(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 result; // rax
  __int64 v6; // r8

  result = a5;
  if ( (a5 & 2) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
      return ndisInvokeNextReceiveCompleteHandler(a2, *(_QWORD *)(v6 + 536), *(void (**)(void))(v6 + 528));
    else
      return ndisInvokeNextReceiveCompleteHandler(
               a2,
               *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2536LL),
               *(void (**)(void))(*(_QWORD *)(a1 + 32) + 2648LL));
  }
  return result;
}
