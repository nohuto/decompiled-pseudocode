/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A35E8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseNeededForBind(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  unsigned int v5; // edx
  unsigned __int64 PcwDataBlock_low; // r8
  __int64 v7; // rdi
  _QWORD *Reserved28; // rsi
  __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 BaseMiniport_low; // r9
  unsigned int i; // edx
  __int64 v13; // rdi
  _QWORD *MiniportAdapterContext; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r8d
  char v19; // cl
  unsigned __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  int Lock_high; // r8d
  char v25; // cl
  unsigned __int64 v26; // rax
  char v27; // cl
  unsigned __int64 SpinLock; // rax
  unsigned __int16 v29; // cx
  char v30; // cl
  unsigned __int64 v31; // rax
  _QWORD v32[20]; // [rsp+28h] [rbp-69h] BYREF

  v5 = 0;
  PcwDataBlock_low = LODWORD(a2->PcwDataBlock);
  while ( v5 != (_DWORD)PcwDataBlock_low )
  {
    v7 = v5;
    if ( v5 >= PcwDataBlock_low )
      __fastfail(0xBAD0FFu);
    Reserved28 = a2->Reserved28;
    v9 = Reserved28[v5];
    if ( *(_DWORD *)(v9 + 72) || *(_DWORD *)(v9 + 44) )
    {
      v10 = 0;
      if ( !*(_BYTE *)(v9 + 25) )
        LOBYTE(v10) = *(_DWORD *)(v9 + 72) == 0;
      if ( (*(_DWORD *)(Reserved28[v5] + 48LL) != 0) != v10 )
      {
        Lock_high = HIDWORD(a2->Lock);
        HIDWORD(a2->Lock) = Lock_high | 4;
        if ( Lock_high == 0 || !a2->ShortRef.SpinLock )
        {
          v27 = byte_1C0085323;
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
          {
            WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, Lock_high, Lock_high | 4);
            v27 = byte_1C0085323;
          }
          SpinLock = a2->ShortRef.SpinLock;
          if ( !*(_BYTE *)(SpinLock + 5313) )
            *(_BYTE *)(SpinLock + 5312) = 1;
          if ( (unsigned __int8)v27 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_FILTER_LINK *)Reserved28[v7],
              (struct NDIS_PNPTRACE_LOCALS *)v32);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
            {
              v29 = 62;
LABEL_65:
              WPP_SF_Zq(v29, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, (__int64 *)v32[1], v32[0]);
            }
          }
        }
        return;
      }
    }
    ++v5;
  }
  BaseMiniport_low = LODWORD(a2->BaseMiniport);
  for ( i = 0; i != (_DWORD)BaseMiniport_low; ++i )
  {
    v13 = i;
    if ( i >= BaseMiniport_low )
      __fastfail(0xBAD0FFu);
    MiniportAdapterContext = a2->MiniportAdapterContext;
    v15 = MiniportAdapterContext[i];
    if ( *(_DWORD *)(v15 + 72) || *(_DWORD *)(v15 + 44) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 104) + 56LL);
      if ( v16
        && *(_BYTE *)(v16 + 56) >= 6u
        && ((v17 = *(_DWORD *)(v15 + 48)) != 0 && (*(_BYTE *)(v15 + 25) || *(_DWORD *)(v15 + 72))
         || !this->InitMode && !v17 && !*(_BYTE *)(v15 + 25) && !*(_DWORD *)(v15 + 72)) )
      {
        v18 = HIDWORD(a2->Lock);
        HIDWORD(a2->Lock) = v18 | 4;
        if ( v18 == 0 || !a2->ShortRef.SpinLock )
        {
          v19 = byte_1C0085323;
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
          {
            WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v18, v18 | 4);
            v19 = byte_1C0085323;
          }
          v20 = a2->ShortRef.SpinLock;
          if ( !*(_BYTE *)(v20 + 5313) )
            *(_BYTE *)(v20 + 5312) = 1;
          if ( (unsigned __int8)v19 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_PROTOCOL_LINK *)MiniportAdapterContext[v13],
              (struct NDIS_PNPTRACE_LOCALS *)v32);
            v29 = 63;
            goto LABEL_65;
          }
        }
        return;
      }
    }
  }
  v21 = 0;
  v22 = HIDWORD(a2->Lock);
  v23 = 0;
  if ( LODWORD(a2->Lock) )
  {
    HIDWORD(a2->Lock) = v22 | 4;
    LOBYTE(v21) = v22 != 0;
    LOBYTE(v23) = 1;
    if ( v21 != v23 || !a2->ShortRef.SpinLock )
    {
      v30 = byte_1C0085323;
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v22, v22 | 4);
        v30 = byte_1C0085323;
      }
      v31 = a2->ShortRef.SpinLock;
      if ( !*(_BYTE *)(v31 + 5313) )
        *(_BYTE *)(v31 + 5312) = 1;
      if ( (unsigned __int8)v30 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v32);
        v29 = 64;
        goto LABEL_65;
      }
    }
  }
  else
  {
    HIDWORD(a2->Lock) = v22 & 0xFFFFFFFB;
    LOBYTE(v21) = v22 != 0;
    LOBYTE(v23) = (v22 & 0xFFFFFFFB) != 0;
    if ( v21 != v23 || !a2->ShortRef.SpinLock )
    {
      v25 = byte_1C0085323;
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v22, v22 & 0xFFFFFFFB);
        v25 = byte_1C0085323;
      }
      v26 = a2->ShortRef.SpinLock;
      if ( !*(_BYTE *)(v26 + 5313) )
        *(_BYTE *)(v26 + 5312) = 1;
      if ( (unsigned __int8)v25 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v32);
        v29 = 65;
        goto LABEL_65;
      }
    }
  }
}
