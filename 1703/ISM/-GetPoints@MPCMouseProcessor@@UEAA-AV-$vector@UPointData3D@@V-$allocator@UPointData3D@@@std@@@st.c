/*
 * XREFs of ?GetPoints@MPCMouseProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180042960
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18002F094 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCMouseProcessor::GetPoints(__int64 a1, _QWORD *a2)
{
  __int128 v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+40h] [rbp-40h]
  int v6; // [rsp+44h] [rbp-3Ch]
  __int64 v7; // [rsp+48h] [rbp-38h]
  int v8; // [rsp+50h] [rbp-30h]
  float v9; // [rsp+54h] [rbp-2Ch]
  __int64 v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int64 v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+78h] [rbp-8h]
  __int16 v17; // [rsp+7Ch] [rbp-4h]
  char v18; // [rsp+7Eh] [rbp-2h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  HIDWORD(v4) = 2;
  v5 = 3;
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 276);
  DWORD2(v4) = *(_DWORD *)(a1 + 284);
  v6 = *(_DWORD *)(a1 + 300) & 4 | ((((*(_BYTE *)(a1 + 262) != 0) + 1) & *(_DWORD *)(a1 + 300)) != 0) | ((*(_DWORD *)(a1 + 300) & (2 - (*(_BYTE *)(a1 + 262) != 0))) != 0 ? 2 : 0);
  v17 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = FLOAT_1_0;
  v10 = 0LL;
  v11 = 0;
  v18 = 1;
  v12 = *(_DWORD *)(a1 + 288);
  v13 = *(_DWORD *)(a1 + 292);
  v14 = *(_DWORD *)(a1 + 296);
  v15 = 0LL;
  v16 = 0;
  std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, &v4);
  return a2;
}
