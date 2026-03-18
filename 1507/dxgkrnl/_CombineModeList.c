/*
 * XREFs of _CombineModeList @ 0x1C013B6E0
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _IsDisplayModeMatch @ 0x1C013BA4C (_IsDisplayModeMatch.c)
 *     _UpgradeDispModeFlags @ 0x1C013BA98 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned int *a1, __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v5; // r13d
  unsigned int v6; // ebp
  __int64 v8; // rcx
  unsigned int *v9; // rax
  void **v10; // r12
  _DWORD *v11; // r8
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  unsigned int *v14; // rcx
  unsigned int v15; // esi
  unsigned int v16; // ebx
  unsigned int *v17; // r14
  __int64 v18; // rax
  char *v19; // rcx
  unsigned int v20; // esi
  unsigned int *v21; // rbx
  unsigned int v22; // r15d
  __int64 v23; // r14
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  SIZE_T v28; // rax
  PVOID v29; // rbx
  __int64 v30; // rax
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-48h]
  unsigned int v36; // [rsp+24h] [rbp-44h]
  __int64 v37; // [rsp+28h] [rbp-40h]
  void **v38; // [rsp+78h] [rbp+10h]

  v38 = (void **)a2;
  v5 = -1;
  v6 = a3;
  v8 = 0xFFFFFFFFLL;
  v35 = -1;
  v9 = a4;
  v10 = (void **)a2;
  if ( a3 )
  {
    v11 = (_DWORD *)*a1;
    v36 = *a1;
    if ( a5 )
    {
      v12 = 0;
      v13 = 0;
      if ( v6 )
      {
        v14 = a4;
        a2 = v6;
        do
        {
          if ( *v14 > v12 )
            v12 = *v14;
          if ( v14[1] > v13 )
            v13 = v14[1];
          v14 += 11;
          --a2;
        }
        while ( a2 );
      }
      v8 = 0LL;
      v5 = 0;
      v15 = 0;
      v35 = 0;
      v16 = 0;
      if ( (_DWORD)v11 )
      {
        do
        {
          v17 = (unsigned int *)((char *)*v38 + 44 * v15);
          a2 = *v17;
          v11 = (_DWORD *)v17[1];
          if ( (unsigned int)a2 > v5 )
            v5 = *v17;
          if ( (unsigned int)v11 > (unsigned int)v8 )
            v8 = (unsigned int)v11;
          v35 = v8;
          if ( (v17[10] & 0x40) != 0 || (unsigned int)a2 <= v12 && (unsigned int)v11 <= v13 )
          {
            if ( v15 != v16 )
            {
              if ( v15 <= v16 )
              {
                v18 = WdLogNewEntry5_WdAssertion(v8, a2, v11, a4);
                *(_QWORD *)(v18 + 24) = 2251LL;
                WdLogEvent5_WdAssertion(v18);
              }
              v19 = (char *)*v38;
              a2 = 44LL * v16;
              *(_OWORD *)&v19[a2] = *(_OWORD *)v17;
              *(_OWORD *)&v19[a2 + 16] = *((_OWORD *)v17 + 1);
              *(_QWORD *)&v19[a2 + 32] = *((_QWORD *)v17 + 4);
              *(_DWORD *)&v19[a2 + 40] = v17[10];
              v8 = v35;
            }
            ++v16;
          }
          ++v15;
        }
        while ( v15 < *a1 );
        v6 = a3;
      }
      v10 = v38;
      v9 = a4;
      *a1 = v16;
    }
    v20 = *a1;
    if ( v6 )
    {
      a2 = v6;
      v21 = v9;
      v37 = v6;
      do
      {
        LOBYTE(v11) = 0;
        if ( (v21[10] & 0x40) == 0 && (*v21 > v5 || v21[1] > (unsigned int)v8) )
          goto LABEL_40;
        v22 = 0;
        if ( !*a1 )
          goto LABEL_40;
        do
        {
          v23 = (__int64)*v10 + 44 * v22;
          if ( (unsigned __int8)IsDisplayModeMatch(v21, v23, v11) )
          {
            if ( v21[4] != *(_DWORD *)(v23 + 16) || v21[5] != *(_DWORD *)(v23 + 20) )
            {
              v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24);
              v25[3] = *v21;
              v25[4] = v21[1];
              v25[5] = (int)v21[2];
              v25[6] = v21[3];
              WdLogEvent5_WdDmmEvent(v25);
              v27 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26);
              v27[3] = v21[4];
              v27[4] = v21[5];
              v27[5] = *(unsigned int *)(v23 + 16);
              v27[6] = *(unsigned int *)(v23 + 20);
              WdLogEvent5_WdDmmEvent(v27);
            }
            UpgradeDispModeFlags(v23, v21);
            LOBYTE(v11) = 1;
          }
          ++v22;
        }
        while ( v22 < *a1 );
        a2 = v37;
        if ( (_BYTE)v11 )
        {
          v21[10] = (unsigned __int8)v21[10];
        }
        else
        {
LABEL_40:
          v21[10] = (unsigned __int8)v21[10] | 0x100;
          ++v20;
        }
        v8 = v35;
        v21 += 11;
        v37 = --a2;
      }
      while ( a2 );
    }
    if ( v20 > v36 )
    {
      v28 = 44LL * v20;
      if ( !is_mul_ok(v20, 0x2CuLL) )
        v28 = -1LL;
      v29 = operator new[](v28, 0x4B677844u, PagedPool);
      if ( !v29 )
      {
        v30 = WdLogNewEntry5_WdLowResource(v8);
        *(_QWORD *)(v30 + 24) = v20;
        WdLogEvent5_WdLowResource(v30);
        return 3221225495LL;
      }
      a2 = (__int64)*v10;
      if ( *v10 )
      {
        memmove(v29, (const void *)a2, 44LL * *a1);
        operator delete(*v10);
      }
      *v10 = v29;
    }
    v32 = *a1;
    if ( (unsigned int)v32 < v20 )
    {
      if ( v6 )
      {
        v11 = a4 + 10;
        v33 = v6;
        do
        {
          if ( (*v11 & 0xFFFFFF00) != 0 )
          {
            *v11 = (unsigned __int8)*v11;
            v8 = (__int64)*v10;
            a2 = 44LL * (unsigned int)v32;
            v32 = (unsigned int)(v32 + 1);
            *(_OWORD *)(a2 + v8) = *(_OWORD *)(v11 - 10);
            *(_OWORD *)(a2 + v8 + 16) = *(_OWORD *)(v11 - 6);
            *(_QWORD *)(a2 + v8 + 32) = *((_QWORD *)v11 - 1);
            *(_DWORD *)(a2 + v8 + 40) = *v11;
          }
          v11 += 11;
          --v33;
        }
        while ( v33 );
      }
      if ( v20 != (_DWORD)v32 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v8, a2, v11, v32);
        *(_QWORD *)(v34 + 24) = 2389LL;
        WdLogEvent5_WdAssertion(v34);
      }
    }
    *a1 = v20;
  }
  return 0LL;
}
