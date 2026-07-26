/*
 * XREFs of ndisMFakeSendNetBufferLists @ 0x1C0059800
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001DF0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, char a4)
{
  unsigned int v7; // edi
  int v8; // ecx
  struct _NET_BUFFER_LIST *i; // rax

  v7 = 0;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x4Du, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, a2);
  v8 = *(_DWORD *)(a1 + 540);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = v8;
  if ( (a4 & 1) != 0 )
    v7 = 1;
  ndisMSendCompleteNetBufferListsInternal(a1, a2, v7);
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x4Eu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, a2);
}
