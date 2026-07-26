/*
 * XREFs of ndisSetMiniportRSSParameters @ 0x1C001EF98
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00B0AC0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     Template_jqxqqq @ 0x1C003F10C (Template_jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSParameters(__int64 a1, __int64 a2, int *a3)
{
  char v6; // r9
  unsigned __int8 v7; // bp
  unsigned int v8; // r10d
  __int64 v9; // r8
  unsigned __int8 v10; // bl
  unsigned int v11; // edx
  int v12; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-58h]

  v6 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(144LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
    v6 = byte_1C0085312;
  }
  *(_DWORD *)(a2 + 56) = 0;
  v7 = 1;
  v8 = *(_DWORD *)(a2 + 48);
  if ( v8 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v12 = -1073676268;
    if ( (unsigned __int8)v6 < 2u )
      goto LABEL_16;
    v14 = 145LL;
    goto LABEL_22;
  }
  v9 = *(_QWORD *)(a2 + 40);
  v10 = *(_BYTE *)(v9 + 1);
  if ( v10 >= 2u )
  {
    if ( *(_WORD *)(v9 + 2) < 0x28u )
    {
      if ( (unsigned __int8)v6 >= 2u )
      {
        WPP_SF_qq(146LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
        v6 = byte_1C0085312;
      }
      v12 = -1073676268;
      goto LABEL_16;
    }
    if ( v8 < 0x28 )
    {
      *(_DWORD *)(a2 + 56) = 40;
      v12 = -1073676268;
      if ( (unsigned __int8)v6 < 2u )
        goto LABEL_16;
      v14 = 147LL;
LABEL_22:
      WPP_SF_qqd(v14, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, -1073676268);
      v6 = byte_1C0085312;
      goto LABEL_16;
    }
  }
  v11 = *(_DWORD *)(v9 + 16) + *(unsigned __int16 *)(v9 + 12);
  if ( *(_WORD *)(v9 + 12) > 0x200u )
  {
    if ( (unsigned __int8)v6 < 2u )
    {
LABEL_31:
      v12 = -1073676267;
      goto LABEL_16;
    }
    v15 = 148LL;
LABEL_30:
    WPP_SF_qqd(v15, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, 0);
    v6 = byte_1C0085312;
    goto LABEL_31;
  }
  if ( *(_WORD *)(v9 + 20) != 40 && (*(_BYTE *)(v9 + 4) & 0x10) == 0 && (unsigned __int8)*(_DWORD *)(v9 + 8) )
  {
    if ( (unsigned __int8)v6 < 2u )
      goto LABEL_31;
    v15 = 149LL;
    goto LABEL_30;
  }
  if ( v11 <= *(_DWORD *)(v9 + 24) + (unsigned int)*(unsigned __int16 *)(v9 + 20) )
    v11 = *(_DWORD *)(v9 + 24) + *(unsigned __int16 *)(v9 + 20);
  if ( v10 >= 2u && v11 <= *(_DWORD *)(v9 + 28) + *(_DWORD *)(v9 + 32) * *(_DWORD *)(v9 + 36) )
    v11 = *(_DWORD *)(v9 + 28) + *(_DWORD *)(v9 + 32) * *(_DWORD *)(v9 + 36);
  v12 = 0;
  if ( v8 >= v11 )
  {
    v7 = 0;
    goto LABEL_16;
  }
  *(_DWORD *)(a2 + 56) = v11;
  v12 = -1073676268;
  if ( (unsigned __int8)v6 >= 2u )
  {
    v14 = 150LL;
    goto LABEL_22;
  }
LABEL_16:
  *a3 = v12;
  if ( (unsigned __int8)v6 >= 4u )
  {
    LODWORD(v16) = v7;
    WPP_SF_qqDD(151LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, v16, v12);
  }
  if ( v12 && (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(_DWORD *)(a1 + 4112),
      (unsigned int)&SetMiniportRSSCapsFailed,
      a1 + 4064,
      a1 + 4064,
      *(_DWORD *)(a1 + 4112),
      *(_QWORD *)(a1 + 4080),
      v12,
      39,
      a2);
  return v7;
}
