/*
 * XREFs of ndisMDummyIndicatePacket @ 0x1C005DF70
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C005DDDC (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMDummyIndicatePacket(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v4; // rsi
  struct _NDIS_PACKET *v6; // rcx
  struct _NDIS_PACKET *v7; // r9
  __int64 v8; // r10
  _MDL *Head; // rcx
  ULONG ByteCount; // r11d
  struct _MDL *i; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  void (__fastcall *v16)(_QWORD, struct _NDIS_PACKET *); // r8
  struct _NDIS_STACK_RESERVED *v17; // rax
  struct _NDIS_STACK_RESERVED *v18; // [rsp+30h] [rbp+8h] BYREF

  if ( a3 )
  {
    v4 = a3;
    do
    {
      v6 = *a2;
      ++*(_DWORD *)&v6[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v6, &v18);
      Head = v7->Private.Head;
      ByteCount = Head->ByteCount;
      for ( i = Head->Next; i; i = i->Next )
        ByteCount += i->ByteCount;
      if ( (v7->Private.NdisPacketFlags & 2) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 3192);
        if ( v12 )
        {
          v13 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v13 + v12 + 32);
        }
        v14 = *(_QWORD *)(a1 + 3192);
        if ( v14 )
        {
          v15 = (_QWORD *)(v14 + 112LL * KeGetPcr()->Prcb.Number);
          v15[1] += ByteCount;
          *v15 += ByteCount;
        }
      }
      if ( *(_DWORD *)(v8 + 32) == -1073741670 )
      {
        --*(_DWORD *)&v7[-1].ProtocolReserved[4];
      }
      else if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
      {
        v16 = *(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(a1 + 3816) + 224LL);
        v17 = v18;
        *(_DWORD *)(v8 + 32) = 259;
        *(_QWORD *)v17 = 0LL;
        --*(_DWORD *)&v7[-1].ProtocolReserved[4];
        if ( (v7[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v7[-1].ProtocolReserved[4] == -1 )
          NDIS_FREE_XFER_DATA_PACKET(v7);
        else
          v16(*(_QWORD *)(a1 + 24), v7);
      }
      else
      {
        --*(_DWORD *)&v7[-1].ProtocolReserved[4];
        *(_DWORD *)(v8 + 32) = 0;
      }
      ++a2;
      --v4;
    }
    while ( v4 );
  }
}
