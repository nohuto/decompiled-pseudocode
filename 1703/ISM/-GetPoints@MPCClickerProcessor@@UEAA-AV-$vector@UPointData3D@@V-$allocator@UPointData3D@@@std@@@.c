/*
 * XREFs of ?GetPoints@MPCClickerProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18004A420
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18002F094 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCClickerProcessor::GetPoints(__int64 a1, _QWORD *a2)
{
  __int128 v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+40h] [rbp-40h]
  int v6; // [rsp+44h] [rbp-3Ch]
  __int64 v7; // [rsp+48h] [rbp-38h]
  int v8; // [rsp+50h] [rbp-30h]
  float v9; // [rsp+54h] [rbp-2Ch]
  __int64 v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+64h] [rbp-1Ch]
  int v13; // [rsp+6Ch] [rbp-14h]
  __int64 v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+78h] [rbp-8h]
  __int16 v16; // [rsp+7Ch] [rbp-4h]
  char v17; // [rsp+7Eh] [rbp-2h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  HIDWORD(v4) = 1;
  v5 = 2;
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 2096);
  DWORD2(v4) = *(_DWORD *)(a1 + 2104);
  v6 = *(_DWORD *)(a1 + 2064);
  v16 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = FLOAT_1_0;
  v10 = 0LL;
  v11 = 0;
  v17 = 1;
  v12 = *(_QWORD *)(a1 + 2108);
  v13 = *(_DWORD *)(a1 + 2116);
  v14 = 0LL;
  v15 = 0;
  std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, &v4);
  return a2;
}
