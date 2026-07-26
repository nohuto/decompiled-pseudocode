/*
 * XREFs of ndisMFakeSendNetBufferLists @ 0x1C0024C20
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0004690 (NdisSendNetBufferLists.c)
 * Callees:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0002270 (ndisMSendCompleteNetBufferListsInternal.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, char a4)
{
  unsigned int v7; // esi
  int v8; // ecx
  struct _NET_BUFFER_LIST *i; // rax

  v7 = 0;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(80LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2);
  v8 = *(_DWORD *)(a1 + 540);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = v8;
  if ( (a4 & 1) != 0 )
    v7 = 1;
  ndisMSendCompleteNetBufferListsInternal(a1, a2, v7);
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(81LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2);
}
