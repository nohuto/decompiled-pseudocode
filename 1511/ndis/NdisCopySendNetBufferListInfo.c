/*
 * XREFs of NdisCopySendNetBufferListInfo @ 0x1C0025E90
 * Callers:
 *     <none>
 * Callees:
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0011BA0 (ndisGenerateNetBufferListCorrelationIds.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C0011E68 (NetioCopyOpaqueNetBufferListInformation.c)
 *     NdisGetNetBufferListProtocolId @ 0x1C0011EC0 (NdisGetNetBufferListProtocolId.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0048318 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 */

void __stdcall NdisCopySendNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  UCHAR NetBufferListProtocolId; // al
  signed __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void **v8; // rcx
  void **v9; // rcx
  const struct _EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+20h] [rbp-19h]
  const struct _GUID *v13; // [rsp+28h] [rbp-11h]
  struct _GUID v14; // [rsp+60h] [rbp+27h] BYREF
  struct _GUID v15; // [rsp+70h] [rbp+37h] BYREF

  NetBufferListProtocolId = NdisGetNetBufferListProtocolId(SrcNetBufferList);
  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  v5 = (char *)SrcNetBufferList - (char *)DestNetBufferList;
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  DestNetBufferList->NetBufferListInfo[2] = SrcNetBufferList->NetBufferListInfo[2];
  v6 = 2LL;
  v7 = 2LL;
  DestNetBufferList->NetBufferListInfo[23] = SrcNetBufferList->NetBufferListInfo[23];
  v8 = &DestNetBufferList->NetBufferListInfo[3];
  do
  {
    *v8 = *(void **)((char *)v8 + v5);
    ++v8;
    --v7;
  }
  while ( v7 );
  v9 = &DestNetBufferList->NetBufferListInfo[11];
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[5] = SrcNetBufferList->NetBufferListInfo[5];
  DestNetBufferList->NetBufferListInfo[8] = SrcNetBufferList->NetBufferListInfo[8];
  LOBYTE(DestNetBufferList->NetBufferListInfo[7]) = NetBufferListProtocolId;
  do
  {
    *v9 = *(void **)((char *)v9 + v5);
    ++v9;
    --v6;
  }
  while ( v6 );
  DestNetBufferList->NetBufferListInfo[20] = SrcNetBufferList->NetBufferListInfo[20];
  DestNetBufferList->NetBufferListInfo[14] = SrcNetBufferList->NetBufferListInfo[14];
  NetioCopyOpaqueNetBufferListInformation((__int64)DestNetBufferList, (__int64)SrcNetBufferList);
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisGenerateNetBufferListCorrelationIds(DestNetBufferList);
    v11 = (__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    v15 = (struct _GUID)((__int64)DestNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v14 = (struct _GUID)(unsigned __int64)v11;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFuLL, v10, &v15, &v14, v12, v13, 4u);
  }
}
