/*
 * XREFs of ndisMSendPackets @ 0x1C0051390
 * Callers:
 *     ndisMSend @ 0x1C0050B80 (ndisMSend.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __fastcall ndisMSendPackets(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // r15
  struct _NDIS_PACKET **v4; // r12
  __int64 v5; // rbx
  int v7; // edi
  unsigned int v8; // ebp
  struct _NDIS_PACKET *v9; // r14
  _MDL *Head; // rbx
  struct _NDIS_STACK_RESERVED *v12; // rbx
  __int64 v13; // rdi
  struct _NDIS_PACKET **v14; // r9
  __int64 BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  struct _NDIS_STACK_RESERVED *v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  unsigned int v18; // [rsp+90h] [rbp+8h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  struct _NDIS_PACKET **v21; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  v5 = a3;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qqd(0xAu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, a3);
  v7 = 0;
  v21 = v4;
  v8 = 0;
  v18 = 0;
  if ( (_DWORD)v5 )
  {
    v17 = v5;
    while ( 1 )
    {
      v9 = *v4;
      ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v9, &v16);
      *(_QWORD *)v16 = a1;
      Head = v9->Private.Head;
      if ( !Head )
        break;
      if ( (*(_BYTE *)(v3 + 928) & 2) == 0 )
      {
        v7 = 0;
        v18 = 0;
        while ( (Head->MdlFlags & 5) != 0
              ? Head->MappedSystemVa
              : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20) )
        {
          Head = Head->Next;
          if ( !Head )
            goto LABEL_17;
        }
        v7 = -1073741670;
        goto LABEL_16;
      }
LABEL_17:
      v9->Private.NdisPacketFlags &= ~4u;
      ndisMReferenceOpen(a1, 9u);
      if ( v7 )
      {
        NewIrql = KfRaiseIrql(2u);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 96));
        v12 = v16;
        *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v3 + 1856) = 1507459;
        v13 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 1297040184LL;
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 96));
        *((_DWORD *)v12 + 2) = 0;
        v9->Private.NdisPacketFlags &= 0xC0u;
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v13 + 112))(v13, v9, v18);
        if ( NewIrql != 2 )
          KeLowerIrql(NewIrql);
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2032))(v3, v21, v8);
          v14 = v4 + 1;
          v8 = 0;
          v21 = v4 + 1;
        }
        else
        {
          v14 = v21;
        }
        v7 = v18;
      }
      else
      {
        v14 = v21;
        ++v8;
      }
      ++v4;
      if ( !--v17 )
      {
        v4 = a2;
        if ( v8 )
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2032))(v3, v14, v8);
        goto LABEL_28;
      }
    }
    v7 = -1073741823;
LABEL_16:
    v18 = v7;
    goto LABEL_17;
  }
LABEL_28:
  if ( (unsigned __int8)byte_1C008370A >= 4u )
  {
    LODWORD(BugCheckOnFailure) = v8;
    WPP_SF_qqd(0xBu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, v4, BugCheckOnFailure);
  }
}
