/*
 * XREFs of ?MoveToTail@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJI@Z @ 0x180010A9C
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::MoveToTail(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r14d
  unsigned int v5; // r8d
  int v6; // edi
  __int64 v7; // r9
  unsigned int v8; // edi
  _OWORD *v9; // r10
  _OWORD *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  _OWORD *v28; // rcx
  _OWORD *v29; // rdx
  __int64 v30; // rcx
  _OWORD *v31; // rdx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  _OWORD *v34; // rcx
  _OWORD *v35; // rdx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  _BYTE v50[1904]; // [rsp+30h] [rbp-788h] BYREF

  v2 = 0;
  if ( a2 < *(_DWORD *)(a1 + 20) )
  {
    v4 = *(_DWORD *)(a1 + 12);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 16);
    v7 = (v4 + a2) % v5;
    if ( v6 )
      v8 = v6 - 1;
    else
      v8 = v5 - 1;
    if ( (_DWORD)v7 != v8 )
    {
      v9 = *(_OWORD **)a1;
      v10 = v50;
      v11 = 14LL;
      v12 = 14LL;
      v13 = &v9[119 * v7];
      do
      {
        v14 = v13[1];
        *v10 = *v13;
        v15 = v13[2];
        v10[1] = v14;
        v16 = v13[3];
        v10[2] = v15;
        v17 = v13[4];
        v10[3] = v16;
        v18 = v13[5];
        v10[4] = v17;
        v19 = v13[6];
        v10[5] = v18;
        v20 = v13[7];
        v13 += 8;
        v10[6] = v19;
        v10 += 8;
        *(v10 - 1) = v20;
        --v12;
      }
      while ( v12 );
      v21 = v13[1];
      *v10 = *v13;
      v22 = v13[2];
      v10[1] = v21;
      v23 = v13[3];
      v10[2] = v22;
      v24 = v13[4];
      v10[3] = v23;
      v25 = v13[5];
      v10[4] = v24;
      v26 = v13[6];
      v10[5] = v25;
      v10[6] = v26;
      if ( v4 >= v8 )
      {
        memmove(&v9[119 * v7], &v9[119 * (unsigned int)(v7 + 1)], 1904LL * (v5 - (unsigned int)v7 - 1));
        v30 = 14LL;
        v31 = *(_OWORD **)a1;
        v32 = (_OWORD *)(*(_QWORD *)a1 + 1904LL * (unsigned int)(*(_DWORD *)(a1 + 8) - 1));
        do
        {
          *v32 = *v31;
          v32[1] = v31[1];
          v32[2] = v31[2];
          v32[3] = v31[3];
          v32[4] = v31[4];
          v32[5] = v31[5];
          v32[6] = v31[6];
          v32 += 8;
          v33 = v31[7];
          v31 += 8;
          *(v32 - 1) = v33;
          --v30;
        }
        while ( v30 );
        *v32 = *v31;
        v32[1] = v31[1];
        v32[2] = v31[2];
        v32[3] = v31[3];
        v32[4] = v31[4];
        v32[5] = v31[5];
        v32[6] = v31[6];
        v28 = *(_OWORD **)a1;
        v27 = v8;
        v29 = (_OWORD *)(*(_QWORD *)a1 + 1904LL);
      }
      else
      {
        v27 = v8 - (unsigned int)v7;
        v28 = &v9[119 * v7];
        v29 = &v9[119 * (unsigned int)(v7 + 1)];
      }
      memmove(v28, v29, 1904 * v27);
      v34 = v50;
      v35 = (_OWORD *)(*(_QWORD *)a1 + 1904LL * v8);
      do
      {
        v36 = v34[1];
        *v35 = *v34;
        v37 = v34[2];
        v35[1] = v36;
        v38 = v34[3];
        v35[2] = v37;
        v39 = v34[4];
        v35[3] = v38;
        v40 = v34[5];
        v35[4] = v39;
        v41 = v34[6];
        v35[5] = v40;
        v42 = v34[7];
        v34 += 8;
        v35[6] = v41;
        v35 += 8;
        *(v35 - 1) = v42;
        --v11;
      }
      while ( v11 );
      v43 = v34[1];
      *v35 = *v34;
      v44 = v34[2];
      v35[1] = v43;
      v45 = v34[3];
      v35[2] = v44;
      v46 = v34[4];
      v35[3] = v45;
      v47 = v34[5];
      v35[4] = v46;
      v48 = v34[6];
      v35[5] = v47;
      v35[6] = v48;
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(a1, &MinInput_Warning_CheckResult, 4, 114, 87);
  }
  return v2;
}
