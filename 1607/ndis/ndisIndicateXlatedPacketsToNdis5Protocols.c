/*
 * XREFs of ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026D78
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001870 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00031A0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00667E8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004D224 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004D738 (ndisXlateReturnPacketToNetBufferList.c)
 */

void __fastcall ndisIndicateXlatedPacketsToNdis5Protocols(__int64 *a1)
{
  __int64 *v1; // rbx
  int v2; // eax
  KIRQL v3; // si
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r12
  void **v10; // r15
  char v11; // [rsp+20h] [rbp-E0h]
  char v12; // [rsp+21h] [rbp-DFh]
  unsigned int v13; // [rsp+24h] [rbp-DCh]
  void **v14; // [rsp+28h] [rbp-D8h] BYREF
  int v15; // [rsp+30h] [rbp-D0h]
  unsigned int v16; // [rsp+34h] [rbp-CCh]
  __int64 v18; // [rsp+40h] [rbp-C0h]
  unsigned int v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 *v22; // [rsp+60h] [rbp-A0h]
  char v23; // [rsp+70h] [rbp-90h] BYREF

  v1 = a1;
  v21 = *a1;
  v13 = *((_DWORD *)a1 + 172);
  v2 = *((_DWORD *)a1 + 4);
  v22 = a1;
  if ( (v2 & 1) != 0 )
  {
    v11 = 1;
    v3 = 2;
  }
  else
  {
    v11 = 0;
    v3 = KfRaiseIrql(2u);
  }
  v4 = 0LL;
  v5 = *(_QWORD *)(v1[1] + 328);
  if ( v5 && *(_DWORD *)(v5 + 704) < 6u )
  {
    v16 = (v1[2] & 2) != 0 ? 0xC000009A : 0;
  }
  else
  {
    v16 = -1073741670;
    *((_BYTE *)v1 + 692) = 1;
  }
  do
  {
    v6 = 5 * v4;
    v4 = (unsigned int)(v4 + 1);
    if ( v1[v6 + 8] )
    {
      v18 = 0LL;
      v7 = v21;
      v19 = 0;
      v14 = (void **)&v23;
      v20 = v21;
      v15 = 32;
      do
      {
        v8 = ndisXlateRecvNetBufferListsToPacketArray(&v14);
        v9 = v19;
        v10 = v14;
        v12 = v8;
        (*(void (__fastcall **)(__int64, void **, _QWORD))(v7 + 3440))(v7, v14, v19);
        if ( v16 == -1073741670 && (_DWORD)v9 )
        {
          do
          {
            ndisXlateReturnPacketToNetBufferList(*v10++);
            --v9;
          }
          while ( v9 );
        }
      }
      while ( v12 == 1 );
      v1 = v22;
      v16 = -1073741670;
    }
  }
  while ( (unsigned int)v4 <= v13 );
  if ( !v11 && v3 != 2 )
    KeLowerIrql(v3);
}
