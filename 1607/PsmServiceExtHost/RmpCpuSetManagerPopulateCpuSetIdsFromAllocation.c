/*
 * XREFs of RmpCpuSetManagerPopulateCpuSetIdsFromAllocation @ 0x1800314A4
 * Callers:
 *     ?RmpCpuSetManagerPublishServiceAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030E0C (-RmpCpuSetManagerPublishServiceAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_NAME@@@Z @ 0x180031C20 (-RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_N.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm1
  __int64 v4; // rbx
  unsigned int v7; // r10d
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  _OWORD v19[10]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = *(_OWORD *)(a1 + 128);
  v4 = 0LL;
  v19[0] = *(_OWORD *)(a1 + 112);
  v7 = 0;
  v8 = *(_OWORD *)(a1 + 144);
  v19[1] = v3;
  v9 = *(_OWORD *)(a1 + 160);
  v19[2] = v8;
  v10 = *(_OWORD *)(a1 + 176);
  v19[3] = v9;
  v11 = *(_OWORD *)(a1 + 192);
  v19[4] = v10;
  v12 = *(_OWORD *)(a1 + 208);
  v19[5] = v11;
  v19[6] = v12;
  v13 = *(_OWORD *)(a1 + 240);
  v19[7] = *(_OWORD *)(a1 + 224);
  v14 = *(_OWORD *)(a1 + 256);
  v19[8] = v13;
  v19[9] = v14;
  v15 = (unsigned __int64 *)v19;
  do
  {
    v16 = *v15;
    if ( *v15 )
    {
      do
      {
        _BitScanForward64(&v17, v16);
        v16 &= ~(1LL << v17);
        *(_DWORD *)(a3 + 4 * v4) = v17 | (v7 << 16) | 0x100;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( v16 );
      *v15 = 0LL;
    }
    if ( (_DWORD)v4 == *(_DWORD *)(a1 + 272) )
      break;
    ++v7;
    ++v15;
  }
  while ( v7 < 0x14 );
  result = *(unsigned int *)(a1 + 272);
  *a2 = result;
  return result;
}
