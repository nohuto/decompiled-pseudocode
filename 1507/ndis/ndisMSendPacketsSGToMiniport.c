/*
 * XREFs of ndisMSendPacketsSGToMiniport @ 0x1C0051040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisMAllocSGListS @ 0x1C00467F0 (ndisMAllocSGListS.c)
 *     ndisMFreeSGList @ 0x1C0046D00 (ndisMFreeSGList.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisFreePaddedMdl @ 0x1C004EDE4 (ndisFreePaddedMdl.c)
 *     ndisMCheckPacketAndPad @ 0x1C004EEA8 (ndisMCheckPacketAndPad.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0050604 (ndisMSendCompletePacketToNetBufferLists.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0057DD0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisMSendPacketsSGToMiniport(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 *v6; // r15
  __int64 v7; // r12
  struct _NDIS_PACKET *v8; // rbx
  unsigned int v9; // ebp
  KIRQL v10; // al
  struct _NDIS_STACK_RESERVED *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 NdisPacketOobOffset; // rax
  KIRQL v15; // dl
  __int64 v16; // [rsp+20h] [rbp-48h]
  struct _NDIS_STACK_RESERVED *v17; // [rsp+70h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+80h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+20h]

  v3 = a3;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qqd(0x22u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, a3);
  if ( (_DWORD)v3 )
  {
    v6 = a2;
    v7 = v3;
    do
    {
      v8 = (struct _NDIS_PACKET *)*v6;
      v9 = 0;
      if ( (*(_BYTE *)(a1 + 928) & 8) != 0 )
        v9 = ndisMCheckPacketAndPad(a1, *v6);
      *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset) = 259;
      if ( v9 )
      {
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        NewIrql = v10;
        *(_DWORD *)(a1 + 1856) = 1509536;
        NDIS_STACK_RESERVED_FROM_PACKET(v8, &v17);
        v11 = v17;
        v12 = *(_QWORD *)v17;
        *(_DWORD *)(a1 + 120) |= 0x400000u;
        *(_QWORD *)v11 = 1297040176LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        v19 = v12;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(unsigned __int64 *)((char *)v8->Reserved + v8->Private.NdisPacketOobOffset) )
          ndisMFreeSGList(a1, (__int64)v8, v13);
        *((_DWORD *)v17 + 2) = 0;
        if ( (*(_BYTE *)(a1 + 928) & 8) != 0
          && *(void **)((char *)&v8[1].Private.Pool + v8->Private.NdisPacketOobOffset) )
        {
          ndisFreePaddedMdl((__int64)v8);
        }
        NdisPacketOobOffset = v8->Private.NdisPacketOobOffset;
        v8->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v8[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(a1, v8, v9);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v19 + 112))(v19, v8, v9);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v15 = NewIrql;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v15);
      }
      else
      {
        ndisMAllocSGListS(a1, v8);
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
  {
    LODWORD(v16) = v3;
    WPP_SF_qqd(0x23u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, v16);
  }
}
