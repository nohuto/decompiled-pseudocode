/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004E030
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C00046F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C000E820 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C002561C (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C0048C50 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C0049164 (ndisXlateReturnPacketToNetBufferList.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C005DDDC (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C0063218 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNdisPacket(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  unsigned int Number; // eax
  __int64 Status; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // r13
  struct _NDIS_PACKET *v14; // rbx
  __int64 v15; // r14
  _MDL *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  struct _NDIS_STACK_RESERVED *v19; // rdi
  int v20; // ecx
  signed __int32 v21; // edx
  struct _NDIS_PACKET *v22; // rdx
  struct _NDIS_MINIPORT_BLOCK *v23; // rdx
  __int64 v24; // r12
  struct _NET_BUFFER_LIST *v25; // rbx
  _QWORD *v26; // rdi
  unsigned int v27; // esi
  unsigned int v28; // r14d
  char v29; // [rsp+40h] [rbp-C0h]
  struct _LOCK_STATE_EX LockState; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h]
  struct _NDIS_STACK_RESERVED *v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h]
  unsigned int v34; // [rsp+5Ch] [rbp-A4h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  void *v36; // [rsp+68h] [rbp-98h]
  struct _NET_BUFFER_LIST *v37; // [rsp+70h] [rbp-90h]
  __int64 v38[7]; // [rsp+78h] [rbp-88h] BYREF
  char v39; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1[9];
  v37 = a2;
  v33 = a3;
  v36 = a1;
  v34 = a4;
  memset(&v38[1], 0, 0x28uLL);
  v6 = *(_QWORD *)(v4 + 120);
  v35 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v35 + 288), &LockState, 0);
  Number = KeGetPcr()->Prcb.Number;
  Status = a2->Status;
  LODWORD(v38[4]) = 0;
  v9 = Number << 12;
  v10 = *(_QWORD *)(v4 + 16);
  LODWORD(v38[1]) = 64;
  v38[2] = (__int64)a2;
  v38[5] = v6;
  v11 = *(_QWORD *)(v10 + 816);
  v38[0] = (__int64)&v39;
  *(_BYTE *)(v9 + v11) = 1;
  v38[3] = (__int64)a2->FirstNetBuffer;
  do
  {
    v12 = ndisXlateRecvNetBufferListsToPacketArray(v38);
    v29 = v12;
    if ( !LODWORD(v38[4]) )
      continue;
    v13 = v38[0];
    v31 = LODWORD(v38[4]);
    do
    {
      v14 = *(struct _NDIS_PACKET **)v13;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 42LL);
      ++*(_DWORD *)&v14[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v14, &v32);
      v17 = *(_QWORD *)(v6 + 3192);
      if ( v17 )
      {
        v18 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v18 + v17 + 32);
      }
      v19 = v32;
      *((_DWORD *)v32 + 2) = -1;
      *((_DWORD *)v19 + 3) = (_DWORD)v16;
      *(_QWORD *)v19 = v6;
      v14->Private.ValidCounts = (unsigned __int8)v16;
      if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
      {
        *((_DWORD *)v19 + 3) = (_DWORD)v16;
      }
      else
      {
        *((_DWORD *)v19 + 3) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 56))(
                                 *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
                                 *(_QWORD *)(v4 + 24),
                                 v14);
        v16 = 0LL;
      }
      v20 = *((_DWORD *)v19 + 3);
      if ( v20 )
      {
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)v19 + 2, v20 + 1) + v20 + 1;
        if ( v21 > 0 && (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
          *(unsigned int *)((char *)&v14->Private.Count + v14->Private.NdisPacketOobOffset) = 259;
        v19 = v32;
      }
      else
      {
        v21 = (int)v16;
        *((_DWORD *)v19 + 2) = (_DWORD)v16;
      }
      if ( v21 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
      }
      else
      {
        --*(_DWORD *)&v14[-1].ProtocolReserved[4];
        if ( *(unsigned int *)((char *)&v14->Private.Count + v15) == -1073741670 )
          goto LABEL_31;
        if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
        {
          *(_QWORD *)v19 = v16;
          *(unsigned int *)((char *)&v14->Private.Count + v15) = 259;
          if ( (v14[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v14[-1].ProtocolReserved[4] == -1 )
            goto LABEL_20;
          v22 = v14;
          if ( *(_MDL **)((char *)&v14[1].Private.Head + v14->Private.NdisPacketOobOffset) == v16 )
          {
            (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3816) + 224LL))(
              *(_QWORD *)(v6 + 24),
              v14);
            goto LABEL_31;
          }
          goto LABEL_27;
        }
        if ( *(_MDL **)((char *)&v14[1].Private.Head + v14->Private.NdisPacketOobOffset) != v16 )
        {
          *(_QWORD *)v19 = v16;
          *(unsigned int *)((char *)&v14->Private.Count + v14->Private.NdisPacketOobOffset) = 259;
          if ( (v14[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v14[-1].ProtocolReserved[4] == -1 )
          {
LABEL_20:
            NDIS_FREE_XFER_DATA_PACKET(v14);
            goto LABEL_31;
          }
          v22 = v14;
LABEL_27:
          ndisReturnPacketToNetBufferList(v6, v22);
          goto LABEL_31;
        }
        *(unsigned int *)((char *)&v14->Private.Count + v15) = (unsigned int)v16;
      }
LABEL_31:
      if ( Status == -1073741670 )
        ndisXlateReturnPacketToNetBufferList(v14);
      v13 += 8LL;
      --v31;
    }
    while ( v31 );
    v12 = v29;
  }
  while ( v12 );
  v23 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v24 = v35;
  if ( v23->PmodeOpens )
  {
    v25 = v37;
    v26 = v36;
    v27 = v34;
    v28 = v33;
    ndisCoIndicatePromiscNetBuffer(v36, v23, *(struct _NDIS_OPEN_BLOCK **)v35, v37, v33, v34, 1);
    ndisCoIndicatePromiscNetBuffer(
      v26,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v24 + 8),
      v25,
      v28,
      v27,
      1);
    ndisCoIndicatePromiscNetBuffer(
      v26,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v24 + 16),
      v25,
      v28,
      v27,
      1);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v24 + 288), &LockState);
}
