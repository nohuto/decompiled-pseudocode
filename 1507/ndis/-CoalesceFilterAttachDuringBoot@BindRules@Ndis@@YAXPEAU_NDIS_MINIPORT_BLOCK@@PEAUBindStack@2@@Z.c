/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A40C0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C006F670 (WPP_SF__guid_D_ea_1C006F670.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  unsigned __int64 SpinLock; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+28h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-41h]

  if ( this->InitMode )
  {
    PcwDataBlock_low = LODWORD(a2->PcwDataBlock);
    for ( i = 0LL; (_DWORD)i != (_DWORD)PcwDataBlock_low; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= PcwDataBlock_low )
        __fastfail(0xBAD0FFu);
      v9 = *((_QWORD *)a2->Reserved28 + (unsigned int)i);
      if ( *(_DWORD *)(v9 + 72) || *(_DWORD *)(v9 + 44) )
      {
        v10 = *(_QWORD *)(v9 + 104);
        if ( (*(_DWORD *)(v10 + 56) & 1) == 0 && !*(_QWORD *)(v10 + 72) && !*(_BYTE *)(v9 + 24) )
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
            WPP_SF__guid_D(0x22u, i, v10 + 40, *(_DWORD *)(v9 + 112));
          if ( Ndis::BindState::SetBinding(
                 (Ndis::BindState *)&a2->OpenQueue,
                 BindingDisabled,
                 Reason_MandatoryMissingDuringBoot)
            && (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v18);
            WPP_SF_Zq(0x23u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v19, v18);
          }
          if ( Ndis::BindState::SetPause(
                 (Ndis::BindState *)&a2->OpenQueue,
                 DatapathPaused,
                 PauseReason_MandatoryMissingDuringBoot)
            && (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v18);
            v13 = 36;
            goto LABEL_56;
          }
          return;
        }
      }
    }
    Lock = a2->Lock;
    LODWORD(a2->Lock) = Lock & 0xFFFFFEFF;
    if ( (Lock != 0) != ((Lock & 0xFFFFFEFF) != 0) || !a2->ShortRef.SpinLock )
    {
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, Lock, Lock & 0xFFFFFEFF);
      SpinLock = a2->ShortRef.SpinLock;
      if ( !*(_BYTE *)(SpinLock + 5313) )
        *(_BYTE *)(SpinLock + 5312) = 1;
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v18);
        WPP_SF_Zq(0x25u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v19, v18);
      }
    }
    Lock_high = HIDWORD(a2->Lock);
    HIDWORD(a2->Lock) = Lock_high & 0xFFFFFFBF;
    if ( (Lock_high != 0) != ((Lock_high & 0xFFFFFFBF) != 0) || !a2->ShortRef.SpinLock )
    {
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, Lock_high, Lock_high & 0xFFFFFFBF);
      v15 = a2->ShortRef.SpinLock;
      if ( !*(_BYTE *)(v15 + 5313) )
        *(_BYTE *)(v15 + 5312) = 1;
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v18);
        v13 = 38;
        goto LABEL_56;
      }
    }
  }
  else
  {
    v5 = a2->Lock;
    LODWORD(a2->Lock) = v5 & 0xFFFFFEFF;
    if ( (v5 != 0) != ((v5 & 0xFFFFFEFF) != 0) || !a2->ShortRef.SpinLock )
    {
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v5, v5 & 0xFFFFFEFF);
      v16 = a2->ShortRef.SpinLock;
      if ( !*(_BYTE *)(v16 + 5313) )
        *(_BYTE *)(v16 + 5312) = 1;
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v18);
        WPP_SF_Zq(0x27u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v19, v18);
      }
    }
    v6 = HIDWORD(a2->Lock);
    HIDWORD(a2->Lock) = v6 & 0xFFFFFFBF;
    if ( (v6 != 0) != ((v6 & 0xFFFFFFBF) != 0) || !a2->ShortRef.SpinLock )
    {
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v6, v6 & 0xFFFFFFBF);
      v17 = a2->ShortRef.SpinLock;
      if ( !*(_BYTE *)(v17 + 5313) )
        *(_BYTE *)(v17 + 5312) = 1;
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v18);
        v13 = 40;
LABEL_56:
        WPP_SF_Zq(v13, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v19, v18);
      }
    }
  }
}
