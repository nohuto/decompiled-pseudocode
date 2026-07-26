/*
 * XREFs of NdisReturnPackets @ 0x1C005CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToMiniport @ 0x1C0067498 (ndisReturnPacketToMiniport.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00675E8 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall NdisReturnPackets(struct _NDIS_PACKET **a1, unsigned int a2)
{
  __int64 v3; // rdi
  KIRQL v4; // bl
  struct _NDIS_PACKET *v5; // r9
  __int64 v6; // r10
  bool v7; // dl
  __int64 v8; // r9
  __int64 v9; // r10
  struct _NDIS_STACK_RESERVED *v10; // [rsp+60h] [rbp+18h] BYREF
  struct _NDIS_STACK_RESERVED *v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  v4 = KfRaiseIrql(2u);
  if ( (_DWORD)v3 )
  {
    do
    {
      NDIS_STACK_RESERVED_FROM_PACKET(*a1, &v10);
      v6 = *(_QWORD *)v10;
      v7 = *(_MDL **)((char *)&v5[1].Private.Head + v5->Private.NdisPacketOobOffset) == 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( v7 )
        {
          ndisReturnPacketToMiniport(v6, v5);
        }
        else
        {
          NDIS_STACK_RESERVED_FROM_PACKET(v5, &v11);
          *(_QWORD *)v11 = 0LL;
          --*(_DWORD *)(v8 - 4);
          if ( (*(_DWORD *)(v9 + 120) & 0x8000) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 1828));
          ndisReturnPacketToNetBufferList(v9, v8);
        }
      }
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
}
