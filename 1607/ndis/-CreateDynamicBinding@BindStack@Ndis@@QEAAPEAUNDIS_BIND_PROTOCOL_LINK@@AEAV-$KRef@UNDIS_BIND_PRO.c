/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3484
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C00E3800 (_lambda_a13a88d06c7c63155a98f7d7ba7090a7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A31B0 (-append@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A3480 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00A34FC (Ndis--sortProtocolsByPointer.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00A3704 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDele_ea_1C00A3704.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A3DE0 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00A3E54 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A4494 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00A6C50 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00C3174 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 */

PVOID __fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        char *a2,
        __int64 a3,
        enum Ndis::BindSource::Flags a4)
{
  char *v8; // rbx
  PVOID v9; // rdi
  unsigned __int64 v10; // r8
  __int64 i; // rdx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rcx
  struct NDIS_BIND_DRIVER_BASE *v15; // rdx
  unsigned __int64 v16; // rbx
  char v17; // al
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, P, a2);
  v8 = (char *)P[0];
  if ( P[0] )
  {
    v10 = *(unsigned int *)(a1 + 16);
    for ( i = 0LL; (_DWORD)i != (_DWORD)v10; i = (unsigned int)(i + 1) )
    {
      v12 = (unsigned int)i;
      if ( (unsigned int)i >= v10 )
        __fastfail(0xBAD0FFu);
      v13 = *(_QWORD *)(a1 + 24);
      if ( a4 != UnsolicitedOpen || !Ndis::BindState::IsAlive((Ndis::BindState *)(*(_QWORD *)(v13 + 8 * i) + 8LL)) )
      {
        v14 = *(_QWORD *)(v13 + 8 * i);
        if ( *(_QWORD *)(v14 + 104) == *((_QWORD *)v8 + 13) )
        {
          Ndis::BindState::SetSource((Ndis::BindState *)(v14 + 8), AddBindSource, a4);
          v9 = *(PVOID *)(v13 + 8 * v12);
          goto LABEL_23;
        }
      }
    }
    *((_QWORD *)v8 + 2) = a3;
    if ( *(_QWORD *)a2 == -8LL )
      v15 = 0LL;
    else
      v15 = (struct NDIS_BIND_DRIVER_BASE *)(*(_QWORD *)a2 + 16LL);
    NDIS_BIND_LINK_BASE::LinkToDriver((NDIS_BIND_LINK_BASE *)((char *)P[0] + 8), v15);
    Ndis::BindState::SetSource((Ndis::BindState *)((char *)P[0] + 8), AddBindSource, a4);
    v9 = P[0];
    v16 = 0LL;
    if ( *(_DWORD *)(a1 + 16) )
    {
      while ( Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 24) + 8 * v16, (__int64)P) )
      {
        if ( ++v16 >= *(unsigned int *)(a1 + 16) )
          goto LABEL_18;
      }
      v17 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(
              a1 + 8,
              v16,
              (__int64 *)P);
    }
    else
    {
LABEL_18:
      v17 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(a1 + 8, (__int64 *)P);
    }
    if ( v17 )
    {
      ++*(_DWORD *)(a1 + 136);
      *(_BYTE *)(a3 + 5312) = 1;
    }
    else
    {
      v9 = 0LL;
    }
LABEL_23:
    v8 = (char *)P[0];
  }
  else
  {
    v9 = 0LL;
  }
  if ( v8 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((volatile signed __int32 **)v8 + 13);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v8 + 8));
    ExFreePoolWithTag(v8, 0x4C745042u);
  }
  return v9;
}
