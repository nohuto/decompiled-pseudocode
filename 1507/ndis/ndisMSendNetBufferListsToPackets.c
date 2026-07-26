/*
 * XREFs of ndisMSendNetBufferListsToPackets @ 0x1C0050BE0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00016E0 (NdisSendNetBufferLists.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C00488B0 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C00509DC (ndisMSendNetBufferListsCompleteInternal.c)
 */

void __fastcall ndisMSendNetBufferListsToPackets(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, int a4)
{
  char v7; // bl
  char v8; // r14
  struct _NET_BUFFER_LIST *Alignment; // rdx
  struct _NET_BUFFER_LIST *v10; // rax
  _BYTE *v11; // [rsp+20h] [rbp-69h] BYREF
  __int64 v12; // [rsp+28h] [rbp-61h]
  struct _NET_BUFFER_LIST *v13; // [rsp+30h] [rbp-59h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+38h] [rbp-51h]
  int v15; // [rsp+40h] [rbp-49h]
  int v16; // [rsp+44h] [rbp-45h]
  __int64 v17; // [rsp+48h] [rbp-41h]
  _BYTE v18[80]; // [rsp+50h] [rbp-39h] BYREF

  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x3Au, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2);
  LODWORD(v12) = 10;
  v7 = 0;
  v11 = v18;
  FirstNetBuffer = a2->FirstNetBuffer;
  v13 = a2;
  v16 = a4;
  v17 = a1;
  do
  {
    v8 = ndisXlateSendNetBufferListsToPacketArray((__int64 *)&v11, 1);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 2040))(a1, v18);
      if ( !v8 )
        break;
    }
  }
  while ( v8 );
  Alignment = v13;
  if ( v13 )
  {
    if ( FirstNetBuffer != v13->FirstNetBuffer )
      Alignment = (struct _NET_BUFFER_LIST *)v13->Link.Alignment;
    if ( Alignment )
    {
      v10 = Alignment;
      do
      {
        v10->Status = -1073741670;
        v10 = (struct _NET_BUFFER_LIST *)v10->Link.Alignment;
      }
      while ( v10 );
      if ( (a4 & 1) != 0 )
        v7 = 1;
      ndisMSendNetBufferListsCompleteInternal(a1, Alignment, v7, 0);
    }
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x3Bu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, v11, v12);
}
