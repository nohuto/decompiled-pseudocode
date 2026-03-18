/*
 * XREFs of _CombineModeList @ 0x1C01639B8
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00C5804 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _IsDisplayModeMatch @ 0x1C0163D24 (_IsDisplayModeMatch.c)
 *     _UpgradeDispModeFlags @ 0x1C0163D70 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned __int64 a1, const void **a2, unsigned int a3, unsigned int *a4, char a5)
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
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  SIZE_T v30; // rax
  PVOID v31; // rbx
  __int64 v32; // rax
  unsigned int v34; // r9d
  _DWORD *v35; // r8
  __int64 v36; // r10
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-48h]
  unsigned int v40; // [rsp+24h] [rbp-44h]
  unsigned int v41; // [rsp+28h] [rbp-40h]

  v40 = -1;
  v5 = a4;
  v6 = -1;
  v7 = a3;
  v39 = -1;
  v9 = (unsigned int *)a1;
  if ( a3 )
  {
    v10 = *(unsigned int *)a1;
    v41 = *(_DWORD *)a1;
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
            v39 = *(_DWORD *)(v17 + 4);
          }
          if ( (*(_DWORD *)(v17 + 40) & 0x40) != 0 || v18 <= v11 && (unsigned int)a1 <= v12 )
          {
            if ( v14 != v15 )
            {
              if ( v14 <= v15 )
              {
                v19 = WdLogNewEntry5_WdAssertion(a1);
                *(_QWORD *)(v19 + 24) = 2325LL;
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
          v6 = v39;
          ++v14;
        }
        while ( v14 < *v9 );
        v40 = v16;
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
        if ( (v23[10] & 0x40) == 0 && (*v23 > v40 || v23[1] > v6) )
          goto LABEL_42;
        v24 = 0;
        if ( !*v9 )
          goto LABEL_43;
        do
        {
          v25 = (__int64)*a2 + 44 * v24;
          if ( (unsigned __int8)IsDisplayModeMatch(v23, v25, v10) )
          {
            if ( v23[4] != *(_DWORD *)(v25 + 16) || v23[5] != *(_DWORD *)(v25 + 20) )
            {
              v27 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
              v27[3] = *v23;
              v27[4] = v23[1];
              v27[5] = (int)v23[2];
              v27[6] = v23[3];
              WdLogEvent5_WdDmmEvent(v27);
              v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v28);
              v29[3] = v23[4];
              v29[4] = v23[5];
              v29[5] = *(unsigned int *)(v25 + 16);
              v29[6] = *(unsigned int *)(v25 + 20);
              WdLogEvent5_WdDmmEvent(v29);
            }
            UpgradeDispModeFlags(v25, v23, v10, v26);
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
        v6 = v39;
        v23 += 11;
        --v22;
      }
      while ( v22 );
      v7 = a3;
    }
    if ( v21 > v41 )
    {
      v30 = 44LL * v21;
      if ( !is_mul_ok(v21, 0x2CuLL) )
        v30 = -1LL;
      v31 = operator new(v30, 0x4B677844u, PagedPool);
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdLowResource(a1);
        *(_QWORD *)(v32 + 24) = v21;
        WdLogEvent5_WdLowResource(v32);
        return 3221225495LL;
      }
      if ( *a2 )
      {
        memmove(v31, *a2, 44LL * *v9);
        operator delete((void *)*a2);
      }
      *a2 = v31;
    }
    v34 = *v9;
    if ( *v9 < v21 )
    {
      if ( v7 )
      {
        v35 = a4 + 10;
        v36 = v7;
        do
        {
          if ( (*v35 & 0xFFFFFF00) != 0 )
          {
            *v35 = (unsigned __int8)*v35;
            a1 = (unsigned __int64)*a2;
            v37 = 44LL * v34++;
            *(_OWORD *)(v37 + a1) = *(_OWORD *)(v35 - 10);
            *(_OWORD *)(v37 + a1 + 16) = *(_OWORD *)(v35 - 6);
            *(_QWORD *)(v37 + a1 + 32) = *((_QWORD *)v35 - 1);
            *(_DWORD *)(v37 + a1 + 40) = *v35;
          }
          v35 += 11;
          --v36;
        }
        while ( v36 );
      }
      if ( v21 != v34 )
      {
        v38 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v38 + 24) = 2464LL;
        WdLogEvent5_WdAssertion(v38);
      }
    }
    *v9 = v21;
  }
  return 0LL;
}
