/*
 * XREFs of ndisMAbortPackets @ 0x1C00136C4
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C005A97C (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisMFreeSGList @ 0x1C0048020 (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C004F384 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0050BA4 (ndisMSendCompletePacketToNetBufferLists.c)
 */

__int64 **__fastcall ndisMAbortPackets(__int64 a1, __int64 a2, struct _NDIS_STACK_RESERVED *a3)
{
  _QWORD *v4; // rcx
  __int64 **v5; // r10
  __int64 *v6; // rdi
  __int64 **result; // rax
  __int64 *v8; // r9
  __int64 v9; // rax
  __int64 ***v10; // r9
  __int64 ***v11; // rcx
  __int64 *v12; // rax
  struct _NDIS_PACKET *v13; // rdi
  __int64 v14; // rsi
  __int64 NdisPacketOobOffset; // rax
  __int64 *v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v17; // [rsp+28h] [rbp-18h]
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  struct _NDIS_STACK_RESERVED *v19; // [rsp+70h] [rbp+30h] BYREF

  v19 = a3;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(67LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, 0LL);
  v4 = *(_QWORD **)(a1 + 832);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 832) = *v4;
    *v4 = *(_QWORD *)(a1 + 888);
    *(_QWORD *)(a1 + 888) = v4;
  }
  *(_QWORD *)(a1 + 144) = 0LL;
  v18[1] = v18;
  v5 = (__int64 **)(a1 + 128);
  v18[0] = v18;
  v17 = &v16;
  v16 = (__int64 *)&v16;
  while ( *v5 != (__int64 *)v5 )
  {
    v8 = *v5;
    v9 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v5 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v5;
    NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)(v8 - 8), &v19);
    v11 = (__int64 ***)v17;
    *v10 = &v16;
    v10[1] = (__int64 **)v11;
    if ( *v11 != &v16 )
      __fastfail(3u);
    *v11 = (__int64 **)v10;
    v17 = (__int64 **)v10;
  }
  *(_QWORD *)(a1 + 144) = 0LL;
  while ( 1 )
  {
    v6 = v16;
    result = &v16;
    if ( v16 == (__int64 *)&v16 )
      break;
    v12 = (__int64 *)*v16;
    if ( (__int64 **)v16[1] != &v16 || (__int64 *)v12[1] != v16 )
      __fastfail(3u);
    v16 = (__int64 *)*v16;
    v12[1] = (__int64)&v16;
    v13 = (struct _NDIS_PACKET *)(v6 - 8);
    NDIS_STACK_RESERVED_FROM_PACKET(v13, &v19);
    v14 = *(_QWORD *)v19;
    *(_QWORD *)v19 = 1297040183LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    if ( (*(_DWORD *)(a1 + 120) & 0x40) != 0
      && *(unsigned __int64 *)((char *)v13->Reserved + v13->Private.NdisPacketOobOffset) )
    {
      ndisMFreeSGList(a1, v13);
    }
    if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(void **)((char *)&v13[1].Private.Pool + v13->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(v13);
    NdisPacketOobOffset = v13->Private.NdisPacketOobOffset;
    v13->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&v13[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(a1, v13, 3221291020LL);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, __int64))(v14 + 112))(v14, v13, 3221291020LL);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 726062;
  }
  *(_DWORD *)(a1 + 120) |= 0x400000u;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    return (__int64 **)WPP_SF_qq(68LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, 0LL);
  return result;
}
