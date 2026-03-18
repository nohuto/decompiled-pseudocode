/*
 * XREFs of ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01FD378
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0F0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C0201E1C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC678 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01FD52C (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct _MOVESIZEDATA *a1, unsigned int a2, struct tagMONITOR *a3, unsigned int *a4)
{
  struct tagCHECKPOINT *v4; // rsi
  int v9; // edx
  int v10; // ecx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // r9d
  int v16; // r11d
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned int v22; // edi
  __int64 v23; // r10
  int v24; // r9d
  int v25; // r11d
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  unsigned __int64 v29; // [rsp+40h] [rbp+8h]

  v4 = 0LL;
  if ( (*((_DWORD *)a1 + 45) & 0x400) != 0 )
  {
    v9 = (__int16)a2 - *((_DWORD *)a1 + 38);
    v10 = SHIWORD(a2) - *((_DWORD *)a1 + 39);
    v29 = __PAIR64__(v10, v9);
    if ( v9 == *((_DWORD *)a1 + 69) && v10 == *((_DWORD *)a1 + 70) )
      return 0LL;
    v4 = GetOrUpdateCheckPointIfNotPresent(a1);
    if ( !v4 )
      return 0LL;
    *(_QWORD *)((char *)a1 + 276) = v29;
  }
  v12 = *((int *)a1 + 40);
  v13 = dword_1C02F0338[v12];
  if ( (int)v13 >= 0 )
  {
    v14 = dword_1C02F0338[v12];
    *((_DWORD *)a1 + v13 + 6) = (__int16)a2;
    v15 = v13 ^ 2;
    v16 = *((_DWORD *)a1 + v15 + 6);
    v17 = (__int16)a2 - v16;
    v18 = v15 & 2;
    if ( v18 )
      v17 = v16 - (__int16)a2;
    v19 = *((_DWORD *)a1 + 22);
    if ( v17 < v19
      || (v19 = *((_DWORD *)a1 + 24), v17 > v19)
      || (*(_BYTE *)(*(_QWORD *)a1 + 55LL) & 0x40) != 0 && (v19 = abs32(*((_DWORD *)a1 + v14 + 18) - v16), v17 > v19) )
    {
      if ( v18 )
        v19 = -v19;
      *((_DWORD *)a1 + v14 + 6) = v16 + v19;
    }
  }
  v20 = *((int *)a1 + 40);
  v21 = dword_1C02F0308[v20];
  if ( (int)v21 >= 0 )
  {
    v22 = HIWORD(a2);
    v23 = dword_1C02F0308[v20];
    *((_DWORD *)a1 + v21 + 6) = (__int16)v22;
    v24 = v21 ^ 2;
    v25 = *((_DWORD *)a1 + v24 + 6);
    v26 = (__int16)v22 - v25;
    v27 = v24 & 2;
    if ( v27 )
      v26 = v25 - (__int16)v22;
    v28 = *((_DWORD *)a1 + 23);
    if ( v26 < v28
      || (v28 = *((_DWORD *)a1 + 25), v26 > v28)
      || (*(_BYTE *)(*(_QWORD *)a1 + 55LL) & 0x40) != 0 && (v28 = abs32(*((_DWORD *)a1 + v23 + 18) - v25), v26 > v28) )
    {
      if ( v27 )
        v28 = -v28;
      *((_DWORD *)a1 + v23 + 6) = v25 + v28;
    }
  }
  if ( (*((_DWORD *)a1 + 45) & 0x400) != 0 )
    SnapSizeRect(a1, v4, a3, a4);
  return 1LL;
}
