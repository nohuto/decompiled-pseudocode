/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A5524
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  int Lock_high; // r8d
  char v24; // cl
  char v25; // cl
  unsigned __int16 v26; // cx
  char v27; // cl
  _QWORD v28[20]; // [rsp+20h] [rbp-69h] BYREF

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
          v25 = byte_1C00895E3;
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          {
            WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, Lock_high, Lock_high | 4);
            v25 = byte_1C00895E3;
          }
          *(_BYTE *)(a2->ShortRef.SpinLock + 5312) = 1;
          if ( (unsigned __int8)v25 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_FILTER_LINK *)Reserved28[v7],
              (struct NDIS_PNPTRACE_LOCALS *)v28);
            if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            {
              v26 = 62;
LABEL_57:
              WPP_SF_Zq(v26, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (unsigned __int16 *)v28[1], v28[0]);
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
          v19 = byte_1C00895E3;
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          {
            WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v18, v18 | 4);
            v19 = byte_1C00895E3;
          }
          *(_BYTE *)(a2->ShortRef.SpinLock + 5312) = 1;
          if ( (unsigned __int8)v19 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_PROTOCOL_LINK *)MiniportAdapterContext[v13],
              (struct NDIS_PNPTRACE_LOCALS *)v28);
            v26 = 63;
            goto LABEL_57;
          }
        }
        return;
      }
    }
  }
  v20 = 0;
  v21 = HIDWORD(a2->Lock);
  v22 = 0;
  if ( LODWORD(a2->Lock) )
  {
    HIDWORD(a2->Lock) = v21 | 4;
    LOBYTE(v20) = v21 != 0;
    LOBYTE(v22) = 1;
    if ( v20 != v22 || !a2->ShortRef.SpinLock )
    {
      v27 = byte_1C00895E3;
      if ( (unsigned __int8)byte_1C00895E3 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v21, v21 | 4);
        v27 = byte_1C00895E3;
      }
      *(_BYTE *)(a2->ShortRef.SpinLock + 5312) = 1;
      if ( (unsigned __int8)v27 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v28);
        v26 = 64;
        goto LABEL_57;
      }
    }
  }
  else
  {
    HIDWORD(a2->Lock) = v21 & 0xFFFFFFFB;
    LOBYTE(v20) = v21 != 0;
    LOBYTE(v22) = (v21 & 0xFFFFFFFB) != 0;
    if ( v20 != v22 || !a2->ShortRef.SpinLock )
    {
      v24 = byte_1C00895E3;
      if ( (unsigned __int8)byte_1C00895E3 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v21, v21 & 0xFFFFFFFB);
        v24 = byte_1C00895E3;
      }
      *(_BYTE *)(a2->ShortRef.SpinLock + 5312) = 1;
      if ( (unsigned __int8)v24 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v28);
        v26 = 65;
        goto LABEL_57;
      }
    }
  }
}
