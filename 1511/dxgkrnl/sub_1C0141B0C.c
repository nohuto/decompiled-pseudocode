/*
 * XREFs of sub_1C0141B0C @ 0x1C0141B0C
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0140988 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     sub_1C0141E78 @ 0x1C0141E78 (sub_1C0141E78.c)
 *     sub_1C0141EC4 @ 0x1C0141EC4 (sub_1C0141EC4.c)
 */

__int64 __fastcall sub_1C0141B0C(unsigned __int64 a1, const void **a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int *v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r14d
  unsigned int *v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  __int64 v13; // rdx
  unsigned int v14; // edi
  unsigned int v15; // ebp
  unsigned int v16; // r14d
  __int64 v17; // rbx
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // r13
  unsigned int *v23; // rbx
  unsigned int v24; // r15d
  __int64 v25; // rbp
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  SIZE_T v29; // rax
  __int64 v30; // rdx
  PVOID v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  unsigned int v36; // r9d
  _DWORD *v37; // r8
  __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-48h]
  unsigned int v42; // [rsp+24h] [rbp-44h]
  unsigned int v43; // [rsp+28h] [rbp-40h]

  v42 = -1;
  v5 = a4;
  v6 = -1;
  v7 = a3;
  v41 = -1;
  v9 = (unsigned int *)a1;
  if ( a3 )
  {
    v10 = *(unsigned int *)a1;
    v43 = *(_DWORD *)a1;
    if ( a5 )
    {
      v11 = 0;
      v12 = 0;
      if ( v7 )
      {
        a1 = (unsigned __int64)v5;
        v13 = v7;
        do
        {
          if ( *(_DWORD *)a1 > v11 )
            v11 = *(_DWORD *)a1;
          if ( *(_DWORD *)(a1 + 4) > v12 )
            v12 = *(_DWORD *)(a1 + 4);
          a1 += 44LL;
          --v13;
        }
        while ( v13 );
      }
      v14 = 0;
      v15 = 0;
      if ( (_DWORD)v10 )
      {
        v16 = -1;
        do
        {
          v17 = (__int64)*a2 + 44 * v14;
          if ( v16 == -1 || (v18 = *(_DWORD *)v17, *(_DWORD *)v17 > v16) )
          {
            v18 = *(_DWORD *)v17;
            v16 = *(_DWORD *)v17;
          }
          if ( v6 == -1 || (a1 = *(unsigned int *)(v17 + 4), (unsigned int)a1 > v6) )
          {
            a1 = *(unsigned int *)(v17 + 4);
            v41 = *(_DWORD *)(v17 + 4);
          }
          if ( (*(_DWORD *)(v17 + 40) & 0x40) != 0 || v18 <= v11 && (unsigned int)a1 <= v12 )
          {
            if ( v14 != v15 )
            {
              if ( v14 <= v15 )
              {
                v19 = WdLogNewEntry5_WdAssertion(a1);
                *(_QWORD *)(v19 + 24) = 2320LL;
                WdLogEvent5_WdAssertion(v19);
              }
              a1 = (unsigned __int64)*a2;
              v20 = 44LL * v15;
              *(_OWORD *)(v20 + a1) = *(_OWORD *)v17;
              *(_OWORD *)(v20 + a1 + 16) = *(_OWORD *)(v17 + 16);
              *(_QWORD *)(v20 + a1 + 32) = *(_QWORD *)(v17 + 32);
              *(_DWORD *)(v20 + a1 + 40) = *(_DWORD *)(v17 + 40);
            }
            ++v15;
          }
          v6 = v41;
          ++v14;
        }
        while ( v14 < *v9 );
        v42 = v16;
        v7 = a3;
      }
      v5 = a4;
      *v9 = v15;
    }
    v21 = *v9;
    if ( v7 )
    {
      v22 = v7;
      v23 = v5;
      do
      {
        LOBYTE(v10) = 0;
        if ( (v23[10] & 0x40) == 0 && (*v23 > v42 || v23[1] > v6) )
          goto LABEL_42;
        v24 = 0;
        if ( !*v9 )
          goto LABEL_43;
        do
        {
          v25 = (__int64)*a2 + 44 * v24;
          if ( (unsigned __int8)sub_1C0141E78(v23, v25, v10) )
          {
            if ( v23[4] != *(_DWORD *)(v25 + 16) || v23[5] != *(_DWORD *)(v25 + 20) )
            {
              v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
              v26[3] = *v23;
              v26[4] = v23[1];
              v26[5] = (int)v23[2];
              v26[6] = v23[3];
              WdLogEvent5_WdDmmEvent(v26);
              v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27);
              v28[3] = v23[4];
              v28[4] = v23[5];
              v28[5] = *(unsigned int *)(v25 + 16);
              v28[6] = *(unsigned int *)(v25 + 20);
              WdLogEvent5_WdDmmEvent(v28);
            }
            sub_1C0141EC4(v25, v23);
            LOBYTE(v10) = 1;
          }
          ++v24;
        }
        while ( v24 < *v9 );
        if ( (_BYTE)v10 )
        {
LABEL_42:
          v23[10] = (unsigned __int8)v23[10];
        }
        else
        {
LABEL_43:
          a1 = (unsigned __int8)v23[10];
          LODWORD(a1) = a1 | 0x100;
          v23[10] = a1;
          ++v21;
        }
        v6 = v41;
        v23 += 11;
        --v22;
      }
      while ( v22 );
      v7 = a3;
    }
    if ( v21 > v43 )
    {
      v29 = 44LL * v21;
      if ( !is_mul_ok(v21, 0x2CuLL) )
        v29 = -1LL;
      v31 = operator new[](v29, 0x4B677844u, PagedPool);
      if ( !v31 )
      {
        v34 = WdLogNewEntry5_WdLowResource(a1, v30, v32, v33);
        *(_QWORD *)(v34 + 24) = v21;
        WdLogEvent5_WdLowResource(v34);
        return 3221225495LL;
      }
      if ( *a2 )
      {
        memmove(v31, *a2, 44LL * *v9);
        operator delete((void *)*a2);
      }
      *a2 = v31;
    }
    v36 = *v9;
    if ( *v9 < v21 )
    {
      if ( v7 )
      {
        v37 = a4 + 10;
        v38 = v7;
        do
        {
          if ( (*v37 & 0xFFFFFF00) != 0 )
          {
            *v37 = (unsigned __int8)*v37;
            a1 = (unsigned __int64)*a2;
            v39 = 44LL * v36++;
            *(_OWORD *)(v39 + a1) = *(_OWORD *)(v37 - 10);
            *(_OWORD *)(v39 + a1 + 16) = *(_OWORD *)(v37 - 6);
            *(_QWORD *)(v39 + a1 + 32) = *((_QWORD *)v37 - 1);
            *(_DWORD *)(v39 + a1 + 40) = *v37;
          }
          v37 += 11;
          --v38;
        }
        while ( v38 );
      }
      if ( v21 != v36 )
      {
        v40 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v40 + 24) = 2459LL;
        WdLogEvent5_WdAssertion(v40);
      }
    }
    *v9 = v21;
  }
  return 0LL;
}
