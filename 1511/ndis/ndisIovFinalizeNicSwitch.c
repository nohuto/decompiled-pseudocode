/*
 * XREFs of ndisIovFinalizeNicSwitch @ 0x1C0064228
 * Callers:
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0064A80 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AB088 (ndisIovCreateDefaultNicSwitch.c)
 * Callees:
 *     ndisIovAddSwitchToList @ 0x1C0063C78 (ndisIovAddSwitchToList.c)
 */

__int64 __fastcall ndisIovFinalizeNicSwitch(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rax
  _OWORD *v6; // r10
  __int128 v10; // xmm1
  __int64 result; // rax
  __int64 v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx

  v5 = 4LL;
  v6 = (_OWORD *)(a3 + 100);
  do
  {
    *v6 = *a2;
    v6[1] = a2[1];
    v6[2] = a2[2];
    v6[3] = a2[3];
    v6[4] = a2[4];
    v6[5] = a2[5];
    v6[6] = a2[6];
    v6 += 8;
    v10 = a2[7];
    a2 += 8;
    *(v6 - 1) = v10;
    --v5;
  }
  while ( v5 );
  *v6 = *a2;
  v6[1] = a2[1];
  *((_QWORD *)v6 + 4) = *((_QWORD *)a2 + 4);
  result = ndisIovAddSwitchToList(a1, a3);
  if ( !(_DWORD)result )
  {
    v12 = *(_QWORD *)(a3 + 56);
    v13 = a5 + 4;
    a5[4] = v12;
    a5[5] = a3 + 56;
    if ( *(_QWORD *)(v12 + 8) != a3 + 56 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(a3 + 56) = v13;
    ++*(_DWORD *)(a3 + 48);
    v14 = a5 + 6;
    v15 = *(_QWORD *)(a4 + 32);
    a5[6] = v15;
    a5[7] = a4 + 32;
    if ( *(_QWORD *)(v15 + 8) != a4 + 32 )
      __fastfail(3u);
    *(_QWORD *)(v15 + 8) = v14;
    *(_QWORD *)(a4 + 32) = v14;
    ++*(_DWORD *)(a4 + 28);
    *(_QWORD *)(a1 + 4744) = a4;
    v16 = *(_QWORD *)(a1 + 4808);
    *a5 = v16;
    a5[1] = a1 + 4808;
    if ( *(_QWORD *)(v16 + 8) != a1 + 4808 )
      __fastfail(3u);
    *(_QWORD *)(v16 + 8) = a5;
    *(_QWORD *)(a1 + 4808) = a5;
    ++*(_DWORD *)(a1 + 4800);
    return 0LL;
  }
  return result;
}
