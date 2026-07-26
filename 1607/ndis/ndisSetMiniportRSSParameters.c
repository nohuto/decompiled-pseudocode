/*
 * XREFs of ndisSetMiniportRSSParameters @ 0x1C002447C
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00B1C30 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C003C3D8 (WPP_SF_qqDD.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSParameters(__int64 a1, __int64 a2, int *a3)
{
  char v6; // r9
  unsigned __int8 v7; // r14
  unsigned int v8; // r10d
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned __int8 v11; // r11
  unsigned __int16 v12; // dx
  unsigned int v13; // edx
  int v14; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v6 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(145LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
    v6 = byte_1C00895D2;
  }
  *(_DWORD *)(a2 + 56) = 0;
  v7 = 1;
  v8 = *(_DWORD *)(a2 + 48);
  if ( v8 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v14 = -1073676268;
    if ( (unsigned __int8)v6 < 2u )
      goto LABEL_17;
    v16 = 146LL;
    goto LABEL_23;
  }
  v9 = *(_QWORD *)(a2 + 40);
  v10 = 40;
  v11 = *(_BYTE *)(v9 + 1);
  if ( v11 >= 2u )
  {
    v12 = *(_WORD *)(v9 + 2);
    if ( v12 < 0x28u )
    {
      if ( (unsigned __int8)v6 < 2u )
      {
LABEL_27:
        v14 = -1073676268;
        goto LABEL_17;
      }
      v17 = 147LL;
LABEL_26:
      WPP_SF_qq(v17, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
      v6 = byte_1C00895D2;
      goto LABEL_27;
    }
    if ( v11 >= 3u )
    {
      v10 = 44;
      if ( v12 < 0x2Cu )
      {
        if ( (unsigned __int8)v6 < 2u )
          goto LABEL_27;
        v17 = 148LL;
        goto LABEL_26;
      }
    }
    if ( v8 < v10 )
    {
      *(_DWORD *)(a2 + 56) = v10;
      v14 = -1073676268;
      if ( (unsigned __int8)v6 < 2u )
        goto LABEL_17;
      v16 = 149LL;
LABEL_23:
      WPP_SF_qqd(v16, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, -1073676268);
      v6 = byte_1C00895D2;
      goto LABEL_17;
    }
  }
  v13 = *(_DWORD *)(v9 + 16) + *(unsigned __int16 *)(v9 + 12);
  if ( *(_WORD *)(v9 + 12) > 0x200u )
  {
    if ( (unsigned __int8)v6 < 2u )
    {
LABEL_36:
      v14 = -1073676267;
      goto LABEL_17;
    }
    v18 = 150LL;
LABEL_35:
    WPP_SF_qqd(v18, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, 0);
    v6 = byte_1C00895D2;
    goto LABEL_36;
  }
  if ( *(_WORD *)(v9 + 20) != 40 && (*(_BYTE *)(v9 + 4) & 0x10) == 0 && (unsigned __int8)*(_DWORD *)(v9 + 8) )
  {
    if ( (unsigned __int8)v6 < 2u )
      goto LABEL_36;
    v18 = 151LL;
    goto LABEL_35;
  }
  if ( v13 <= *(_DWORD *)(v9 + 24) + (unsigned int)*(unsigned __int16 *)(v9 + 20) )
    v13 = *(_DWORD *)(v9 + 24) + *(unsigned __int16 *)(v9 + 20);
  if ( v11 >= 2u && v13 <= *(_DWORD *)(v9 + 28) + *(_DWORD *)(v9 + 32) * *(_DWORD *)(v9 + 36) )
    v13 = *(_DWORD *)(v9 + 28) + *(_DWORD *)(v9 + 32) * *(_DWORD *)(v9 + 36);
  v14 = 0;
  if ( v8 >= v13 )
  {
    v7 = 0;
    goto LABEL_17;
  }
  *(_DWORD *)(a2 + 56) = v13;
  v14 = -1073676268;
  if ( (unsigned __int8)v6 >= 2u )
  {
    v16 = 152LL;
    goto LABEL_23;
  }
LABEL_17:
  *a3 = v14;
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qqDD(153LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, v7, v14);
  if ( v14 && (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(_DWORD *)(a1 + 4112),
      (unsigned int)&SetMiniportRSSCapsFailed,
      a1 + 4064,
      a1 + 4064,
      *(_DWORD *)(a1 + 4112),
      *(_QWORD *)(a1 + 4080),
      v14,
      141,
      a2);
  return v7;
}
