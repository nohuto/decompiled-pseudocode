/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A5F14
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C00739A0 (WPP_SF__guid_D_ea_1C00739A0.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  int v5; // r8d
  int v6; // r8d
  unsigned __int64 PcwDataBlock_low; // r11
  __int64 i; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  int Lock; // r8d
  int Lock_high; // r8d
  unsigned __int16 v13; // cx
  bool v14; // cf
  __int64 v15; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int16 *v16; // [rsp+30h] [rbp-41h]

  if ( this->InitMode )
  {
    PcwDataBlock_low = LODWORD(a2->PcwDataBlock);
    for ( i = 0LL; (_DWORD)i != (_DWORD)PcwDataBlock_low; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= PcwDataBlock_low )
        __fastfail(0xBAD0FFu);
      v9 = *((_QWORD *)a2->Reserved28 + i);
      if ( *(_DWORD *)(v9 + 72) || *(_DWORD *)(v9 + 44) )
      {
        v10 = *(_QWORD *)(v9 + 104);
        if ( (*(_DWORD *)(v10 + 56) & 1) == 0 && !*(_QWORD *)(v10 + 72) && !*(_BYTE *)(v9 + 24) )
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF__guid_D(0x22u, i, v10 + 40, *(_DWORD *)(v9 + 112));
          if ( Ndis::BindState::SetBinding(
                 (Ndis::BindState *)&a2->OpenQueue,
                 BindingDisabled,
                 Reason_MandatoryMissingDuringBoot)
            && (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v15);
            WPP_SF_Zq(0x23u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v16, v15);
          }
          if ( Ndis::BindState::SetPause(
                 (Ndis::BindState *)&a2->OpenQueue,
                 DatapathPaused,
                 PauseReason_MandatoryMissingDuringBoot)
            && (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v15);
            v13 = 36;
            goto LABEL_47;
          }
          return;
        }
      }
    }
    Lock = a2->Lock;
    LODWORD(a2->Lock) = Lock & 0xFFFFFEFF;
    if ( (Lock != 0) != ((Lock & 0xFFFFFEFF) != 0) || !a2->ShortRef.SpinLock )
    {
      if ( (unsigned __int8)byte_1C00895E3 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, Lock, Lock & 0xFFFFFEFF);
      v14 = (unsigned __int8)byte_1C00895E3 < 4u;
      *(_BYTE *)(a2->ShortRef.SpinLock + 5312) = 1;
      if ( !v14 )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v15);
        WPP_SF_Zq(0x25u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v16, v15);
      }
    }
    Lock_high = HIDWORD(a2->Lock);
    HIDWORD(a2->Lock) = Lock_high & 0xFFFFFFBF;
    if ( (Lock_high != 0) != ((Lock_high & 0xFFFFFFBF) != 0) || !a2->ShortRef.SpinLock )
    {
      if ( (unsigned __int8)byte_1C00895E3 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, Lock_high, Lock_high & 0xFFFFFFBF);
      v14 = (unsigned __int8)byte_1C00895E3 < 4u;
      *(_BYTE *)(a2->ShortRef.SpinLock + 5312) = 1;
      if ( !v14 )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v15);
        v13 = 38;
        goto LABEL_47;
      }
    }
  }
  else
  {
    v5 = a2->Lock;
    LODWORD(a2->Lock) = v5 & 0xFFFFFEFF;
    if ( (v5 != 0) != ((v5 & 0xFFFFFEFF) != 0) || !a2->ShortRef.SpinLock )
    {
      if ( (unsigned __int8)byte_1C00895E3 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v5, v5 & 0xFFFFFEFF);
      v14 = (unsigned __int8)byte_1C00895E3 < 4u;
      *(_BYTE *)(a2->ShortRef.SpinLock + 5312) = 1;
      if ( !v14 )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v15);
        WPP_SF_Zq(0x27u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v16, v15);
      }
    }
    v6 = HIDWORD(a2->Lock);
    HIDWORD(a2->Lock) = v6 & 0xFFFFFFBF;
    if ( (v6 != 0) != ((v6 & 0xFFFFFFBF) != 0) || !a2->ShortRef.SpinLock )
    {
      if ( (unsigned __int8)byte_1C00895E3 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v6, v6 & 0xFFFFFFBF);
      v14 = (unsigned __int8)byte_1C00895E3 < 4u;
      *(_BYTE *)(a2->ShortRef.SpinLock + 5312) = 1;
      if ( !v14 )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v15);
        v13 = 40;
LABEL_47:
        WPP_SF_Zq(v13, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v16, v15);
      }
    }
  }
}
