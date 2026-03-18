/*
 * XREFs of itrp_Execute @ 0x1C00B0DE0
 * Callers:
 *     itrp_ExecuteFontPgm @ 0x1C00A37FC (itrp_ExecuteFontPgm.c)
 *     itrp_ExecutePrePgm @ 0x1C00A5C38 (itrp_ExecutePrePgm.c)
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 *     itrp_ExecuteGlyphPgm @ 0x1C00EFD3C (itrp_ExecuteGlyphPgm.c)
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C00ADCB0 (InvokeGlobalGSScale.c)
 *     ExecutePhaseControl @ 0x1C00C4244 (ExecutePhaseControl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     itrp_InnerTraceExecute @ 0x1C02DD5EC (itrp_InnerTraceExecute.c)
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
  __int64 v28; // r8
  int v29; // r10d
  __int64 v30; // r9
  __int64 v31; // rax
  _OWORD v32[7]; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v33[7]; // [rsp+A0h] [rbp-98h] BYREF

  v6 = a1[1];
  v32[0] = *a1;
  v7 = 2;
  v8 = a1[2];
  v32[1] = v6;
  v11 = a1[3];
  v32[2] = v8;
  v12 = a1[4];
  v32[3] = v11;
  v13 = a1[5];
  v32[4] = v12;
  v14 = a1[6];
  v32[5] = v13;
  v15 = a2[1];
  v32[6] = v14;
  v16 = *a2;
  v33[1] = v15;
  v17 = a2[3];
  v33[0] = v16;
  v18 = a2[2];
  v33[3] = v17;
  v19 = a2[5];
  v33[2] = v18;
  v20 = a2[4];
  v33[5] = v19;
  v33[4] = v20;
  v21 = a2[6];
  qword_1C0323E30 = a5;
  qword_1C0323E40 = 0LL;
  v33[6] = v21;
  qword_1C0323E28 = (__int64)v32;
  LocalGS = (__int64)v33;
  qword_1C0323DF8 = (__int64)v33;
  qword_1C0323E00 = (__int64)v33;
  dword_1C0323E48 = 0;
  dword_1C0323E0C = 0x4000;
  dword_1C0323E08 = 0x4000;
  dword_1C0323E10 = 0x4000;
  word_1C0323E58 = 0x4000;
  dword_1C0323E5C = 2;
  dword_1C0323E60 = 3;
  dword_1C0323E64 = 3;
  dword_1C0323E50 = 0;
  dword_1C0323E98 = *(_DWORD *)(a5 + 400);
  dword_1C0323E9C = *(_DWORD *)(a5 + 404);
  dword_1C0323EA0 = *(_DWORD *)(a5 + 408);
  word_1C0323E7C = *(_DWORD *)(a5 + 36) == 0;
  if ( *(_BYTE *)(a5 + 333) == 1 )
  {
    dword_1C0323E6C = 2;
    dword_1C0323E70 = 2;
    dword_1C0323E74 = 4;
    goto LABEL_10;
  }
  *(_WORD *)(a5 + 454) &= 0xFFE4u;
  v22 = *(_WORD *)(qword_1C0323E30 + 452);
  if ( (v22 & 1) == 0 )
    goto LABEL_3;
  if ( (v22 & 4) != 0 )
  {
    if ( dword_1C0323E08 != 0x4000 )
      goto LABEL_24;
LABEL_3:
    word_1C0323EA4 = 0;
    goto LABEL_4;
  }
  if ( dword_1C0323E08 == 0x40000000 )
    goto LABEL_3;
LABEL_24:
  word_1C0323EA4 = 1;
  if ( (*(_BYTE *)(qword_1C0323E30 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323E30 + 333) )
  {
    v23 = 1LL;
    goto LABEL_5;
  }
LABEL_4:
  v23 = 0LL;
LABEL_5:
  *(_DWORD *)(qword_1C0323E30 + 128) = itrp_RoundFunctionId[8 * v23 + *(unsigned __int16 *)(qword_1C0323E30 + 132)];
  word_1C0323EA8 = -1;
  word_1C0323EA6 = -1;
  if ( *(_WORD *)(a5 + 24) <= 1u )
    return 0LL;
  if ( *(_BYTE *)(a5 + 340) )
  {
    dword_1C0323E6C = 2;
    dword_1C0323E70 = 2;
    dword_1C0323E74 = 4;
  }
  else
  {
    dword_1C0323E6C = 3;
    dword_1C0323E70 = 3;
    dword_1C0323E74 = 5;
    word_1C0323E7C = 0;
  }
  v24 = *(_WORD *)(a5 + 154);
  if ( v24 )
  {
    *(_DWORD *)(a5 + 112) = InvokeGlobalGSScale(*(_DWORD *)(a5 + 192), (int *)(a5 + 296), v24);
    word_1C0323E7C = 0;
  }
LABEL_10:
  qword_1C0323E18 = *(_QWORD *)a5;
  qword_1C0323E38 = a6;
  dword_1C0323E80 = 0;
  if ( a6 )
    v7 = 1;
  dword_1C0323E68 = v7;
  if ( *(_BYTE *)(a5 + 333) == 2 && (*(_BYTE *)(a5 + 452) & 3) == 3 )
  {
    v28 = qword_1C0323E28;
    v29 = 0;
    if ( *(__int16 *)(*(_QWORD *)(qword_1C0323E28 + 176) + 2LL * *(__int16 *)(qword_1C0323E28 + 192) - 2) + 5 > 0 )
    {
      v30 = 0LL;
      do
      {
        v31 = *(_QWORD *)(v28 + 216);
        v30 += 12LL;
        ++v29;
        *(_WORD *)(v30 + v31 - 8) = -1;
        *(_WORD *)(v30 + v31 - 10) = -1;
        *(_WORD *)(v30 + v31 - 12) = -1;
        *(_WORD *)(v30 + v31 - 6) = 0;
        *(_DWORD *)(v30 + v31 - 4) = 0;
      }
      while ( v29 < *(__int16 *)(*(_QWORD *)(v28 + 176) + 2LL * *(__int16 *)(v28 + 192) - 2) + 5 );
    }
    *(_DWORD *)(v28 + 208) = 0;
    v7 = dword_1C0323E68;
  }
  v25 = v7 - 1;
  if ( v25 )
  {
    if ( v25 == 1 )
    {
      qword_1C0323E88 = a4;
      qword_1C0323E90 = (__int64)a3;
      if ( (unsigned __int64)a3 < a4 )
      {
        while ( 1 )
        {
          v26 = *a3;
          if ( !--dword_1C0323EA0 )
            break;
          a3 = (unsigned __int8 *)((__int64 (__fastcall *)(unsigned __int8 *))function[v26])(a3 + 1);
          if ( (unsigned __int64)a3 >= a4 )
            goto LABEL_19;
        }
        dword_1C0323E80 = 4366;
      }
    }
    else
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    itrp_InnerTraceExecute(a3, a4);
  }
LABEL_19:
  if ( *(_BYTE *)(qword_1C0323E30 + 333) == 2
    && (*(_BYTE *)(qword_1C0323E30 + 452) & 3) == 3
    && !*(_DWORD *)(qword_1C0323E28 + 208) )
  {
    ExecutePhaseControl(&LocalGS, qword_1C0323E28 + 112);
  }
  *(_DWORD *)(a5 + 408) = dword_1C0323EA0;
  return (unsigned int)dword_1C0323E80;
}
