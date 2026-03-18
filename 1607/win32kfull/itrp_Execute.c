/*
 * XREFs of itrp_Execute @ 0x1C00CAFA0
 * Callers:
 *     itrp_ExecuteFontPgm @ 0x1C001BFF4 (itrp_ExecuteFontPgm.c)
 *     itrp_ExecutePrePgm @ 0x1C001E050 (itrp_ExecutePrePgm.c)
 *     itrp_ExecuteGlyphPgm @ 0x1C001E630 (itrp_ExecuteGlyphPgm.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C00C57D8 (InvokeGlobalGSScale.c)
 *     ExecutePhaseControl @ 0x1C00D1EB8 (ExecutePhaseControl.c)
 *     InitPhaseControl @ 0x1C00F89C4 (InitPhaseControl.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     itrp_InnerTraceExecute @ 0x1C02E0D7C (itrp_InnerTraceExecute.c)
 */

__int64 __fastcall itrp_Execute(
        _OWORD *a1,
        __int128 *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v6; // xmm1
  int v7; // esi
  __int128 v8; // xmm0
  unsigned __int8 *v10; // rbx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int16 v22; // ax
  __int64 v23; // rcx
  __int16 v24; // ax
  int v25; // esi
  __int64 v26; // rdx
  _OWORD v28[7]; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD v29[7]; // [rsp+A0h] [rbp-88h] BYREF

  v6 = a1[1];
  v28[0] = *a1;
  v7 = 2;
  v8 = a1[2];
  v10 = a3;
  v28[1] = v6;
  v11 = a1[3];
  v28[2] = v8;
  v12 = a1[4];
  v28[3] = v11;
  v13 = a1[5];
  v28[4] = v12;
  v14 = a1[6];
  v28[5] = v13;
  v15 = a2[1];
  v28[6] = v14;
  v16 = *a2;
  v29[1] = v15;
  v17 = a2[3];
  v29[0] = v16;
  v18 = a2[2];
  v29[3] = v17;
  v19 = a2[5];
  v29[2] = v18;
  v20 = a2[4];
  v29[5] = v19;
  v29[4] = v20;
  v21 = a2[6];
  qword_1C03294E0 = a5;
  qword_1C03294F0 = 0LL;
  v29[6] = v21;
  qword_1C03294D8 = (__int64)v28;
  LocalGS = (__int64)v29;
  qword_1C03294A8 = (__int64)v29;
  qword_1C03294B0 = (__int64)v29;
  dword_1C03294F8 = 0;
  dword_1C03294BC = 0x4000;
  dword_1C03294B8 = 0x4000;
  dword_1C03294C0 = 0x4000;
  word_1C0329508 = 0x4000;
  dword_1C032950C = 2;
  dword_1C0329510 = 3;
  dword_1C0329514 = 3;
  dword_1C0329500 = 0;
  dword_1C0329548 = *(_DWORD *)(a5 + 400);
  dword_1C032954C = *(_DWORD *)(a5 + 404);
  dword_1C0329550 = *(_DWORD *)(a5 + 408);
  word_1C032952C = *(_DWORD *)(a5 + 36) == 0;
  if ( *(_BYTE *)(a5 + 333) == 1 )
  {
    dword_1C032951C = 2;
    dword_1C0329520 = 2;
    dword_1C0329524 = 4;
    goto LABEL_10;
  }
  *(_WORD *)(a5 + 454) &= 0xFFE4u;
  v22 = *(_WORD *)(qword_1C03294E0 + 452);
  if ( (v22 & 1) == 0 )
    goto LABEL_3;
  if ( (v22 & 4) != 0 )
  {
    if ( dword_1C03294B8 != 0x4000 )
      goto LABEL_25;
LABEL_3:
    word_1C0329554 = 0;
    goto LABEL_4;
  }
  if ( dword_1C03294B8 == 0x40000000 )
    goto LABEL_3;
LABEL_25:
  word_1C0329554 = 1;
  if ( (*(_BYTE *)(qword_1C03294E0 + 120) & 4) != 0 || *(_BYTE *)(qword_1C03294E0 + 333) )
  {
    v23 = 1LL;
    goto LABEL_5;
  }
LABEL_4:
  v23 = 0LL;
LABEL_5:
  *(_DWORD *)(qword_1C03294E0 + 128) = itrp_RoundFunctionId[8 * v23 + *(unsigned __int16 *)(qword_1C03294E0 + 132)];
  word_1C0329558 = -1;
  word_1C0329556 = -1;
  if ( *(_WORD *)(a5 + 24) <= 1u )
    return 0LL;
  if ( *(_BYTE *)(a5 + 340) )
  {
    dword_1C032951C = 2;
    dword_1C0329520 = 2;
    dword_1C0329524 = 4;
  }
  else
  {
    dword_1C032951C = 3;
    dword_1C0329520 = 3;
    dword_1C0329524 = 5;
    word_1C032952C = 0;
  }
  v24 = *(_WORD *)(a5 + 154);
  if ( v24 )
  {
    *(_DWORD *)(a5 + 112) = InvokeGlobalGSScale(*(_DWORD *)(a5 + 192), (int *)(a5 + 296), (unsigned int)v24);
    word_1C032952C = 0;
  }
LABEL_10:
  qword_1C03294C8 = *(_QWORD *)a5;
  qword_1C03294E8 = a6;
  dword_1C0329530 = 0;
  if ( a6 )
    v7 = 1;
  dword_1C0329518 = v7;
  if ( *(_BYTE *)(a5 + 333) == 2 && (*(_BYTE *)(a5 + 452) & 3) == 3 )
  {
    InitPhaseControl(qword_1C03294D8 + 112);
    v7 = dword_1C0329518;
  }
  v25 = v7 - 1;
  if ( v25 )
  {
    if ( v25 == 1 )
    {
      qword_1C0329538 = a4;
      qword_1C0329540 = (__int64)v10;
      if ( (unsigned __int64)v10 < a4 )
      {
        while ( 1 )
        {
          v26 = *v10;
          if ( !--dword_1C0329550 )
            break;
          v10 = (unsigned __int8 *)((__int64 (__fastcall *)(unsigned __int8 *))function[v26])(v10 + 1);
          if ( (unsigned __int64)v10 >= a4 )
            goto LABEL_20;
        }
        dword_1C0329530 = 4366;
      }
    }
    else
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    itrp_InnerTraceExecute(v10, a4);
  }
LABEL_20:
  if ( *(_BYTE *)(qword_1C03294E0 + 333) == 2
    && (*(_BYTE *)(qword_1C03294E0 + 452) & 3) == 3
    && !*(_DWORD *)(qword_1C03294D8 + 208) )
  {
    ExecutePhaseControl(&LocalGS, qword_1C03294D8 + 112, a3, a4);
  }
  *(_DWORD *)(a5 + 408) = dword_1C0329550;
  return (unsigned int)dword_1C0329530;
}
