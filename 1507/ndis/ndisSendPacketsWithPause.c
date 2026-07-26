/*
 * XREFs of ndisSendPacketsWithPause @ 0x1C0051EF0
 * Callers:
 *     ndisSendWithPause @ 0x1C0052210 (ndisSendWithPause.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0018F9C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0057DD0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisSendPacketsWithPause(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // r12
  struct _NDIS_PACKET **v4; // r13
  __int64 v5; // rbx
  unsigned int v7; // r14d
  KIRQL v8; // al
  int v9; // ecx
  int v10; // edi
  struct _NDIS_PACKET **v11; // rax
  struct _NDIS_PACKET *v12; // r13
  _MDL *Head; // rbx
  struct _NDIS_STACK_RESERVED *v15; // rbx
  __int64 v16; // rdi
  struct _NDIS_PACKET **v17; // rax
  struct _NDIS_PACKET **v18; // r9
  bool v19; // zf
  bool v20; // di
  struct _NDIS_PACKET **v21; // rsi
  __int64 BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  struct _NDIS_PACKET **v23; // [rsp+30h] [rbp-58h]
  struct _NDIS_PACKET **v24; // [rsp+38h] [rbp-50h]
  struct _NDIS_STACK_RESERVED *v25; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26; // [rsp+48h] [rbp-40h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]
  unsigned int v29; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  v5 = a3;
  v7 = 0;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qqd(0x30u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, a3);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 720));
  v9 = *(_DWORD *)(a1 + 736);
  *(_BYTE *)(a1 + 728) = v8;
  if ( v9 == 2 )
  {
    *(_DWORD *)(a1 + 740) += v5;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), v8);
    v10 = 0;
    v23 = v4;
    v29 = 0;
    v11 = v4;
    v24 = v4;
    if ( !(_DWORD)v5 )
      goto LABEL_37;
    v26 = v5;
    while ( 1 )
    {
      v12 = *v11;
      ++*(_DWORD *)&v12[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v12, &v25);
      *(_QWORD *)v25 = a1;
      Head = v12->Private.Head;
      if ( !Head )
        break;
      if ( (*(_BYTE *)(v3 + 928) & 2) == 0 )
      {
        v10 = 0;
        v29 = 0;
        while ( (Head->MdlFlags & 5) != 0
              ? Head->MappedSystemVa
              : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20) )
        {
          Head = Head->Next;
          if ( !Head )
            goto LABEL_18;
        }
        v10 = -1073741670;
        goto LABEL_17;
      }
LABEL_18:
      v12->Private.NdisPacketFlags &= ~4u;
      ndisMReferenceOpen(a1, 9u);
      if ( v10 )
      {
        NewIrql = KfRaiseIrql(2u);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 96));
        v15 = v25;
        *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v3 + 1856) = 1510406;
        v16 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 1297040183LL;
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 96));
        *((_DWORD *)v15 + 2) = 0;
        v12->Private.NdisPacketFlags &= 0xC0u;
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v16 + 112))(v16, v12, v29);
        if ( NewIrql != 2 )
          KeLowerIrql(NewIrql);
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2032))(v3, v23, v7);
          v17 = v24;
          v7 = 0;
          v18 = v24 + 1;
          v23 = v24 + 1;
        }
        else
        {
          v17 = v24;
          v18 = v23;
        }
        v10 = v29;
      }
      else
      {
        v17 = v24;
        ++v7;
        v18 = v23;
      }
      v11 = v17 + 1;
      v19 = v26-- == 1;
      v24 = v11;
      if ( v19 )
      {
        if ( v7 )
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2032))(v3, v18, v7);
        v4 = a2;
        goto LABEL_37;
      }
    }
    v10 = -1073741823;
LABEL_17:
    v29 = v10;
    goto LABEL_18;
  }
  v20 = 0;
  if ( v9 == 1 )
    v20 = *(_DWORD *)(a1 + 740) == 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), v8);
  if ( (_DWORD)v5 )
  {
    v21 = v4;
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 776))(*(_QWORD *)(a1 + 528), *v21++, 3223519274LL);
      --v5;
    }
    while ( v5 );
  }
  if ( v20 )
    KeSetEvent((PRKEVENT)(a1 + 744), 0, 0);
LABEL_37:
  if ( (unsigned __int8)byte_1C008530A >= 4u )
  {
    LODWORD(BugCheckOnFailure) = v7;
    WPP_SF_qqd(0x31u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, v4, BugCheckOnFailure);
  }
}
