/*
 * XREFs of ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C00D759C
 * Callers:
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00D78D0 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z @ 0x1C00D7D10 (-OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z.c)
 *     ?SetCollectionLabel@@YAHPEAEKPEAK@Z @ 0x1C00D7D74 (-SetCollectionLabel@@YAHPEAEKPEAK@Z.c)
 *     ?SetMultiByteValue@@YAHPEAEKPEAKPEAHK1@Z @ 0x1C00D7DDC (-SetMultiByteValue@@YAHPEAEKPEAKPEAHK1@Z.c)
 */

__int64 __fastcall BuildMainItem(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        unsigned int *a8)
{
  int v9; // r8d
  unsigned int v10; // r14d
  unsigned int v12; // r12d
  int v13; // edi
  __int128 v14; // xmm1
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int16 v21; // cx
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  unsigned int v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int16 v30; // cx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int16 v33; // cx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int8 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v44[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v45[4]; // [rsp+40h] [rbp-30h] BYREF
  int v46[4]; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  v10 = a2;
  v12 = *a8;
  v13 = *a7;
  v44[0] = *a8;
  v14 = a4[1];
  *(_OWORD *)v45 = *a4;
  *(_OWORD *)v46 = v14;
  if ( (unsigned int)a2 < 4 )
    return 0LL;
  if ( v13 )
  {
    *a7 = 0;
    v16 = OpenCollection(a1, a2, 0LL, a3);
    v17 = *a3;
    if ( v10 < (int)v17 + 2 )
      return 0LL;
    a1[v17] = -123;
    v18 = (unsigned int)(v17 + 1);
    a1[v18] = 1;
    *a3 = v18 + 1;
    if ( !v16 || !SetCollectionLabel(a1, v10, a3) )
      return 0LL;
    if ( a1[1] == 13 && (unsigned __int8)(a1[3] - 1) <= 1u )
      v19 = 1LL;
    else
      v19 = 2LL;
    v9 = OpenCollection(a1, v10, v19, a3);
  }
  v20 = *a3;
  if ( !v9 && v13 || (int)v20 + 4 > v10 )
    return 0LL;
  v21 = HIWORD(v45[0]);
  if ( v13 && HIWORD(v45[0]) != a1[1] || *(_WORD *)(a5 + 2) != HIWORD(v45[0]) )
  {
    a1[v20] = 5;
    v22 = (unsigned int)(v20 + 1);
    a1[v22] = v21;
    v20 = (unsigned int)(v22 + 1);
    *(_WORD *)(a5 + 2) = v21;
  }
  v23 = v45[1];
  a1[v20] = 9;
  v24 = (unsigned int)(v20 + 1);
  a1[v24] = v23;
  v25 = v24 + 1;
  v43 = v25;
  if ( !v9 )
  {
    if ( v13 )
      return 0LL;
  }
  if ( *(_DWORD *)(a5 + 8) != v45[2] || v13 )
  {
    v26 = SetMultiByteValue(a1, v10, &v43, &v45[2], 4u, 0LL);
    v25 = v43;
    v9 = v26;
    *(_DWORD *)(a5 + 8) = v45[2];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 12) != v45[3] || v13 )
  {
    v27 = SetMultiByteValue(a1, v10, &v43, &v45[3], 5u, v44);
    v25 = v43;
    v9 = v27;
    v12 = v44[0];
    *(_DWORD *)(a5 + 12) = v45[3];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 24) != v46[2] || v13 )
  {
    v28 = SetMultiByteValue(a1, v10, &v43, &v46[2], 0xDu, 0LL);
    v25 = v43;
    v9 = v28;
    *(_DWORD *)(a5 + 24) = v46[2];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 28) != v46[3] || v13 )
  {
    v29 = SetMultiByteValue(a1, v10, &v43, &v46[3], 0xEu, 0LL);
    v25 = v43;
    v9 = v29;
    *(_DWORD *)(a5 + 28) = v46[3];
  }
  if ( !v9 && v13 || v25 + 12 > v10 )
    return 0LL;
  v30 = v46[0];
  if ( *(_WORD *)(a5 + 16) != LOWORD(v46[0]) || v13 )
  {
    v31 = v25;
    v32 = v25 + 1;
    a1[v31] = 101;
    a1[v32] = v30;
    v25 = v32 + 1;
    *(_WORD *)(a5 + 16) = v30;
  }
  v33 = HIWORD(v46[0]);
  if ( *(_WORD *)(a5 + 18) != HIWORD(v46[0]) || v13 )
  {
    v34 = v25;
    v35 = v25 + 1;
    a1[v34] = 85;
    a1[v35] = v33;
    v25 = v35 + 1;
    *(_WORD *)(a5 + 18) = v33;
  }
  if ( *a8 != v12 )
  {
    v36 = v25;
    v37 = v25 + 1;
    a1[v36] = 117;
    a1[v37] = v12;
    v25 = v37 + 1;
    *a8 = v12;
  }
  v38 = v46[1];
  if ( *(_BYTE *)(a5 + 20) != LOBYTE(v46[1]) || v13 )
  {
    v39 = v25;
    v40 = v25 + 1;
    a1[v39] = -107;
    a1[v40] = v38;
    v25 = v40 + 1;
    *(_BYTE *)(a5 + 20) = v38;
  }
  v41 = v25;
  result = 1LL;
  v42 = v25 + 1;
  a1[v41] = -127;
  a1[v42] = 2;
  *a3 = v42 + 1;
  return result;
}
