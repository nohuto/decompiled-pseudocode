/*
 * XREFs of ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C0205CA0
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206950 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020A7DC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0204FC8 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C0205E54 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct _MOVESIZEDATA *a1, unsigned int a2, struct tagMONITOR *a3, unsigned int *a4)
{
  struct tagCHECKPOINT *v4; // rsi
  int v9; // ecx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // r9d
  int v15; // r11d
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned int v21; // edi
  __int64 v22; // r10
  int v23; // r9d
  int v24; // r11d
  int v25; // r8d
  int v26; // r9d
  int v27; // eax
  __int64 v28; // [rsp+40h] [rbp+8h]

  v4 = 0LL;
  if ( (*((_DWORD *)a1 + 45) & 0x400) != 0 )
  {
    LODWORD(v28) = (__int16)a2 - *((_DWORD *)a1 + 38);
    v9 = SHIWORD(a2) - *((_DWORD *)a1 + 39);
    HIDWORD(v28) = SHIWORD(a2) - *((_DWORD *)a1 + 39);
    if ( (_DWORD)v28 == *((_DWORD *)a1 + 69) && v9 == *((_DWORD *)a1 + 70) )
      return 0LL;
    v4 = GetOrUpdateCheckPointIfNotPresent(a1);
    if ( !v4 )
      return 0LL;
    *(_QWORD *)((char *)a1 + 276) = v28;
  }
  v11 = *((int *)a1 + 40);
  v12 = dword_1C02EBCB8[v11];
  if ( (int)v12 >= 0 )
  {
    v13 = dword_1C02EBCB8[v11];
    *((_DWORD *)a1 + v12 + 6) = (__int16)a2;
    v14 = v12 ^ 2;
    v15 = *((_DWORD *)a1 + v14 + 6);
    v16 = (__int16)a2 - v15;
    v17 = v14 & 2;
    if ( v17 )
      v16 = v15 - (__int16)a2;
    v18 = *((_DWORD *)a1 + 22);
    if ( v16 < v18
      || (v18 = *((_DWORD *)a1 + 24), v16 > v18)
      || (*(_BYTE *)(*(_QWORD *)a1 + 55LL) & 0x40) != 0 && (v18 = abs32(*((_DWORD *)a1 + v13 + 18) - v15), v16 > v18) )
    {
      if ( v17 )
        v18 = -v18;
      *((_DWORD *)a1 + v13 + 6) = v15 + v18;
    }
  }
  v19 = *((int *)a1 + 40);
  v20 = dword_1C02EBC88[v19];
  if ( (int)v20 >= 0 )
  {
    v21 = HIWORD(a2);
    v22 = dword_1C02EBC88[v19];
    *((_DWORD *)a1 + v20 + 6) = (__int16)v21;
    v23 = v20 ^ 2;
    v24 = *((_DWORD *)a1 + v23 + 6);
    v25 = (__int16)v21 - v24;
    v26 = v23 & 2;
    if ( v26 )
      v25 = v24 - (__int16)v21;
    v27 = *((_DWORD *)a1 + 23);
    if ( v25 < v27
      || (v27 = *((_DWORD *)a1 + 25), v25 > v27)
      || (*(_BYTE *)(*(_QWORD *)a1 + 55LL) & 0x40) != 0 && (v27 = abs32(*((_DWORD *)a1 + v22 + 18) - v24), v25 > v27) )
    {
      if ( v26 )
        v27 = -v27;
      *((_DWORD *)a1 + v22 + 6) = v24 + v27;
    }
  }
  if ( (*((_DWORD *)a1 + 45) & 0x400) != 0 )
    SnapSizeRect(a1, v4, a3, a4);
  return 1LL;
}
