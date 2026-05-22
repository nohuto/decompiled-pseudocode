/*
 * XREFs of ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18002E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18002F094 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCGamepadProcessor::GetPoints(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+38h] [rbp-48h]
  int v7; // [rsp+3Ch] [rbp-44h]
  int v8; // [rsp+40h] [rbp-40h]
  int v9; // [rsp+44h] [rbp-3Ch]
  __int64 v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+50h] [rbp-30h]
  float v12; // [rsp+54h] [rbp-2Ch]
  __int64 v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  __int64 v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+78h] [rbp-8h]
  __int16 v20; // [rsp+7Ch] [rbp-4h]
  char v21; // [rsp+7Eh] [rbp-2h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v7 = 1;
  v8 = 4;
  v5 = *(_QWORD *)(a1 + 2544);
  v6 = *(_DWORD *)(a1 + 2552);
  v3 = *(_DWORD *)(a1 + 2072);
  if ( (v3 & 4) != 0 )
  {
    v9 = 1;
  }
  else if ( (v3 & 8) != 0 )
  {
    v9 = 2;
  }
  else if ( (v3 & 0x10) != 0 )
  {
    v9 = 4;
  }
  else if ( (v3 & 0x20) != 0 )
  {
    v9 = 8;
  }
  else
  {
    v9 = 16 * (*(_DWORD *)(a1 + 2072) & 1);
  }
  v20 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = FLOAT_1_0;
  v13 = 0LL;
  v14 = 0;
  v21 = 1;
  v15 = *(_DWORD *)(a1 + 2568);
  v16 = *(_DWORD *)(a1 + 2572);
  v17 = *(_DWORD *)(a1 + 2576);
  v18 = 0LL;
  v19 = 0;
  std::vector<PointData3D>::emplace_back<PointData3D const &>(a2, &v5);
  return a2;
}
