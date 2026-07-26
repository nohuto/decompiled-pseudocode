/*
 * XREFs of ?AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z @ 0x1C006451C
 * Callers:
 *     NdisInitiateOffload @ 0x1C0064820 (NdisInitiateOffload.c)
 *     NdisInvalidateOffload @ 0x1C00648A0 (NdisInvalidateOffload.c)
 *     NdisQueryOffloadState @ 0x1C0064B80 (NdisQueryOffloadState.c)
 *     NdisTerminateOffload @ 0x1C0064BD0 (NdisTerminateOffload.c)
 *     NdisUpdateOffload @ 0x1C0064C20 (NdisUpdateOffload.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ?StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00647D8 (-StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall AdjustOffloadContext(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *a2, int a3)
{
  struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *v3; // r9
  struct _NDIS_OPEN_BLOCK *v4; // r11
  __int64 v5; // r10
  _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *NextBlock; // rcx
  _QWORD *NdisReserved; // rax
  struct _NET_BUFFER_LIST *NetBufferListChain; // rdx
  _QWORD v9[8]; // [rsp+20h] [rbp-58h]

  if ( a2 )
  {
    v3 = a2;
    a2->SourceHandle = a1;
    v4 = a1;
    v5 = 0LL;
    while ( 1 )
    {
      if ( !v3 )
      {
        if ( (_DWORD)v5 )
        {
          v5 = (unsigned int)(v5 - 1);
          v3 = (struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *)v9[(unsigned int)v5];
        }
        if ( !v3 )
          break;
      }
      NextBlock = v3->NextBlock;
      if ( NextBlock )
      {
        v9[v5] = NextBlock;
        v5 = (unsigned int)(v5 + 1);
      }
      if ( a3 )
      {
        v3->Status = a3;
      }
      else
      {
        NdisReserved = v3->OffloadHandle->NdisReserved;
        if ( NdisReserved )
        {
          if ( !*NdisReserved )
            *NdisReserved = v4;
          v3->NdisReserved[2] = &v3->OffloadHandle->MiniportOffloadContext;
        }
        else
        {
          v3->NdisReserved[2] = 0LL;
        }
        NetBufferListChain = v3->NetBufferListChain;
        if ( NetBufferListChain )
          StoreCompletionContext(v4, NetBufferListChain);
      }
      v3 = v3->DependentBlockList;
    }
  }
}
