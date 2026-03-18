/*
 * XREFs of ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C0182448
 * Callers:
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01820E4 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01821D8 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01846E4 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00A44DC (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::SwapPathsDescriptors(void **this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  _WORD *v6; // r9
  unsigned __int16 v7; // ax
  char *v8; // rdx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  _OWORD *v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-E8h]
  __int128 v14; // [rsp+30h] [rbp-D8h]
  __int128 v15; // [rsp+40h] [rbp-C8h]
  __int128 v16; // [rsp+50h] [rbp-B8h]
  __int128 v17; // [rsp+60h] [rbp-A8h]
  __int128 v18; // [rsp+70h] [rbp-98h]
  __int128 v19; // [rsp+80h] [rbp-88h]
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h]
  __int128 v22; // [rsp+B0h] [rbp-58h]
  __int128 v23; // [rsp+C0h] [rbp-48h]
  __int128 v24; // [rsp+D0h] [rbp-38h]
  __int128 v25; // [rsp+E0h] [rbp-28h]
  __int64 v26; // [rsp+F0h] [rbp-18h]

  v3 = a3;
  v5 = a2;
  CCD_TOPOLOGY::ClearModalitySetId(this);
  v6 = this[8];
  v7 = 0;
  if ( v6 )
    v7 = v6[10];
  if ( (unsigned int)v5 >= v7 || (unsigned int)v3 >= v7 )
    return 3221225485LL;
  v8 = (char *)&v6[108 * v5 + 24];
  v13 = *(_OWORD *)v8;
  v14 = *((_OWORD *)v8 + 1);
  v15 = *((_OWORD *)v8 + 2);
  v16 = *((_OWORD *)v8 + 3);
  v17 = *((_OWORD *)v8 + 4);
  v18 = *((_OWORD *)v8 + 5);
  v19 = *((_OWORD *)v8 + 6);
  v20 = *((_OWORD *)v8 + 7);
  v21 = *((_OWORD *)v8 + 8);
  v22 = *((_OWORD *)v8 + 9);
  v23 = *((_OWORD *)v8 + 10);
  v24 = *((_OWORD *)v8 + 11);
  v25 = *((_OWORD *)v8 + 12);
  v26 = *((_QWORD *)v8 + 26);
  v9 = &v6[108 * v3 + 24];
  *(_OWORD *)v8 = *v9;
  *((_OWORD *)v8 + 1) = v9[1];
  *((_OWORD *)v8 + 2) = v9[2];
  *((_OWORD *)v8 + 3) = v9[3];
  *((_OWORD *)v8 + 4) = v9[4];
  *((_OWORD *)v8 + 5) = v9[5];
  *((_OWORD *)v8 + 6) = v9[6];
  v8 += 128;
  v10 = v9[7];
  v9 += 8;
  *((_OWORD *)v8 - 1) = v10;
  *(_OWORD *)v8 = *v9;
  *((_OWORD *)v8 + 1) = v9[1];
  *((_OWORD *)v8 + 2) = v9[2];
  *((_OWORD *)v8 + 3) = v9[3];
  *((_OWORD *)v8 + 4) = v9[4];
  *((_QWORD *)v8 + 10) = *((_QWORD *)v9 + 10);
  v11 = (char *)this[8] + 216 * v3 + 48;
  *v11 = v13;
  v11[1] = v14;
  v11[2] = v15;
  v11[3] = v16;
  v11[4] = v17;
  v11[5] = v18;
  v11[6] = v19;
  v11 += 8;
  *(v11 - 1) = v20;
  *v11 = v21;
  v11[1] = v22;
  v11[2] = v23;
  v11[3] = v24;
  v11[4] = v25;
  *((_QWORD *)v11 + 10) = v26;
  return 0LL;
}
