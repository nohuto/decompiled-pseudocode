/*
 * XREFs of ndisMLoopbackPacketX @ 0x1C0050A0C
 * Callers:
 *     ndisMSendPacketsXToMiniport @ 0x1C00253E0 (ndisMSendPacketsXToMiniport.c)
 *     ndisMDeferredSend @ 0x1C004F660 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C004F8D0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C004FD30 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C00501D0 (ndisMDeferredSendSG.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisMIsLoopbackPacket @ 0x1C0050698 (ndisMIsLoopbackPacket.c)
 */

bool __fastcall ndisMLoopbackPacketX(__int64 a1, struct _NDIS_PACKET *a2)
{
  KIRQL v3; // di
  struct _NDIS_PACKET *v4; // rcx
  bool v6; // zf
  char v7; // al
  bool v8; // bp
  char *v9; // r14
  struct _NDIS_STACK_RESERVED *v10; // rax
  struct _NDIS_PACKET *v12; // [rsp+48h] [rbp+10h] BYREF
  struct _NDIS_STACK_RESERVED *v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0LL;
  v6 = (a2->Private.NdisPacketFlags & 0x20) == 0;
  v12 = 0LL;
  v8 = 0;
  if ( v6 )
  {
    v7 = ndisMIsLoopbackPacket(a1, a2, &v12);
    v4 = v12;
    if ( v7 )
      v8 = 1;
  }
  if ( v4 )
  {
    a2->Private.NdisPacketFlags |= 0x20u;
    v9 = (char *)v4 + v4->Private.NdisPacketOobOffset;
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v13);
    v10 = v13;
    *((_DWORD *)v9 + 8) = -1073741670;
    *(_QWORD *)&v12->MacReserved[v12->Private.NdisPacketOobOffset + 24] = *(_QWORD *)v10;
    if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0 || (v3 = KfRaiseIrql(2u), (*(_DWORD *)(a1 + 120) & 0x40000) == 0) )
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    }
    if ( !*(_DWORD *)(a1 + 464) )
    {
      *((_DWORD *)v9 + 4) = 14;
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, __int64))(a1 + 432))(a1, &v12, 1LL);
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
    {
      if ( v3 != 2 )
        KeLowerIrql(v3);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1856) = 1508599;
    }
    IoFreeMdl(v12->Private.Head);
    v12 = (struct _NDIS_PACKET *)((char *)v12 - 16 - 48LL * ndisPacketStackSize);
    ExFreePoolWithTag(v12, 0);
  }
  return v8;
}
