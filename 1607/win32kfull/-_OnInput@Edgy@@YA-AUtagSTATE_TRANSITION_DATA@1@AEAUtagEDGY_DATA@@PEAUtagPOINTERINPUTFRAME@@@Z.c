/*
 * XREFs of ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C02202EC
 * Callers:
 *     ?ProcessInput@Edgy@@YAHPEAUtagPOINTERINPUTFRAME@@PEAPEBU2@@Z @ 0x1C021F7CC (-ProcessInput@Edgy@@YAHPEAUtagPOINTERINPUTFRAME@@PEAPEBU2@@Z.c)
 * Callees:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C021F948 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?_OnStateTransition@Edgy@@YAPEBUtagPOINTERINPUTFRAME@@AEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C02203B0 (-_OnStateTransition@Edgy@@YAPEBUtagPOINTERINPUTFRAME@@AEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtag.c)
 */

__int64 __fastcall Edgy::_OnInput(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ArcData; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // r10d
  _DWORD *v12; // rcx
  _OWORD v14[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h]
  _BYTE v16[64]; // [rsp+58h] [rbp-40h] BYREF

  ArcData = Edgy::_GetArcData((__int64)v16, a2, a3);
  v6 = *(int *)(a2 + 16);
  v7 = 4LL;
  v8 = dword_1C02F0510[v6];
  v9 = *(_OWORD *)(ArcData + 16);
  v14[0] = *(_OWORD *)ArcData;
  v10 = *(_OWORD *)(ArcData + 32);
  v14[1] = v9;
  *(_QWORD *)&v9 = *(_QWORD *)(ArcData + 48);
  v14[2] = v10;
  v15 = v9;
  v11 = dword_1C02F0510[(int)v6 + 1];
  if ( v8 < v11 )
  {
    v12 = (_DWORD *)((char *)&unk_1C02F039C + 16 * v8);
    while ( (DWORD2(v14[0]) & *(v12 - 1)) != *v12 )
    {
      ++v8;
      v12 += 4;
      if ( v8 >= v11 )
        goto LABEL_7;
    }
    v7 = (unsigned int)*(v12 - 2);
  }
LABEL_7:
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = v7;
  if ( (_DWORD)v6 != (_DWORD)v7 )
    *(_QWORD *)(a1 + 8) = Edgy::_OnStateTransition(a2, v7, v14);
  return a1;
}
