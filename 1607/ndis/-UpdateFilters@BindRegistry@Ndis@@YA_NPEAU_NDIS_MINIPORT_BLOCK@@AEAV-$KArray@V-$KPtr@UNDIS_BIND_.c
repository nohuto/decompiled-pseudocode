/*
 * XREFs of ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AA758
 * Callers:
 *     ?ComputeDelta@BindRegistry@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AACB4 (-ComputeDelta@BindRegistry@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@1W4Flags@ReadBindi.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00A6C50 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00AAB1C (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateFilters(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v10; // r10
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rdi
  int v19; // [rsp+20h] [rbp-99h]
  __int64 v21; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int16 *v22; // [rsp+38h] [rbp-81h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = 0LL;
  v6 = 0LL;
  v19 = v4;
  v10 = a1;
  while ( (_DWORD)v6 != v4 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(a3 + 8) )
      __fastfail(0xBAD0FFu);
    v11 = v5;
    v12 = *(unsigned int *)(a2 + 8);
    v13 = *(_QWORD *)(a3 + 16) + 8 * v6;
    if ( v5 < v12 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a2 + 16);
        v16 = *(_QWORD *)(v15 + 8 * v11);
        if ( *(_QWORD *)(*(_QWORD *)v13 + 104LL) == *(_QWORD *)(v16 + 104)
          && *(_DWORD *)(*(_QWORD *)v13 + 112LL) == *(_DWORD *)(v16 + 112) )
        {
          break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_5;
      }
      if ( Ndis::BindState::SetSource((Ndis::BindState *)(v16 + 8), AddBindSource, Registry)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v15 + 8 * v11),
          (struct NDIS_PNPTRACE_LOCALS *)&v21);
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          WPP_SF_Zq(0xEu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v22, v21);
      }
      if ( (a4 & 1) == 0 )
      {
        while ( v5 < v11 )
        {
          if ( v5 >= *(unsigned int *)(a2 + 8) )
            __fastfail(0xBAD0FFu);
          v17 = *(_QWORD *)(a2 + 16);
          if ( Ndis::BindState::SetSource(
                 (Ndis::BindState *)(*(_QWORD *)(v17 + 8 * v5) + 8LL),
                 RemoveBindSource,
                 Registry)
            && (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v17 + 8 * v5),
              (struct NDIS_PNPTRACE_LOCALS *)&v21);
            if ( (unsigned __int8)byte_1C00895E3 >= 4u )
              WPP_SF_Zq(0xFu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v22, v21);
          }
          ++v5;
        }
      }
      v5 = v11 + 1;
    }
    else
    {
LABEL_5:
      if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(v10, a2, v5, v13) )
        return 0;
      ++v5;
    }
    v4 = v19;
    v6 = (unsigned int)(v6 + 1);
    v10 = a1;
  }
  if ( (a4 & 1) == 0 && v5 < *(unsigned int *)(a2 + 8) )
  {
    do
    {
      v18 = *(_QWORD *)(a2 + 16);
      if ( Ndis::BindState::SetSource((Ndis::BindState *)(*(_QWORD *)(v18 + 8 * v5) + 8LL), RemoveBindSource, Registry)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v18 + 8 * v5),
          (struct NDIS_PNPTRACE_LOCALS *)&v21);
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          WPP_SF_Zq(0x10u, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v22, v21);
      }
      ++v5;
    }
    while ( v5 < *(unsigned int *)(a2 + 8) );
  }
  return 1;
}
