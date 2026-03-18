/*
 * XREFs of HUBDESC_ValidateMsOs20CompatibleId @ 0x1C0032430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CompatibleId(__int64 a1, __int64 a2, _WORD *a3)
{
  char v6; // di
  int v7; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rdx
  char v11; // r9
  unsigned __int8 *v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // r10
  unsigned __int8 v15; // cl
  char v16; // r9
  unsigned __int8 *v17; // rdx
  unsigned int v18; // r8d
  unsigned __int8 v19; // cl
  unsigned __int16 v20; // r9

  v6 = 1;
  if ( (*(_BYTE *)a2 & 0x20) != 0 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, 0x142u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 166LL);
    v6 = 0;
  }
  LOWORD(v7) = *a3;
  if ( *a3 != 20 )
  {
    v7 = (unsigned __int16)v7;
    v8 = 323;
    goto LABEL_5;
  }
  v11 = 0;
  v12 = (unsigned __int8 *)(a3 + 2);
  v13 = 0;
  v14 = 0x87FFFFFE03FFLL;
  do
  {
    v15 = *v12;
    if ( *v12 )
    {
      if ( v11 == 1 )
      {
        v20 = 324;
LABEL_26:
        WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, v20, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
        v9 = 168LL;
        goto LABEL_6;
      }
      if ( (unsigned __int8)(v15 - 48) > 0x2Fu || !_bittest64(&v14, (unsigned __int8)(v15 - 48)) )
      {
        v7 = v15;
        v8 = 325;
LABEL_5:
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 88),
          2u,
          5u,
          v8,
          (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids,
          v7);
        v9 = 167LL;
LABEL_6:
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v9);
        v6 = 0;
LABEL_7:
        WPP_RECORDER_SF_(
          *(_QWORD *)(a2 + 88),
          2u,
          5u,
          0x148u,
          (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
        return v6;
      }
    }
    else
    {
      v11 = 1;
    }
    ++v13;
    ++v12;
  }
  while ( v13 < 8 );
  v16 = 0;
  v17 = (unsigned __int8 *)(a3 + 6);
  v18 = 0;
  while ( 1 )
  {
    v19 = *v17;
    if ( *v17 )
      break;
    v16 = 1;
LABEL_28:
    ++v18;
    ++v17;
    if ( v18 >= 8 )
      goto LABEL_23;
  }
  if ( v16 == 1 )
  {
    v20 = 326;
    goto LABEL_26;
  }
  if ( (unsigned __int8)(v19 - 48) <= 0x2Fu && _bittest64(&v14, (unsigned __int8)(v19 - 48)) )
    goto LABEL_28;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a2 + 88),
    2u,
    5u,
    0x147u,
    (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids,
    v19);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 167LL);
  v6 = 0;
LABEL_23:
  if ( v6 != 1 )
    goto LABEL_7;
  *(_DWORD *)a2 |= 0x20u;
  *(_QWORD *)(a2 + 32) = a3;
  return v6;
}
