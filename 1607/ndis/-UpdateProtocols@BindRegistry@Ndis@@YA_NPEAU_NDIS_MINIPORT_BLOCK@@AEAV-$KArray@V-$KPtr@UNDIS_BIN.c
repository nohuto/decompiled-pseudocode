/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A30CC
 * Callers:
 *     ?ComputeDelta@BindRegistry@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AACB4 (-ComputeDelta@BindRegistry@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@1W4Flags@ReadBindi.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A4084 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00A6C50 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v10; // r9
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // [rsp+28h] [rbp-69h] BYREF
  unsigned __int16 *v18; // [rsp+30h] [rbp-61h]

  v4 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)(a3 + 8) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(a3 + 16) + 8 * v5;
      if ( v4 >= *(unsigned int *)(a2 + 8) )
        goto LABEL_3;
      v12 = *(_QWORD *)(a2 + 16);
      v13 = *(_QWORD *)(v12 + 8 * v4);
      v14 = *(_QWORD *)(*(_QWORD *)v10 + 104LL);
      v15 = *(_QWORD *)(v13 + 104);
      if ( v15 != v14 )
        break;
      if ( Ndis::BindState::SetSource((Ndis::BindState *)(v13 + 8), AddBindSource, Registry)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * v4),
          (struct NDIS_PNPTRACE_LOCALS *)&v17);
        WPP_SF_Zq(0xBu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v18, v17);
      }
LABEL_4:
      ++v4;
      ++v5;
LABEL_5:
      if ( v5 >= *(unsigned int *)(a3 + 8) )
        goto LABEL_6;
    }
    if ( v15 + 8 < (unsigned __int64)(v14 + 8) )
    {
      if ( (a4 & 1) == 0
        && Ndis::BindState::SetSource((Ndis::BindState *)(v13 + 8), RemoveBindSource, Registry)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * v4),
          (struct NDIS_PNPTRACE_LOCALS *)&v17);
        WPP_SF_Zq(0xCu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v18, v17);
      }
      ++v4;
      goto LABEL_5;
    }
LABEL_3:
    if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v4, v10) )
      return 0;
    goto LABEL_4;
  }
LABEL_6:
  if ( (a4 & 1) == 0 && v4 < *(unsigned int *)(a2 + 8) )
  {
    do
    {
      v16 = *(_QWORD *)(a2 + 16);
      if ( Ndis::BindState::SetSource((Ndis::BindState *)(*(_QWORD *)(v16 + 8 * v4) + 8LL), RemoveBindSource, Registry)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v16 + 8 * v4),
          (struct NDIS_PNPTRACE_LOCALS *)&v17);
        WPP_SF_Zq(0xDu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v18, v17);
      }
      ++v4;
    }
    while ( v4 < *(unsigned int *)(a2 + 8) );
  }
  return 1;
}
