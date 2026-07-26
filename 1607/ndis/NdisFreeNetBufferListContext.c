/*
 * XREFs of NdisFreeNetBufferListContext @ 0x1C0010000
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C0006C90 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0006F00 (NdisFreeNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0020E90 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     ?ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C001027C (-ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __stdcall NdisFreeNetBufferListContext(PNET_BUFFER_LIST NetBufferList, USHORT ContextSize)
{
  USHORT v2; // di
  __int64 v4; // r8
  unsigned __int16 v5; // di
  unsigned __int16 v6; // ax
  int v7; // ecx
  int v8; // edx
  unsigned __int16 *v9; // rcx

  if ( ContextSize )
  {
    v2 = ContextSize;
    do
    {
      NetBufferList->Context->Offset += v2;
      if ( ndisIsCurrentNblContextBlockPreallocated(NetBufferList) )
        break;
      LOWORD(NetBufferList->NdisReserved[1]) -= v2;
      v5 = *(_WORD *)(v4 + 10);
      v6 = *(_WORD *)(v4 + 8);
      if ( v5 < v6 )
        break;
      v2 = v5 - v6;
      NetBufferList->Context = *(_NET_BUFFER_LIST_CONTEXT **)v4;
      v7 = *(unsigned __int16 *)(v4 + 8);
      *(_WORD *)(v4 + 10) = v7;
      *(_QWORD *)v4 = 0LL;
      v8 = LOWORD(NetBufferList->NdisReserved[1]);
      if ( v8 + v7 > ndisMaxCachedNblContextSize )
      {
        ExFreePoolWithTag((PVOID)v4, 0);
      }
      else if ( v7 >= WORD1(NetBufferList->NdisReserved[1]) - v8 )
      {
        NetBufferList->NetBufferListInfo[27] = (void *)v4;
      }
      else
      {
        ExFreePoolWithTag((PVOID)v4, 0);
        v9 = (unsigned __int16 *)NetBufferList->NetBufferListInfo[27];
        if ( v9 )
        {
          if ( v9[4] < WORD1(NetBufferList->NdisReserved[1]) - LOWORD(NetBufferList->NdisReserved[1]) )
          {
            ExFreePoolWithTag(v9, 0);
            NetBufferList->NetBufferListInfo[27] = 0LL;
          }
        }
      }
    }
    while ( v2 );
  }
}
